
#include <map>
#include <string>

#include <iostream>
#include "giorno.h"




int main(int argc, char *argv[])
{
    std::cout << "Stampa giorno:" << std::endl;
    att_mov m (100,190000,200.00,33.22,100);
    std::cout << m;

    /**
     * @param int calorie bruciate dormendo
     * @param orario ora andato a letto
     * @param orario ora svegliato
     * @param int minuti a letto
     * @param int minuti dormito deve essere maggiore di minuti a letto
     */
    att_sonno sonnoprova (100,orario(200),orario(300),400,300);
    std::cout << sonnoprova;

std::map<QDate,giorno> fit;
    return 0;
}
