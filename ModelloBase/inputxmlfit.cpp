#include <QFile>
#include <QXmlStreamReader>
#include <QDebug>
#include <QDate>
#include <QTime>

#include "inputxmlfit.h"


void inputxmlfit::inputXMLdatiMovimSleep(string fileInputXml,utente user){
    QFile file(fileInputXml);
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

                        //qDebug()<< reader.name() << "- " << s;
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
                    std::cout << piani<<" "<< dist <<std::endl;
                    t=t.addSecs(60*minuti_letto);
                    svegliaLetto = t.hour()*60+t.minute();
                    s = att_sonno(static_cast<int>(t.hour()*1.05180646446),orario(andatoLetto),orario(svegliaLetto),minuti_letto,minuti_dormito);

                   fit[d]= giorno(d,m,s);
                   std::cout << fit[d];


                }
                else
                    reader.skipCurrentElement();
            }
        }
        else
            reader.raiseError(QObject::tr("Incorrect file"));
    }



}
