
#include <iostream>
#include "giorno.h"
#include "utente.h"
#include "inputxmlfit.h"


int main(int argc, char *argv[])
{
    std::string n = "riccardo", cn = "giorato";
    utente user (n,cn,QDate(1996,12,20),true);

    inputxmlfit s;
    std::string nomeFile = "C:\\Users\\giora\\Documents\\GitHub\\progettoP2\\DatiModelloBase.xml";
    s.inputXMLdatiMovimSleep(nomeFile,user);

    float perc = 0;
    giorno g = user.giornoData(QDate(2016,12,31),perc);
    std::cout << g;
    std::cout << "Per un totale di " << g.movim().totale_passi() <<" sui " << user.obbiettivo_passi() <<" | "<< perc*100 << "% su obbiettivo utente" << std::endl;

    return 0;
}
