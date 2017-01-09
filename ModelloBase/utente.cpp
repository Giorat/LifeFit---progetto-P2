#include "utente.h"


utente::utente(const std::string &n,const std::string &cn, QDate dN,bool s):codiceUtente(0),nome(n),cognome(cn),dataNascita(dN),sesso(s){}



void utente::insert_gg(QDate d,giorno gg){
    if(d == gg.dataOd())
    fit[d]= gg;
    // else eccezzione QDebug

}
giorno utente::giornoData(QDate d){
    return fit[d];
}
