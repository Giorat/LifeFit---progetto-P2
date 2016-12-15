#include <iostream>
#include "giorno.h"


int main(int argc, char *argv[])
{
    std::cout << "Stampa giorno base:" << std::endl;
    giorno ogg(date(14,12,2016),96);
    ogg.Stampa();
    return 0;
}
