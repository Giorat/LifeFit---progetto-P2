#ifndef UTENTEADMINVIEW_H
#define UTENTEADMINVIEW_H

#include "utente.h"

class utenteAdminView : public utente
{
public:
    /**Costruttore completo di utenteAdminView
    * @param int codice utente
    * @param string nome dell'utente
    * @param string cognome utente
    * @param QDate data di nascita
    * @param bool sesso della persona ==1 se uomo ==0 se donna
    */
    utenteAdminView(const int codU,const std::string &n,const std::string &cn, QDate dN,bool s,QString pass);

    virtual utenteAdminView* clone() const;
    virtual bool aggiungiAttivita() const;
    virtual int passiConsigliati() const;
    virtual bool settingsEnabled() const;
    virtual QString nomeGruppo() const;
    virtual int codiceGruppo() const;
    virtual QColor coloreGruppo() const;
    virtual bool viewCalendar() const;
};

#endif // UTENTEADMINVIEW_H
