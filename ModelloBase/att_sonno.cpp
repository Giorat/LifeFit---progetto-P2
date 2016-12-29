#include "att_sonno.h"

/**
 * @param float percentuale sonno profondo intervallo
 */
att_sonno::att_sonno(int cal,float perc):att_base(cal),perc_profondo(perc){}
float att_sonno::profondo() const{ return perc_profondo;}
float att_sonno::leggero() const { return 100-profondo();}
float att_sonno::qualita() const { return profondo()/leggero();}
