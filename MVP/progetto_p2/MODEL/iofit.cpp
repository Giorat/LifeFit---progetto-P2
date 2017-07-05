#include <QFile>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <QDebug>
#include <QDate>
#include <QTime>

#include <iostream>

#include "iofit.h"

QString iofit::hash_password_utente(QString usernameU){
usersXMLFile.open(QFile::ReadOnly | QFile::Text);
  QString userNameC,password;

   QXmlStreamReader reader(&usersXMLFile);
       if (reader.readNextStartElement()) {
           if (reader.name() == "utenti")
               while(reader.readNextStartElement())
                   if(reader.name() == "utente"){
                       userNameC = "";
                       while(reader.readNextStartElement()){
                           QString qs = reader.readElementText();
                           if(reader.name() == "nome"){
                               userNameC+=qs;
                           }
                           if(reader.name() == "cognome"){
                               userNameC+=qs;
                           }
                           if(reader.name() == "password"){
                               password=qs;
                           }
                       }//ricerca utente

                       if(usernameU==userNameC){
                          usersXMLFile.close();
                          return password;
                       }

                   }//utente
           }//documento utenti
usersXMLFile.close();
return "";

}




int iofit::utenteGiaPresente(const utente * user){

     usersXMLFile.open(QFile::ReadOnly | QFile::Text);

     bool nom,cognom=nom=false;
     int codU=-1;

    QXmlStreamReader reader(&usersXMLFile);
        if (reader.readNextStartElement()) {
            if (reader.name() == "utenti")
                while(reader.readNextStartElement())
                    if(reader.name() == "utente" && !(nom && cognom)){
                        cognom=nom=false;
                        while(reader.readNextStartElement()){
                            QString qs = reader.readElementText();
                            std::string s = qs.toUtf8().constData();
                            if(reader.name() == "nome" && user->getNome() == s)
                                nom=true;
                            if(reader.name() == "cognome" && user->getCognome() == s)
                                cognom=true;
                            if(reader.name() == "codiceutente")
                                codU = std::stoi(s);
                        }//dati utente
                    }//utente
            }//documento utenti
  usersXMLFile.close();

  if(nom && cognom)
    return (codU);
  else
    return -1;
}


  iofit::iofit(std::string dir):DirectoryToSave(dir), xmlUsers(DirectoryToSave+"users.xml")
{
      usersXMLFile.setFileName(QString::fromStdString(xmlUsers));

         if(!usersXMLFile.open(QFile::ReadOnly |
                       QFile::Text))
         {
            usersXMLFile.close();
                if(!usersXMLFile.open(QFile::WriteOnly |
                              QFile::Text)){
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
                        writer.writeTextElement("username", "root" );
                        QString pass = QString(QCryptographicHash::hash(("root"),QCryptographicHash::Md5).toHex());
                        writer.writeTextElement("password", pass);
                        writer.writeEndElement();
                    writer.writeEndElement();
                writer.writeEndDocument();
         }
    usersXMLFile.close();
}


 utente* iofit::loadUser(const std::string u,const std::string p){
  utente * utenteR=0;
  usersXMLFile.open(QFile::ReadOnly | QFile::Text);
  QString passCh= QString::fromUtf8(p.c_str()),pass = QString(QCryptographicHash::hash((passCh).toUtf8().constData(),QCryptographicHash::Md5).toHex());

  std::string userNameC = "";
  QString passC;

  int codU,gruppo;
  std::string nom,cognom;
  QDate dataNascita;
  bool sesso;

 QXmlStreamReader reader(&usersXMLFile);
     if (reader.readNextStartElement()) {
         if (reader.name() == "utenti")
             while(reader.readNextStartElement())
                 if(reader.name() == "utente"){
                     userNameC = "";

                     while(reader.readNextStartElement()){
                         QString qs = reader.readElementText();
                         std::string s = qs.toUtf8().constData();
                         if(reader.name() == "codiceutente")
                             codU = std::stoi(s);
                         if(reader.name() == "nome"){
                             userNameC+=s;
                             nom=s;
                         }
                         if(reader.name() == "cognome"){
                             userNameC+=s;
                             cognom=s;
                         }
                         if(reader.name() == "password")
                             passC = qs;
                         if(reader.name() == "datanascita")
                             dataNascita = QDate::fromString(qs,"yyyy-MM-dd");
                         if(reader.name() == "sesso")
                             sesso = std::stoi(s);
                         if(reader.name() == "gruppo")
                             gruppo = std::stoi(s);
                     }//ricerca utente

                     //controllo se username e pass inserite coincidono con utente login possible
                     if(u==userNameC&&pass == passC){
                        usersXMLFile.close();

                        if (gruppo == 1)
                            utenteR = new bambino(codU,nom,cognom,dataNascita,sesso,passCh);
                        else if (gruppo == 2)
                            utenteR = new adolescente(codU,nom,cognom,dataNascita,sesso,passCh);
                        else if (gruppo == 3)
                            utenteR = new adulto(codU,nom,cognom,dataNascita,sesso,passCh);
                        return utenteR;
                     }

                 }//utente
         }//documento utenti
usersXMLFile.close();
return nullptr;
 }


  bool iofit::createUser(const utente *user){

      if(utenteGiaPresente(user)== -1){
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

          if(reader.name() == "utenti")
          {
            writer.writeStartElement("utente");

            writer.writeTextElement("codiceutente", QString::number(nNuovoUtente+1) );
            writer.writeTextElement("nome", QString::fromStdString(user->getNome()) );
            writer.writeTextElement("cognome", QString::fromStdString(user->getCognome()) );
            writer.writeTextElement("datanascita", user->getDataNascita().toString("yyyy-MM-dd").toUtf8().constData());
            writer.writeTextElement("sesso", QString::number(user->getSesso()));
            QString pass = QString(QCryptographicHash::hash((user->getPassword()).toUtf8().constData(),QCryptographicHash::Md5).toHex());
            writer.writeTextElement("password", pass);
            writer.writeTextElement("gruppo", QString::number(user->codiceGruppo()));
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
    return 1;
    }//fine if utente non ancora creato

  return 0;
  }



  int iofit::LastCodUtente(){
    int codUt = -1;
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


  bool iofit::saveUser(const utente * user){
      unsigned int cod = utenteGiaPresente(user);
    if(cod == user->getCodiceUtente()||(int)cod == -1){
         usersXMLFile.open(QIODevice::ReadWrite | QIODevice::Text);

         QByteArray xmlData(usersXMLFile.readAll());
         QDomDocument doc("saveUser");
         doc.setContent(xmlData);

         QDomElement root = doc.firstChildElement("utenti");

         for(int i=0; i<root.childNodes().count();i++){

                 QDomNode utenteNode = root.childNodes().item(i);
                 QDomElement utenteE = utenteNode.toElement();

                 QDomNode childNode = utenteE.childNodes().item(0);
                 QDomElement e = childNode.toElement();

                 if((unsigned int)std::stoi(e.text().toUtf8().constData()) == user->getCodiceUtente()){

                  utenteE.childNodes().item(1).firstChild().setNodeValue(QString::fromStdString(user->getNome()));
                  utenteE.childNodes().item(2).firstChild().setNodeValue(QString::fromStdString(user->getCognome()));
                  utenteE.childNodes().item(3).firstChild().setNodeValue(user->getDataNascita().toString("yyyy-MM-dd"));
                  utenteE.childNodes().item(4).firstChild().setNodeValue(QString::number(user->getSesso()));
                  utenteE.childNodes().item(5).firstChild().setNodeValue(QString(QCryptographicHash::hash((user->getPassword()).toUtf8().constData(),QCryptographicHash::Md5).toHex()));

                }

         }

      usersXMLFile.close();
      usersXMLFile.open(QFile::WriteOnly |QFile::Text);
      QTextStream stream(&usersXMLFile);
      usersXMLFile.resize(0);
      doc.save(stream, 4);
      usersXMLFile.close();

    return 1;
    }
    return 0;
    }

   void iofit::deleteUser(const utente * user){

       usersXMLFile.open(QIODevice::ReadWrite | QIODevice::Text);

       QByteArray xmlData(usersXMLFile.readAll());
       QDomDocument doc("saveUser");
       doc.setContent(xmlData);

       QDomElement root = doc.firstChildElement("utenti");



       for(int i=0; i<root.childNodes().count();i++){

               QDomNode utenteNode = root.childNodes().item(i);
               QDomElement utenteE = utenteNode.toElement();



               QDomNode childNode = utenteE.childNodes().item(0);
               QDomElement e = childNode.toElement();

               if((unsigned int)std::stoi(e.text().toUtf8().constData()) == user->getCodiceUtente()){
                   QDomNode toRemove = e.parentNode();
                   toRemove.parentNode().removeChild(toRemove);
              }
       }

    usersXMLFile.close();
    usersXMLFile.open(QFile::WriteOnly |QFile::Text);
    QTextStream stream(&usersXMLFile);
    usersXMLFile.resize(0);
    doc.save(stream, 4);
    usersXMLFile.close();

       std::string fileFitXML = DirectoryToSave+std::to_string(user->getCodiceUtente())+"att.xml";
       QFile fileF;
       fileF.setFileName(QString::fromStdString(fileFitXML));
       fileF.remove();

   }

  void iofit::inputXMLdatiMovimSleep(std::string fileInputXml,utente * user){

    QFile file;
    file.setFileName(QString::fromStdString(fileInputXml));
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Cannot read file" << file.errorString();
        exit(0);
    }

    QXmlStreamReader reader(&file);

    QDate d;
    att_mov m;

    int cal_mov=0;
    int passi=0;
    float dist=0;
    float perc_camminata = 100;
    //float perc_inattivo = 100-perc_camminata
    int piani=0;

    int minuti_letto=0;
    int minuti_dormito=0;
    int andatoLetto;
    int svegliaLetto;
    int eff_sonno=0;

    att_sonno s;
    QTime t;

    if (reader.readNextStartElement()) {
        if (reader.name() == "vita"){
            while(reader.readNextStartElement()){
                if(reader.name() == "giorno"){
                    int i=0;
                    while(reader.readNextStartElement()){
                        i++;
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
                        if(reader.name() == "activities-distance")
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
                   if(i>=9){//giorno da xml completo
                        m = att_mov(cal_mov,passi,dist,perc_camminata,piani);
                        t=t.addSecs(60*minuti_letto);
                        svegliaLetto = t.hour()*60+t.minute();
                        s = att_sonno(static_cast<int>(t.hour()*1.05180646446),orario(andatoLetto),orario(svegliaLetto),minuti_letto,minuti_dormito);
                        user->insert_gg(d,giorno(d,m,s));
                   }
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

 bool iofit::loadUserFit(utente* user){
    std::string fileInputXml = DirectoryToSave+std::to_string(user->getCodiceUtente())+"att.xml";

    QFile file;
    file.setFileName(QString::fromStdString(fileInputXml));
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        return false;
    }
    file.close();

    this->inputXMLdatiMovimSleep(fileInputXml,user);
    return true;
 }


 void iofit::saveUserFit(const utente * user){
     std::string fileOutputXml = DirectoryToSave+std::to_string(user->getCodiceUtente())+"att.xml";

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
for(auto it = user->fit.begin(); it != user->fit.end(); ++it){
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

             writer.writeStartElement("activities-distance");
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


 std::vector<const utente*> iofit::loadUtenti(){
      std::vector<const utente*> utenteR;

      usersXMLFile.open(QFile::ReadOnly | QFile::Text);

      QString passC;

      int codU,gruppo;
      std::string nom,cognom;
      QDate dataNascita;
      bool sesso;

     QXmlStreamReader reader(&usersXMLFile);
         if (reader.readNextStartElement()) {
             if (reader.name() == "utenti")
                 while(reader.readNextStartElement())
                     if(reader.name() == "utente"){
                         while(reader.readNextStartElement()){
                             QString qs = reader.readElementText();
                             std::string s = qs.toUtf8().constData();
                             if(reader.name() == "codiceutente")
                                 codU = std::stoi(s);
                             if(reader.name() == "nome"){
                                 nom=s;
                             }
                             if(reader.name() == "cognome"){
                                 cognom=s;
                             }
                             if(reader.name() == "password")
                                 passC = qs;
                             if(reader.name() == "datanascita")
                                 dataNascita = QDate::fromString(qs,"yyyy-MM-dd");
                             if(reader.name() == "sesso")
                                 sesso = std::stoi(s);
                             if(reader.name() == "gruppo")
                                 gruppo = std::stoi(s);
                         }//ricerca utente

                         if(gruppo != 0){
                             if (gruppo == 1)
                                 utenteR.push_back(new bambino(codU,nom,cognom,dataNascita,sesso,passC));
                             else if (gruppo == 2)
                                 utenteR.push_back(new adolescente(codU,nom,cognom,dataNascita,sesso,passC));
                             else if (gruppo == 3)
                                 utenteR.push_back(new adulto(codU,nom,cognom,dataNascita,sesso,passC));

                            utente * userF=const_cast<utente*>(*(&utenteR.back()));
                            std::cout << "userALL: " << userF->getCodiceUtente() << std::endl;
                            iofit::loadUserFit(userF);
                         }

                     }//utente
             }//documento utenti

    usersXMLFile.close();
    return utenteR;
 }

