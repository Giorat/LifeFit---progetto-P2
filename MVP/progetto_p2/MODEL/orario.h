#ifndef ORARIO_H
#define ORARIO_H
#include <iostream>

class orario
{
public:
    orario();

    /**
     * @brief Costruttore orario da minuti totali trascorsa della giornata
     * @param int numero di minuti trascorsi dalla mezzanotte precedente
     */
    orario(unsigned int m);
    unsigned int Ore() const ;
    unsigned int Minuti() const ;
    std::string orarioStr()const;
private:
    int minuti;
};

#endif // ORARIO_H
