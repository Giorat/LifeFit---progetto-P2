#ifndef UTENTE_H
#define UTENTE_H


#include <QDate>
#include <map>
#include <string>
#include "giorno.h"


class utente
{
friend class inputxmlfit;
private:
    unsigned int codiceUtente;
    std::string username;
    std::string nome;
    std::string cognome;
    QDate dataNascita;
    QString password;
    bool sesso;
    std::map<QDate,giorno> fit;
    unsigned int obb_pass_giornalieri = 10000;
public:

    virtual ~utente(){}

    /**Costruttore completo di utente tranne obb_pass_giornalieri
     * @param int codice utente
     * @param string nome dell'utente
     * @param string cognome utente
     * @param QDate data di nascita
     * @param bool sesso della persona ==1 se uomo ==0 se donna
 */ 
   utente(const int codU,const std::string &n,const std::string &cn, QDate dN,bool s,QString pass);


    void insert_gg(QDate,giorno);
    void modify_gg(QDate,giorno);
    void delete_gg(QDate);

    /**Percentuale di passi effettuati rispetto all'obbiettivo di passi giornaliero impostato dall'admin
    * @param QDate giorno del quale generare il float in frazione compresa tra 0.00 e 1.00
    */
    float perc_giorno(QDate);
    giorno * giornoData(QDate);
    /**Progressi del Mese totali
    * @param QDate data dal cui mese si parte dall'inizio ricavano il quantitativo di giorni tracciati e se il giorno con 0 steps/non tracked viene non considerato nella divisione della media
    */
    unsigned int progressi_mese(QDate);

    //METODI GET UTENTE
    unsigned int obbiettivo_passi()const{return obb_pass_giornalieri;}
    unsigned int getCodiceUtente()const;
    std::string getNome()const;
    std::string getCognome()const;
    std::string getUsername()const;
    QDate getDataNascita()const;
    int getAge()const;
    bool getSesso()const;
    std::string sesso_ut()const{if(sesso)return "uomo"; else return "donna";}
    QString getPassword()const;
    int getGiorniFit()const;

    //METODI SET UTENTE
    void setNome(const std::string);
    void setCognome(const std::string);
    void setDataNascita(const QDate);
    void setSesso(const bool);
    void setPassword(const QString);

    friend std::ostream& operator<<(std::ostream &output, const utente &s);

};

#endif // UTENTE_H
