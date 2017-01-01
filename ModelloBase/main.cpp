#include <QFile>
#include <QDir>
#include <QXmlStreamReader>
#include <QDebug>

#include <iostream>
#include "giorno.h"
#include "date.h"



int main(int argc, char *argv[])
{
    std::cout << "Stampa giorno base:" << std::endl;
    giorno ogg(date::Oggi());
    ogg.Stampa();
    giorno ogg2 (date(29,2,2015));
    ogg2.Stampa();
}
/*QString path = QDir::currentPath();
    QFile file("debug/test1.xml");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "prova" << path;
        qDebug() << "Cannot read file" << file.errorString();
        exit(0);
    }

    QXmlStreamReader reader(&file);

    if (reader.readNextStartElement()) {
        if (reader.name() == "giorno"){
            while(reader.readNextStartElement()){
                if(reader.name() == "intervallo_tempo"){
                    while(reader.readNextStartElement()){
                        QString s = reader.readElementText();
                        qDebug()<< reader.name() << "- " << s;
                    }
                }
                else
                    reader.skipCurrentElement();
            }
        }
        else
            reader.raiseError(QObject::tr("Incorrect file"));
    }

    return 0;
}
*/
