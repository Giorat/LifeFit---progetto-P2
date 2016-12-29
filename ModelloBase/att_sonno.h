#ifndef ATT_SONNO_H
#define ATT_SONNO_H
#include "att_base.h"

class att_sonno : public att_base
{
private:
    float perc_profondo;
public:
    /**
     * @param int calorie bruciate dormendo
     * @param float percentuale sonno profondo intervallo
     */
    att_sonno(int,float);
    float profondo() const;
    float leggero() const ;
    float qualita() const;
};

#endif // ATT_SONNO_H
