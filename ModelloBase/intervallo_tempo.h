#ifndef INTERVALLO_TEMPO_H
#define INTERVALLO_TEMPO_H
#include <iostream>
#include "orario.h"



class intervallo_tempo
{
public:
    intervallo_tempo();
    intervallo_tempo(int,int);

    void  Stampa() const;

    orario getInizio();
    orario getFine();

private:
    orario OraInizio;
    orario OraFine;
};

#endif // INTERVALLO_TEMPO_H
