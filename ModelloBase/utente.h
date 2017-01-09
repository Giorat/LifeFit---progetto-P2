#ifndef UTENTE_H
#define UTENTE_H


#include <QDate>
#include <map>
#include <string>
#include "giorno.h"


class utente
{
private:
    int codiceUtente;
    std::string nome;
    std::string cognome;
    QDate dataNascita;
    bool sesso;
    std::map<QDate,giorno> fit;
public:

    utente(const std::string &n,const std::string &cn, QDate dN,bool s);
    void insert_gg(QDate,giorno);
    giorno giornoData(QDate);

};

#endif // UTENTE_H
