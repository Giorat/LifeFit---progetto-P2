#include <iostream>
#include "giorno.h"

giorno::giorno(date g, int inter):data(g),intervalli(inter){
    int durata = 1440 / inter;
    std::cout << "ci sono n"<<intervalli << "intervalli e ogni intervallo dura: " <<durata << std::endl;
    day.reserve(intervalli);
    for(int i=0; i< intervalli; i++){
        intervallo_tempo j (durata,i*durata);
        day.push_back(j);

    }

}

