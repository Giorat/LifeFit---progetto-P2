#include "utente.h"


utente::utente(const std::string &n,const std::string &cn, QDate dN,bool s,QString pass):codiceUtente(0),nome(n),cognome(cn),dataNascita(dN),sesso(s),password(pass){}



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
    QDate ultimoGiornoMeseDataD (d.year(),d.month(),primoGiornoMeseDataD.daysInMonth());
     int i=0;
    for(auto it = fit.begin(); it != fit.end(); ++it){
        QDate dat = it->first;
        giorno g = it->second;

       if( (0 >= dat.daysTo(primoGiornoMeseDataD) && dat.daysTo(primoGiornoMeseDataD) >= (-d.daysInMonth())) && (d.daysInMonth() >= dat.daysTo(ultimoGiornoMeseDataD) && dat.daysTo(ultimoGiornoMeseDataD) >= 0 ) ){
           tot_passi+=g.movim().totale_passi();
            std::cout << "fit[" << dat.toString("yyyy-MM-dd").toUtf8().constData()  << "] = " << g << '\n\n';
            i++;
       }
    }
    return tot_passi;
}


unsigned int utente::getCodiceUtente()const{
    return codiceUtente;
}

std::string utente::getNome()const{
    return nome;
}
std::string utente::getCognome()const{
    return cognome;
}
std::string utente::getUsername()const{
    return nome+cognome;
}
QDate utente::getDataNascita()const{
    return dataNascita;
}
QString utente::getPassword()const{
    return password;
}


int utente::getAge()const{
QDate currentDate= QDate::currentDate();
int currentAge = currentDate.year() -  dataNascita.year();
if ((dataNascita.month() > currentDate.month()||
(dataNascita.month() == currentDate.month()
&&
dataNascita.day()>currentDate.day())))
{
currentAge --;
}
return currentAge;
}


std::ostream& operator<<(std::ostream &output, const utente &s)
{
    for(auto it= s.fit.begin();it != s.fit.end();it++){
       output << it->second;
    }
    return output;
}






