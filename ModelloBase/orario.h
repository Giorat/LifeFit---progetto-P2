#ifndef ORARIO_H
#define ORARIO_H
#include <iostream>

class orario
{
public:
    orario();
    orario(unsigned int m);
    unsigned int Ore() const ;
    unsigned int Minuti() const ;

    friend std::ostream& operator<<(std::ostream &output, const orario &s);
private:
    int minuti;
};

#endif // ORARIO_H
