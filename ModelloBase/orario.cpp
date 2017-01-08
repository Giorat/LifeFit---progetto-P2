#include "orario.h"

orario::orario():minuti(0){}

orario::orario(int m):minuti(m){}

int orario::Ore() const{
    return minuti/60;
}

int orario::Minuti() const{
    return minuti%60;
}



std::ostream& operator<<(std::ostream &output, const orario &s)
{
    output << s.Ore() <<":"<< s.Minuti();
    return output;
}
