#ifndef IOFIT_H
#define IOFIT_H

#include <QFile>
#include <QDomDocument>
#include <QCryptographicHash>
#include <string>
#include "utente.h"

class iofit{
protected:
    std::string DirectoryToSave;
    std::string xmlUsers;
    QFile usersXMLFile;

    /**
     * @brief utenteGiaPresente permette di determinare se un utente sia già presente ossia omonimo
     * @param user utente del quale bisogna controllare presenza di un omonimo
     * @return -1 se l'utente non è presente altrimenti ritorna il codice utente dell'utente gia presente
     */
    int utenteGiaPresente(const utente *);

public:

    QString hash_password_utente(QString);

   /**
    *@param string con cartella in cui salvare dati utenti e xml dati attivita utente
    */
   iofit(std::string);

   /**
    * @brief loadUser
    * @param u username della persona da cercare
    * @param p password in chiaro dell'utente
    * @return user
    */
   utente* loadUser(const std::string u,const std::string p);


   /**
    * @brief Inserimento in input da xml dei dati di un utente nel suo contenitore usato
    * @param string nome del file compresa la directory tutto unito
    * @param utente nel quale inserire le informazioni prese dal relativo file xml scelto
    */
   void inputXMLdatiMovimSleep(std::string,utente*);

   /**
     * @brief crea l'utente con relative informazioni pure sul file
     * degli utenti del sistema corrente
     * @param utente che deve essere aggiunto al sistemas
     * @return 1 se creazione positiva 0 se non possibile creare utente
     */
    bool createUser(const utente*);

    /**
     * @brief ritorna il numero del codice dell'ultimo utente creato
     * @return il numero di codice dell'utente creato per ultimo
     */
    int LastCodUtente();

   /**
    * @brief Salva dati utente nel caso siano stati modificati
    * @param utente del quale salvare le informazioni
    * @return 1 se utente salvato correttamente 0 se l'utente è doppione omonimo non potendo essere salvato
    */
   bool saveUser(const utente*);

   /**
    * @brief deleteUser
    * @param utente da eliminare dal file xml utenti sia il suo file fit
    */
   void deleteUser(const utente*);


   /**
    * @brief Carica i soli dati di movimento e di sonno dell'utente
    * @param utente del quale caricare i dati di movimento e di sonno
    * @return 1 se caricati dati utente 0 se non è stato possibile
    */
   bool loadUserFit(utente*);

   /**
    * @brief Salva i soli dati di movimento e di sonno dell'utente
    * @param string nome file in cui salvare movimenti utente
    * @param utente del quale salvare i dati di movimento e di sonno
    */
   void saveUserFit(const utente*);

};

#endif // IOFIT_H
