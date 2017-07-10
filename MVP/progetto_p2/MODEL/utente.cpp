#include "utente.h"


utente::utente(const int codU,const std::string &n,const std::string &cn, QDate dN,bool s,QString pass):codiceUtente(codU),nome(n),cognome(cn),dataNascita(dN),sesso(s),password(pass){}


void utente::insert_gg(QDate d,giorno gg){
    if(d == gg.dataOd())
    fit[d]= gg;
}

void utente::modify_gg(QDate d,giorno gg){
    if(d == gg.dataOd())
    fit[d]= gg;
}

void utente::delete_gg(QDate d){
    auto it = fit.find (d);
    if(it !=fit.end())
        fit.erase (it);

}
void utente::setFit(utente* user){
    this->fit = user->fit;
}


QDate utente::primaAtt()const{
    auto it= fit.begin();
    return it->first;
}
QDate utente::ultimaAtt()const{
    auto it= fit.rbegin();
    return it->first;
}

giorno * utente::giornoData(const QDate d){
    auto it = fit.find(d);
    if(it !=fit.end())
        return &(fit[d]);
    else
        return nullptr;
}

giorno * utente::giornoDataConst(const QDate d)const{
    auto it = fit.find(d);
    if(it !=fit.end()){
        giorno * gg = new giorno(fit.at(d));
        return (gg);
    }else
        return nullptr;
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
    if ((dataNascita.month() > currentDate.month()||(dataNascita.month() == currentDate.month() &&  dataNascita.day()>currentDate.day()))){currentAge --;}
    return currentAge;
}

bool utente::getSesso()const{
    return sesso;
}

int utente::getGiorniFit()const{
    return fit.size();
}

void utente::setNome(const std::string n){nome=n;}
void utente::setCognome(const std::string cgn){cognome=cgn;}
void utente::setDataNascita(const QDate dn){dataNascita=dn;}
void utente::setSesso(const bool s){sesso=s;}
void utente::setPassword(const QString p){password=p;}


std::pair<int,int> utente::massimoGiornoUtenti(const std::vector<const utente*> utenti,const QDate data ){
    std::pair<int,int> massimoPassi = std::pair<int, int>(-1,-2);
    for(auto it=utenti.begin();it != utenti.end();it++){
            const giorno * g = (*it)->giornoDataConst(data);
            if(g){
                int numPassi=(*g).movim().totale_passi();
                if ( numPassi > massimoPassi.second )
                    massimoPassi =  std::pair<int, int>((*it)->getCodiceUtente(),numPassi);
            }//if
            delete g;
    }//for
    return massimoPassi;
}

//ritorna l'utente con il codiceUtente passato preso dal vettore utenti
utente *  utente::utenteCodiceUtente(const std::vector<const utente*> utenti,const int codU){
       for(auto it=utenti.begin();it != utenti.end();it++){
           if((*it)->getCodiceUtente() == (unsigned int)codU)
               return const_cast<utente*>(*it);
       }
       return nullptr;
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
            i++;
       }
    }
    return tot_passi;
}


std::vector<std::pair<int,int>> utente::ultimiSetteGiorniUtenti(const std::vector<const utente*> utenti ,const QDate data){
    QDate inizioSetteG;
    std::vector<std::pair<int,int>> codUpassi;
    for(auto it=utenti.begin();it != utenti.end();it++){
        int numPassiSett=0;
         inizioSetteG= data.addDays(-7);
            while(inizioSetteG < data){
            const giorno * g = (*it)->giornoDataConst(inizioSetteG);
            if(g){
                numPassiSett+=(*g).movim().totale_passi();
            }
            inizioSetteG=inizioSetteG.addDays(1);
        }
        codUpassi.push_back( std::pair<int, int>((*it)->getCodiceUtente(),numPassiSett) );
    }
    std::sort(codUpassi.begin(), codUpassi.end(),[]( const std::pair<int, int> &p1, const std::pair<int, int> &p2 )
        {
            return ( p1.second > p2.second ||( !( p2.second > p1.second ) && p1.first < p2.first ) );
        } );
    return codUpassi;
}



