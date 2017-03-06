#ifndef ATT_SONNO_H
#define ATT_SONNO_H
#include <iostream>
#include "att_base.h"
#include "orario.h"

class att_sonno : public att_base
{
private:
    unsigned int minuti_letto;
    unsigned int minuti_dormito;
    orario andatoLetto;
    orario svegliaLetto;

public:

    friend std::ostream& operator<<(std::ostream& output, const att_sonno &s);

    att_sonno(){}
    /** Costruttore completo attivita sonno
     * @param int calorie bruciate dormendo
     * @param orario ora andato a letto
     * @param orario ora svegliato
     * @param int minuti a letto
     * @param int minuti dormito deve essere maggiore di minuti a letto
     */
    att_sonno(unsigned int,orario,orario,unsigned int,unsigned int);

    float qualita() const;
    unsigned int getOre()const;

    int operator==(const att_sonno &g) const;

    /** @return orario ,del giorno precedente, in cui sono andato a letto*/
    orario ora_andato_a_letto()const;

    /** @return orario ,del giorno attuale, in cui mi sono svegliato*/
    orario ora_svegliato_a_letto()const;

    int minLetto()const;
    int minDormito()const;


};

#endif // ATT_SONNO_H
