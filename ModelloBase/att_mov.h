#ifndef ATT_MOV_H
#define ATT_MOV_H
#include "att_base.h"

class att_mov : public att_base
{
private:
    int passi;
    float dist;
    float perc_camminata;
    //float perc_inattivo = 100-perc_camminata
public:
    /**
     * @param int numero di calorie
     * @param int numero di passi
     * @param float distanza percorsa
     * @param float perc_camminata
     */
    att_mov(int,int,float,float);

    int totale_passi() const;
    float camminata() const;
    float inattivo() const;
    float distanza() const;
};

#endif // ATT_MOV_H
