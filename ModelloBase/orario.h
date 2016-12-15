#ifndef ORARIO_H
#define ORARIO_H
#include <iostream>

class orario
{
public:
    orario();
    orario(int m);
    int Ore() const ;
    int Minuti() const ;
    void Stampa() const{
        std::cout << Ore() <<":"<< Minuti();
    }
private:
    int minuti;
};

#endif // ORARIO_H
