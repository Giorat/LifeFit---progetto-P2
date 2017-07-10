#ifndef ATT_MOV_H
#define ATT_MOV_H

#include "att_base.h"

class att_mov : public att_base
{
private:
    unsigned int passi;
    float dist;
    float perc_camminata;
    unsigned int piani;

public:
    att_mov(){}

    /** Costruttore completo di una attivita di movimento
     * @param int numero di calorie
     * @param int numero di passi
     * @param float distanza percorsa
     * @param float perc_camminata
     * @param int piani
     */
    att_mov(unsigned int,unsigned int,float,float,unsigned int);

    /** @return unsigned int totale passi */
    unsigned int totale_passi() const;

    /** @return float percentuale camminata */
    float camminata() const;

    /** @return float percentuale non attivo senza camminare da sedentario */
    float inattivo() const;

    /** @return float distanza km percorsi */
    float distanza() const;

    /** @return unsigned int numero di piani fatti*/
    unsigned int piani_fatti();

    int operator==(const att_mov &g) const;

};

#endif // ATT_MOV_H
