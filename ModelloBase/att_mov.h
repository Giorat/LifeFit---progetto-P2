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
    att_mov(int,float,float);
    int totale_passi();
    float camminata();
    float inattivo();
    float distanza();
};

#endif // ATT_MOV_H
