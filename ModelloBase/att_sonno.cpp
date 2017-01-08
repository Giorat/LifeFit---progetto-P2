#include <cmath>
#include "att_sonno.h"



att_sonno::att_sonno(int c,orario aL,orario sL,int minletto,int minDorm):att_base(c),andatoLetto(aL), svegliaLetto(sL) ,minuti_letto(minletto), minuti_dormito(minDorm){};

int att_sonno::operator==(const att_sonno &g) const
{
   //if(!(this->qualita() == g.qualita())) return 0;
   return 1;
}

int att_sonno::getOre()const{
    return std::round(minuti_dormito/60);
}

orario att_sonno::ora_andato_a_letto()const{
    return andatoLetto;
}

orario att_sonno::ora_svegliato_a_letto()const{
    return svegliaLetto;
}

std::ostream& operator<<(std::ostream &output, const att_sonno &s)
{

   output << static_cast<const att_base&>( s ) <<  "hai dormito per " << s.getOre() << " ore dalle "<< s.ora_andato_a_letto() << " alle "<< s.ora_svegliato_a_letto()<<std::endl;

    return output;
}
