#ifndef GIORNO_H
#define GIORNO_H
#include <iostream>
#include <vector>
#include "date.h"


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

};

#endif // GIORNO_H
