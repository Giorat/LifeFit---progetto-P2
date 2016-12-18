#include <iostream>
#include "giorno.h"
#include "date.h"

int main()
{
    std::cout << "Stampa giorno base:" << std::endl;
    giorno ogg(date::Oggi(),96);
    ogg.Stampa();
    return 0;
}
