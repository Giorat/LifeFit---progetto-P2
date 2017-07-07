#ifndef ADOLESCENTE_H
#define ADOLESCENTE_H

#include "utente.h"

class adolescente : public utente
{
public:
    /**Costruttore completo di adolescente
    * @param int codice utente
    * @param string nome dell'utente
    * @param string cognome utente
    * @param QDate data di nascita
    * @param bool sesso della persona ==1 se uomo ==0 se donna
    */
    adolescente(const int codU,const std::string &n,const std::string &cn, QDate dN,bool s,QString pass);

    virtual adolescente* clone() const;
    virtual bool aggiungiAttivita() const;
    virtual int passiConsigliati() const;
    virtual bool settingsEnabled() const;
    virtual QString nomeGruppo() const;
    virtual int codiceGruppo() const;
    virtual QColor coloreGruppo() const;
    virtual bool viewCalendar() const;
};

#endif // ADOLESCENTE_H
