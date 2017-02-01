#include "orario.h"

orario::orario():minuti(0){}

orario::orario(unsigned int m):minuti(m){}

unsigned int orario::Ore() const{
    return minuti/60;
}

unsigned int orario::Minuti() const{
    return minuti%60;
}

std::string orario::orarioStr()const{
    return Ore()+":"+Minuti();
}


std::ostream& operator<<(std::ostream &output, const orario &s)
{
    output << s.Ore() <<":"<< s.Minuti();
    return output;
}
