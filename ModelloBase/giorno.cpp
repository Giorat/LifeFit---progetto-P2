#include <iostream>
#include "giorno.h"
#include <string>

giorno::giorno():data(QDate::currentDate()){}


giorno::giorno(QDate g,att_mov m,att_sonno s):data(g.year(),g.month(),g.day()),awake(m),sleep(s){}


std::string giorno::getDate() const{
    std::string s = data.toString("yyyy-MM-dd").toUtf8().constData();
    return s;
}

std::ostream& operator<<(std::ostream &output, const giorno &s)
{
    output << s.getDate() << '\n';
    output << s.awake;
    output << s.sleep;
    return output;
}

giorno::giorno(const giorno &copyin)   // Copy constructor to handle pass by value.
{
   data = copyin.data;
   awake = copyin.awake;
   sleep = copyin.sleep;
}


giorno& giorno::operator=(const giorno &g)
{
   this->data = g.data;
   this->awake = g.awake;
   this->sleep = g.sleep;
   return *this;
}

int giorno::operator==(const giorno &g) const
{
   if(!(this->data == g.data)) return 0;
   if(!(this->awake == g.awake)) return 0;
   if(!(this->sleep == g.sleep)) return 0;

   return 1;
}


int giorno::operator!=(const giorno &g) const
{
    if((this->data == g.data)) return 0;
    if((this->awake == g.awake)) return 0;
    if((this->sleep == g.sleep)) return 0;
    return 1;
}

int giorno::operator<(const giorno &g) const
{
   return 0;
}
