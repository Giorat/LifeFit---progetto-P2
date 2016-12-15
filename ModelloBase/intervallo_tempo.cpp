#include "intervallo_tempo.h"

intervallo_tempo::intervallo_tempo(int durata, int minIniziali):OraInizio(minIniziali),OraFine(minIniziali+durata){}


void  intervallo_tempo::Stampa() const{
    std::cout << std::endl;
    OraInizio.Stampa();
    std::cout << std::endl;
    OraFine.Stampa();
}

orario intervallo_tempo::getInizio(){return OraInizio;}
orario intervallo_tempo::getFine(){return OraFine;}
