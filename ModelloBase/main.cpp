
#include <iostream>
#include "giorno.h"
#include "utente.h"
#include "inputxmlfit.h"


int main(int argc, char *argv[])
{
    std::string n = "riccardo", cn = "giorato";
    utente user (n,cn,QDate(1996,12,20),true);

    inputxmlfit s;
    s.inputXMLdatiMovimSleep("DatiModelloBase.xml",user);

    std::cout << user.giornoData(QDate(2016,12,31));

    return 0;
}
