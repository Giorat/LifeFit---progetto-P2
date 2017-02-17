#ifndef INPUTXMLFIT_H
#define INPUTXMLFIT_H

#include <QFile>
#include <QCryptographicHash>
#include <string>
#include "utente.h"

class inputxmlfit{
private:
    std::string DirectoryToSave;
    std::string xmlUsers;
    QFile usersXMLFile;

    bool utenteGiaPresente(const utente &user);

public:

   /**
    *@param string con cartella in cui salvare dati utenti e xml dati attivita utente
    */
   inputxmlfit(std::string);

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
     * @brief ritorna il numero del codice dell'ultimo utente creato
     * @return il numero di codice dell'utente creato per ultimo
     */
    int LastCodUtente();

   /**
    * @brief Salva dati utente sia le sue attività
    * @param utente del quale salvare le informazioni
    */
   void saveUser(const utente&);

   /**
    * @brief Salva i soli dati di movimento e di sonno dell'utente
    * @param string nome file in cui salvare movimenti utente
    * @param utente del quale salvare i dati di movimento
    */
   void outputXMLdatiMovimSleep(const utente&);
};

#endif // INPUTXMLFIT_H
