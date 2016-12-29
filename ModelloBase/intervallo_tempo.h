#ifndef INTERVALLO_TEMPO_H
#define INTERVALLO_TEMPO_H
#include <iostream>
#include "orario.h"
#include "att_base.h"


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
    att_base * attivita;
};

#endif // INTERVALLO_TEMPO_H
