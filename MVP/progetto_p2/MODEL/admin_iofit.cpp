#include "admin_iofit.h"
#include <QXmlStreamReader>

 admin_iofit::admin_iofit(std::string dir):iofit(dir){}

std::vector<const utente*> admin_iofit::loadUtenti(){
     std::vector<const utente*> utenteR;

     usersXMLFile.open(QFile::ReadOnly | QFile::Text);

     QString passC;

     int codU;
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
                        }//ricerca utente

                        if(codU != 0){
                           utenteR.push_back(new utente(codU,nom,cognom,dataNascita,sesso,passC));
                           utente * userF=const_cast<utente*>(*(&utenteR.back()));
                           std::cout << "userALL: " << userF->getCodiceUtente() << std::endl;
                           iofit::loadUserFit(userF);
                        }

                    }//utente
            }//documento utenti

   usersXMLFile.close();
   return utenteR;
}
