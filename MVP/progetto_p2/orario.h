#ifndef ORARIO_H
#define ORARIO_H
#include <iostream>

class orario
{
public:
    orario();

    /** Costruttore orario da minuti totali trascorsa della giornata lancia eccezzione se m > 1440
     * @param int numero di minuti trascorsi dalla mezzanotte precedente
     */
    orario(unsigned int m);
    unsigned int Ore() const ;
    unsigned int Minuti() const ;
    std::string orarioStr()const;

    friend std::ostream& operator<<(std::ostream &output, const orario &s);
private:
    int minuti;
};

#endif // ORARIO_H
