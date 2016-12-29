#ifndef ATT_SONNO_H
#define ATT_SONNO_H
#include "att_base.h"

class att_sonno : public att_base
{
private:
    float perc_profondo;
public:
    att_sonno();
    float profondo();
    float leggero();
    float qualita();
};

#endif // ATT_SONNO_H
