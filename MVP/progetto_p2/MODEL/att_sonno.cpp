#include <cmath>
#include "att_sonno.h"


float att_sonno::qualita() const{
    float q = (minuti_dormito/(float)minuti_letto)*100;
    if(q != q)
        return 0;
    else
        return q;
}

att_sonno::att_sonno(unsigned int c,orario aL,orario sL,unsigned int minletto,unsigned int minDorm):att_base(c),andatoLetto(aL), svegliaLetto(sL) ,minuti_letto(minletto), minuti_dormito(minDorm){};

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

std::ostream& operator<<(std::ostream &output, const att_sonno &s)
{

   output << static_cast<const att_base&>( s ) <<  "hai dormito per " << s.getOre() << " ore dalle "<< s.ora_andato_a_letto() << " alle "<< s.ora_svegliato_a_letto()<< " con qualita del " <<s.qualita() <<"%"<<std::endl;

    return output;
}
