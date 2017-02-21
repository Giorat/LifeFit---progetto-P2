
#include <iostream>
#include "giorno.h"
#include "admin.h"
#include "inputxmlfit.h"


int main()
{
    //Creazione di un utente

    //Lettura in input da file xml dati giornate passate utente
    std::string dir="C:\\Users\\giora\\Documents\\GitHub\\progettoP2\\";
    inputxmlfit s(dir);
    utente * user = s.loadUser("rootadmin","password");
    s.loadUserFit(user);
    if(user){


        std::cout << "giorni inseriti:" << user->getGiorniFit() << std::endl;

    if(dynamic_cast<admin*>(user))
        std::cout << "bungiorno signor admin";
    else
        std::cout << "user:" << user->getUsername() << std::endl;

    if(s.saveUser(user))
       std::cout << "salvato utente"<< std::endl;
    else
       std::cout << "non salvato utente"<< std::endl;

    QDate dataProva = QDate(2017,1,1);
    giorno * g = user->giornoData(dataProva);
    if(g)
    std::cout << "Per un totale di " << g->movim().totale_passi() <<" sui " << user->obbiettivo_passi() <<" | "<< user->perc_giorno(dataProva)*100 << "% su obbiettivo utente" << std::endl;

    user->delete_gg(dataProva);
     g = user->giornoData(dataProva);
    if(!g)
        std::cout <<"giorno non trovato" << std::endl;



    s.saveUserFit(user);

    }else
    std::cout <<"utente non trovato" << std::endl;

    return 0;
}
