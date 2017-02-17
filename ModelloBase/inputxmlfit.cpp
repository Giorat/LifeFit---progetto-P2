#include <QFile>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <QDebug>
#include <QDate>
#include <QTime>


#include <iostream>
#include "utente.h"


#include "inputxmlfit.h"

bool inputxmlfit::utenteGiaPresente(const utente &user){

     usersXMLFile.open(QFile::ReadOnly | QFile::Text);

     bool nom,cognom=nom=false;

    QXmlStreamReader reader(&usersXMLFile);
        if (reader.readNextStartElement()) {
            if (reader.name() == "utenti")
                while(reader.readNextStartElement())
                    if(reader.name() == "utente" && !(nom && cognom)){

                        cognom=nom=false;
                        while(reader.readNextStartElement()){
                            QString qs = reader.readElementText();
                            std::string s = qs.toUtf8().constData();
                            if(reader.name() == "nome" && user.getNome() == s)
                                nom=true;
                            if(reader.name() == "cognome" && user.getCognome() == s)
                                cognom=true;
                        }//dati utente
                    }//utente
            }//documento utenti
  usersXMLFile.close();
  return (nom && cognom);
}


  inputxmlfit::inputxmlfit(std::string dir):DirectoryToSave(dir), xmlUsers(DirectoryToSave+"users.xml")
{

      usersXMLFile.setFileName(QString::fromStdString(xmlUsers));


         if(!usersXMLFile.open(QFile::ReadOnly |
                       QFile::Text))
         {

            usersXMLFile.close();
                if(!usersXMLFile.open(QFile::WriteOnly |
                              QFile::Text))
                {
                    qDebug() << " Could not open file for writing";
                    return;
                }


                QXmlStreamWriter writer;
                writer.setDevice(&usersXMLFile);
                writer.setAutoFormatting(true);
                writer.writeStartDocument();
                    writer.writeStartElement("utenti");
                        writer.writeStartElement("utente");
                        writer.writeTextElement("codiceutente", "0" );
                        writer.writeTextElement("nome", "root" );
                        writer.writeTextElement("cognome", "admin");
                        writer.writeTextElement("datanascita", "1996-12-20");
                QString pass = QString(QCryptographicHash::hash(("root"),QCryptographicHash::Md5).toHex());
                        writer.writeTextElement("password", pass);
                        writer.writeEndElement();

                    writer.writeEndElement();

                writer.writeEndDocument();

                usersXMLFile.close();

         }


}


  bool inputxmlfit::createUser(const utente &user){

      if(!utenteGiaPresente(user)){
        std::cout << "creo l'utente!";
     int nNuovoUtente = this->LastCodUtente();

      usersXMLFile.open(QFile::ReadOnly | QFile::Text);

      QString outS;
      QXmlStreamWriter writer(&outS);
      writer.setAutoFormatting(true);

      QXmlStreamReader reader(&usersXMLFile);
      while(!reader.atEnd())
      {
        if(reader.isStartDocument())
          writer.writeStartDocument();

        if(reader.isStartElement())
        {
          writer.writeStartElement(reader.name().toString());

          // New elements are appended here
          if(reader.name() == "utenti")
          {
            writer.writeStartElement("utente");

            writer.writeTextElement("codiceutente", QString::number(nNuovoUtente+1) );
            writer.writeTextElement("nome", QString::fromStdString(user.getNome()) );
            writer.writeTextElement("cognome", QString::fromStdString(user.getCognome()) );
            writer.writeTextElement("datanascita", user.getDataNascita().toString("yyyy-MM-dd").toUtf8().constData());
            QString pass = QString(QCryptographicHash::hash(("password"),QCryptographicHash::Md5).toHex());
            writer.writeTextElement("password", pass);

            writer.writeEndElement();
          }
        }

        if(reader.isCharacters())
          writer.writeCharacters(reader.text().toString());

        if(reader.isEndElement())
          writer.writeEndElement();

        if(reader.isEndDocument())
          writer.writeEndElement();

        reader.readNext();
      }

    usersXMLFile.close();


    usersXMLFile.open(QFile::WriteOnly |QFile::Text);


    QTextStream out(&usersXMLFile);
    out << outS;
    usersXMLFile.flush();
    usersXMLFile.close();
    }//fine if utente non ancora creato
  }
  
  
  
  int inputxmlfit::LastCodUtente(){
    int codUt = -1;
    usersXMLFile.close();
    usersXMLFile.open(QFile::ReadOnly | QFile::Text);
    QXmlStreamReader reader(&usersXMLFile);

    if (reader.readNextStartElement()) {
        if (reader.name() == "utenti"){
            reader.readNextStartElement();
                if(reader.name() == "utente")
                    while(reader.readNextStartElement()){

                            QString qs = reader.readElementText();
                            std::string s = qs.toUtf8().constData();
                            if(reader.name() == "codiceutente"){
                            int n = std::stoi(s);
                            if(n > codUt)
                               codUt = n;
                            }
                    }
                }

    }
    usersXMLFile.close();
    return codUt;
  }




  void inputxmlfit::saveUser(const utente &user){
    usersXMLFile.open(QFile::ReadOnly | QFile::Text);
  }


  void inputxmlfit::inputXMLdatiMovimSleep(std::string fileInputXml,utente& user){

    QFile file;
    file.setFileName(QString::fromStdString(fileInputXml));
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Cannot read file" << file.errorString();
        exit(0);
    }

    QXmlStreamReader reader(&file);

    QDate d;
    att_mov m;

    int cal_mov;
    int passi;
    float dist;
    float perc_camminata = 100;
    //float perc_inattivo = 100-perc_camminata
    int piani;

    int minuti_letto;
    int minuti_dormito;
    int andatoLetto;
    int svegliaLetto;
    int eff_sonno;

    att_sonno s;
QTime t;

    if (reader.readNextStartElement()) {
        if (reader.name() == "vita"){
            while(reader.readNextStartElement()){
                if(reader.name() == "giorno"){
                    while(reader.readNextStartElement()){
                        QString qs = reader.readElementText();
                        std::string s = qs.toUtf8().constData();
                        if(s.empty())
                            s="0";
                        if(reader.name() == "dateTime")
                          d = QDate::fromString(qs,"yyyy-MM-dd");
                        if(reader.name() == "activities-calories")
                          cal_mov = std::stoi(s);
                        if(reader.name() == "activities-steps")
                           passi = std::stoi(s);
                        if(reader.name() == "Activities-distance")
                           dist = std::stoi(s);
                        if(reader.name() == "activities-floors")
                           piani = std::stoi(s);
                        if(reader.name() == "sleep-startTime"){
                            t = QTime::fromString(qs,"HH:mm");
                            andatoLetto = t.hour()*60+t.minute();
                        }
                        if(reader.name() == "sleep-timeInBed")
                            minuti_letto =  std::stoi(s);


                        if(reader.name() == "sleep-minutesAsleep")
                            minuti_dormito =  std::stoi(s);

                        if(reader.name() == "sleep-efficiency")
                            eff_sonno =  std::stoi(s);
                    }
                    m = att_mov(cal_mov,passi,dist,perc_camminata,piani);
                    t=t.addSecs(60*minuti_letto);
                    svegliaLetto = t.hour()*60+t.minute();
                    s = att_sonno(static_cast<int>(t.hour()*1.05180646446),orario(andatoLetto),orario(svegliaLetto),minuti_letto,minuti_dormito);

                   user.insert_gg(d,giorno(d,m,s));
                }
                else
                    reader.skipCurrentElement();
            }
        }
        else
            reader.raiseError(QObject::tr("Incorrect file"));
    }

file.close();


}

 void inputxmlfit::outputXMLdatiMovimSleep(const utente& user){
     std::string fileOutputXml = DirectoryToSave+std::to_string(user.getCodiceUtente())+"att.xml";

     QFile file;
     file.setFileName(QString::fromStdString(fileOutputXml));
     if(!file.open(QFile::WriteOnly | QFile::Text)){
         qDebug() << "Cannot write to file" << file.errorString();
         exit(0);
     }

     QXmlStreamWriter writer;
     writer.setDevice(&file);
     writer.setAutoFormatting(true);
     writer.writeStartDocument();

     writer.writeStartElement("vita");
for(auto it = user.fit.begin(); it != user.fit.end(); ++it){
         writer.writeStartElement("giorno");

             writer.writeStartElement("dateTime");
             writer.writeCharacters (it->first.toString("yyyy-MM-dd").toUtf8().constData());
             writer.writeEndElement();

             writer.writeStartElement("activities-calories");
             writer.writeCharacters (QString::number(it->second.movim().calorie()));
             writer.writeEndElement();

             writer.writeStartElement("activities-steps");
             writer.writeCharacters (QString::number(it->second.movim().totale_passi()));
             writer.writeEndElement();

             writer.writeStartElement("Activities-distance");
             writer.writeCharacters (QString::number(it->second.movim().distanza()));
             writer.writeEndElement();

             writer.writeStartElement("activities-floors");
             writer.writeCharacters (QString::number(it->second.movim().piani_fatti()));
             writer.writeEndElement();

             writer.writeStartElement("sleep-startTime");
             writer.writeCharacters (QString::fromStdString(it->second.dormit().ora_andato_a_letto().orarioStr()));
             writer.writeEndElement();

             writer.writeStartElement("sleep-timeInBed");
             writer.writeCharacters (QString::number(it->second.dormit().minLetto()));
             writer.writeEndElement();

             writer.writeStartElement("sleep-minutesAsleep");
             writer.writeCharacters (QString::number(it->second.dormit().minDormito()));
             writer.writeEndElement();

             writer.writeStartElement("sleep-efficiency");
             writer.writeCharacters (QString::number(it->second.dormit().qualita()));
             writer.writeEndElement();
         writer.writeEndElement();
}//for
     writer.writeEndDocument();
 file.close();
 }


