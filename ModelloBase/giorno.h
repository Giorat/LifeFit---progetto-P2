#ifndef GIORNO_H
#define GIORNO_H
#include <iostream>
#include <vector>
#include "date.h"
#include "att_base.h"

class giorno
{
public:
    giorno(date);

    void Stampa() const{
        data.Stampa();
        std::cout << std::endl;

    }



private:
    date data;
    att_base awake;
    att_base sleep;
};

#endif // GIORNO_H
