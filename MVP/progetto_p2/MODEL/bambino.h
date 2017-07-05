#ifndef BAMBINO_H
#define BAMBINO_H

#include "utente.h"

class bambino : public utente
{
public:
    /**Costruttore completo di bambino
    * @param int codice utente
    * @param string nome dell'utente
    * @param string cognome utente
    * @param QDate data di nascita
    * @param bool sesso della persona ==1 se uomo ==0 se donna
    */
    bambino(const int codU,const std::string &n,const std::string &cn, QDate dN,bool s,QString pass);

    virtual bambino* clone() const;
    virtual bool aggiungiAttivita() const;
    virtual int passiConsigliati() const;
    virtual bool settingsEnabled() const;
    virtual QString nomeGruppo() const;
    virtual int codiceGruppo() const;

};

#endif // BAMBINO_H
