
#include <iostream>
#include "giorno.h"
#include "admin.h"
#include "admin_iofit.h"


int main()
{
    //Creazione di un utente

    //Lettura in input da file xml dati giornate passate utente
    std::string dir="C:\\Users\\giora\\Documents\\GitHub\\progettoP2\\";
    admin_iofit s(dir);

    utente* user = s.loadUser("rootadmin","root");

    if(user){
std::cout << "!!!user:" << user << std::endl;

        std::cout << "giorni inseriti:" << user->getGiorniFit() << std::endl;

        s.inputXMLdatiMovimSleep("C:\\Users\\giora\\Desktop\\exportMagg.xml",user);

        std::cout << "giorni inseriti:" << user->getGiorniFit() << std::endl;


    if(s.saveUser(user))
       std::cout << "salvato utente"<< std::endl;
    else
       std::cout << "non salvato utente"<< std::endl;


    s.saveUserFit(user);

    }else
    std::cout <<"utente non trovato" << std::endl;


    return 0;
}
