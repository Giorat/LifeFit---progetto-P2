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
    std::string s = std::to_string(Ore())+":"+std::to_string(Minuti());
    return s;
}


std::ostream& operator<<(std::ostream &output, const orario &s)
{
    output << s.Ore() <<":"<< s.Minuti();
    return output;
}
