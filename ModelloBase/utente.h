#ifndef UTENTE_H
#define UTENTE_H


#include <QDate>
#include <map>
#include <string>
#include "giorno.h"


class utente
{
private:
    unsigned int codiceUtente;
    std::string nome;
    std::string cognome;
    QDate dataNascita;
    bool sesso;
    std::map<QDate,giorno> fit;
    unsigned int obb_pass_giornalieri = 10000;
public:

    utente(const std::string &n,const std::string &cn, QDate dN,bool s);
    void insert_gg(QDate,giorno);

    float perc_giorno(QDate);
    giorno giornoData(QDate);

    unsigned int obbiettivo_passi()const{return obb_pass_giornalieri;}

    unsigned int progressi_mese(QDate);

};

#endif // UTENTE_H
