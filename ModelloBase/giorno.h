#ifndef GIORNO_H
#define GIORNO_H
#include <iostream>
#include <vector>
#include "intervallo_tempo.h"
#include "date.h"


class giorno
{
public:
    giorno(date ,int =96);

    void Stampa() const{
        data.Stampa();
        std::cout << std::endl;
        for(int i=0; i<intervalli; ++i){
            day[i].Stampa();
        }

    }
private:
    const int numMinMaxGiorno = 1440;
    date data;
    size_t intervalli;
    std::vector<intervallo_tempo> day;
};

#endif // GIORNO_H
