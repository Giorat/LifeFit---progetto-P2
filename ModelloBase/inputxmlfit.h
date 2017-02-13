#ifndef INPUTXMLFIT_H
#define INPUTXMLFIT_H

#include <string>
#include "utente.h"

class inputxmlfit{

public:

   /**
    * @brief Inserimento in input da xml dei dati di un utente nel suo contenitore usato
    * @param string nome del file compresa la directory tutto unito
    * @param utente nel quale inserire le informazioni prese dal relativo file xml scelto
    */
   void inputXMLdatiMovimSleep(std::string,utente&);

   /**
     * @brief crea l'utente con relative informazioni pure sul file
     * degli utenti del sistema corrente
     * @param utente che deve essere aggiunto al sistemas
     * @return 1 se creazione positiva 0 se non possibile creare utente
     */
    bool createUser(const utente&);

   /**
    * @brief Salva dati utente sia le sue attività
    * @param string nome della directory in cui salvare dati utenti
    * @param utente del quale salvare le informazioni
    */
   void saveUser(std::string,const utente&);

   /**
    * @brief Salva i soli dati di movimento e di sonno dell'utente
    * @param string nome file in cui salvare movimenti utente
    * @param utente del quale salvare i dati di movimento
    */
   void outputXMLdatiMovimSleep(std::string,const utente&);
};

#endif // INPUTXMLFIT_H
