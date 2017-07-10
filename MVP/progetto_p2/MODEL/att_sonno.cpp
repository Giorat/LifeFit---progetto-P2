#include <cmath>
#include "att_sonno.h"

att_sonno::att_sonno(unsigned int c,orario aL,orario sL,unsigned int minletto,unsigned int minDorm,unsigned int ef):att_base(c),andatoLetto(aL), svegliaLetto(sL) ,minuti_letto(minletto), minuti_dormito(minDorm),efficacia(ef){};

unsigned int att_sonno::calorie()const{return att_base::calorie()+getOre()*50;}

float att_sonno::qualita() const{
    float q = (minuti_dormito/(float)minuti_letto)*100;
    if(q != q)
        return 0;
    else
        return q;
}

int att_sonno::operator==(const att_sonno &g) const
{
   if(!(this->qualita() == g.qualita())) return 0;
   return 1;
}

unsigned int att_sonno::getOre()const{
    return std::round(minuti_dormito/60);
}

orario att_sonno::ora_andato_a_letto()const{
    return andatoLetto;
}

orario att_sonno::ora_svegliato_a_letto()const{
    return svegliaLetto;
}

int att_sonno::minLetto()const{
    return minuti_letto;
}

int att_sonno::minDormito()const{
    return minuti_dormito;
}
