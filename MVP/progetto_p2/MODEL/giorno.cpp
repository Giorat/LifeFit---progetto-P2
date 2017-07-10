#include <iostream>
#include "giorno.h"
#include <string>

giorno::giorno():data(QDate::currentDate()){}


giorno::giorno(QDate g,att_mov m,att_sonno s):data(g.year(),g.month(),g.day()),awake(m),sleep(s){}

QDate giorno::dataOd() const{
    return data;
}

std::string giorno::getDate() const{
    std::string s = data.toString("yyyy-MM-dd").toUtf8().constData();
    return s;
}

giorno::giorno(const giorno &copyin)
{
   data = copyin.data;
   awake = copyin.awake;
   sleep = copyin.sleep;
}


