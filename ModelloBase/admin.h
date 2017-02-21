#ifndef ADMIN_H
#define ADMIN_H

#include "utente.h"

class admin : public utente
{
public:
    /**Costruttore completo di utente tranne obb_pass_giornalieri
     * @param int codice utente
     * @param string nome dell'utente
     * @param string cognome utente
     * @param QDate data di nascita
     * @param bool sesso della persona ==1 se uomo ==0 se donna
 */
   admin(const int codU,const std::string &n,const std::string &cn, QDate dN,bool s,QString pass);

};

#endif // ADMIN_H
