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
    QDate ultimoGiornoMeseDataD (d.year(),d.month(),primoGiornoMeseDataD.daysInMonth());
    std::cout <<" giorni in questo mese per ciclo: " <<primoGiornoMeseDataD.daysInMonth() << std::endl;

    std::cout << primoGiornoMeseDataD.toString("yyyy-MM-dd").toUtf8().constData() << " &&& " << ultimoGiornoMeseDataD.toString("yyyy-MM-dd").toUtf8().constData()<<std::endl;
    int i=0;
    for(auto it = fit.begin(); it != fit.end(); ++it){
        QDate dat = it->first;
        giorno g = it->second;

        i++;

        std::cout << dat.toString("yyyy-MM-dd").toUtf8().constData() << std::endl;

        std::cout << dat.daysTo(primoGiornoMeseDataD) << std::endl;
        std::cout << dat.daysTo(ultimoGiornoMeseDataD) << std::endl;


       if( 0 < dat.daysTo(primoGiornoMeseDataD) < d.daysInMonth() && d.daysInMonth() > dat.daysTo(ultimoGiornoMeseDataD) > 0 ){
            tot_passi+=g.movim().totale_passi();
            std::cout << "fit[" << dat.toString("yyyy-MM-dd").toUtf8().constData()  << "] = " << g << '\n';

       }
       if(i == primoGiornoMeseDataD.daysInMonth())
            it=fit.end();
    }



    return tot_passi;
}


std::ostream& operator<<(std::ostream &output, const utente &s)
{
    for(auto it= s.fit.begin();it != s.fit.end();it++){
        output << it->second;
    }
    return output;
}





