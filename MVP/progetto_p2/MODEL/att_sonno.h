#ifndef ATT_SONNO_H
#define ATT_SONNO_H

#include "att_base.h"
#include "orario.h"

class att_sonno : public att_base
{
private:
    orario andatoLetto;
    orario svegliaLetto;
    unsigned int minuti_letto;
    unsigned int minuti_dormito;
    unsigned int efficacia;

public:
    att_sonno(){}
    /** Costruttore completo attivita sonno
     * @param int calorie bruciate dormendo
     * @param orario ora andato a letto
     * @param orario ora svegliato
     * @param int minuti a letto
     * @param int minuti dormito deve essere maggiore di minuti a letto
     * @param int efficacia sonno
     */
    att_sonno(unsigned int,orario,orario,unsigned int,unsigned int,unsigned int);

    virtual unsigned int calorie()const;

    /** @return float qualità del sonno in base a percentuale sonno REM profondo */
    float qualita() const;

    /** @return numero di ore passate a letto dormendo */
    unsigned int getOre()const;

    int operator==(const att_sonno &g) const;

    /** @return orario ,del giorno precedente, in cui sono andato a letto*/
    orario ora_andato_a_letto()const;

    /** @return orario ,del giorno attuale, in cui mi sono svegliato*/
    orario ora_svegliato_a_letto()const;

    /** @return int minuti passati a letto sia da svegli che dormendo */
    int minLetto()const;

    /** @return int minuti passati a letto dormendo */
    int minDormito()const;

};

#endif // ATT_SONNO_H
