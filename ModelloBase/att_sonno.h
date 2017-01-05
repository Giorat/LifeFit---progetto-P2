#ifndef ATT_SONNO_H
#define ATT_SONNO_H
#include "att_base.h"
#include "orario.h"

class att_sonno : public att_base
{
private:
    int minuti_letto;
    int minuti_dormito;
    orario andatoLetto;
    orario svegliaLetto;



public:
    /**
     * @param int calorie bruciate dormendo
     * @param float percentuale sonno profondo intervallo
     */
    att_sonno(int,float);

    float qualita() const;
};

#endif // ATT_SONNO_H
