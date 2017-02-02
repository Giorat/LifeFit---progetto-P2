
#include <iostream>
#include "giorno.h"
#include "utente.h"
#include "inputxmlfit.h"


int main()
{
    //Creazione di un utente
    std::string n = "riccardo", cn = "giorato";
    utente user (n,cn,QDate(1996,12,20),true);

    //Lettura in input da file xml dati giornate passate utente
    inputxmlfit s;
    std::string nomeFile = "C:\\Users\\giora\\Documents\\GitHub\\progettoP2\\DatiModelloBase.xml";
    s.inputXMLdatiMovimSleep(nomeFile,user);

    std::cout << user;

    //Prova delle date dell'utente
    QDate dataProva = QDate(2017,1,1);
    giorno g = user.giornoData(dataProva);
    std::cout << g;
    std::cout << "Per un totale di " << g.movim().totale_passi() <<" sui " << user.obbiettivo_passi() <<" | "<< user.perc_giorno(dataProva)*100 << "% su obbiettivo utente" << std::endl;

    QDate data = QDate(2016,12,27);
    int npassi = user.progressi_mese(data);
    std::cout << "a Dicembre hai fatto: " << npassi << " su un totale previsto di " << (data.daysInMonth() * user.obbiettivo_passi());

    std::string nomeFileOut = "C:\\Users\\giora\\Documents\\GitHub\\progettoP2\\"+std::to_string(user.getCodiceUtente())+"OutProva.xml";
    s.outputXMLdatiMovimSleep(nomeFileOut,user);

    return 0;
}
