#include <ctime>
#include "date.h"

date::date(int g,int m,int a):giorno(g),mese(m),anno(a){}

date date::Oggi(){
    time_t t = time(0);
    struct tm * now = localtime( & t ); // get current local time
    return date(now->tm_mday,(now->tm_mon + 1),(now->tm_year + 1900));
}
