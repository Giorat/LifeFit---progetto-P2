#ifndef UTENTE_H
#define UTENTE_H

#include <QDate>
#include <map>
#include <string>
#include "giorno.h"

class utente
{
friend class iofit;
protected:
    unsigned int codiceUtente;
    std::string username;
    std::string nome;
    std::string cognome;
    QDate dataNascita;
    bool sesso;
    QString password;

    std::map<QDate,giorno> fit;
public:

    /**Costruttore completo di bambino
    * @param int codice utente
    * @param string nome dell'utente
    * @param string cognome utente
    * @param QDate data di nascita
    * @param bool sesso della persona ==1 se uomo ==0 se donna
    */
    utente(const int codU,const std::string &n,const std::string &cn, QDate dN,bool s,QString pass);


    //Polimorfismo
    virtual ~utente(){}
    virtual utente* clone() const=0;
    virtual bool aggiungiAttivita() const=0;
    virtual int passiConsigliati() const=0;
    virtual bool settingsEnabled() const=0;
    virtual QString nomeGruppo() const=0;
    virtual int codiceGruppo() const=0;

    void insert_gg(QDate,giorno);
    void modify_gg(QDate,giorno);
    void delete_gg(QDate);

    QDate primaAtt()const;
    QDate ultimaAtt()const;

    /* Giorno utente in data QDate
     * @param QDate giorno del quale ritornare le informazioni legate all'attività e alla "situazione di quel giorno"
    */
    giorno * giornoData(const QDate);

    giorno * giornoDataConst(const QDate)const;

    //METODI GET UTENTE
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

    static std::pair<int,int> massimoGiornoUtenti(const std::vector<const utente*>,const QDate);

    //ritorna l'utente con il codiceUtente passato preso dal vettore utenti
    static utente *  utenteCodiceUtente(const std::vector<const utente*>,const int);

};

#endif // UTENTE_H
