#ifndef ATT_MOV_H
#define ATT_MOV_H
#include <iostream>
#include "att_base.h"

class att_mov : public att_base
{
private:
    unsigned int passi;
    float dist;
    float perc_camminata;
    //float perc_inattivo = 100-perc_camminata
    unsigned int piani;


public:

    friend std::ostream& operator<<(std::ostream& output, const att_mov &s);

    att_mov(){}

    /** Costruttore completo di una attivita di movimento
     * @param int numero di calorie
     * @param int numero di passi
     * @param float distanza percorsa
     * @param float perc_camminata
     * @param int piani
     */
    att_mov(unsigned int,unsigned int,float,float,unsigned int);

    unsigned int totale_passi() const;
    float camminata() const;
    float inattivo() const;
    float distanza() const;
    unsigned int piani_fatti();

    int operator==(const att_mov &g) const;

};

#endif // ATT_MOV_H
