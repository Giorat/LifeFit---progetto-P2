#include "utente.h"


utente::utente(const std::string &n,const std::string &cn, QDate dN,bool s):codiceUtente(0),nome(n),cognome(cn),dataNascita(dN),sesso(s){}



void utente::insert_gg(QDate d,giorno gg){
    if(d == gg.dataOd())
    fit[d]= gg;
    // else eccezzione QDebug

}

float utente::perc_giorno(QDate d){
    return (float)giornoData(d).movim().totale_passi()/(float)this->obbiettivo_passi();
}

giorno utente::giornoData(QDate d){
    return giorno(fit[d]);
}


unsigned int utente::progressi_mese(QDate d){
    int tot_passi =0;
    QDate primoGiornoMeseDataD (d.year(),d.month(),1);
    QDate & pGMDD = primoGiornoMeseDataD;
    std::cout <<" giorni in questo mese per ciclo:" <<pGMDD.daysInMonth();
    int i=0;
    for(auto it = fit.find(pGMDD); i != pGMDD.daysInMonth(); ++it){
        i++;
       // tot_passi+=(*it);// movim()->totale_passi();
    }
    return tot_passi;
}




