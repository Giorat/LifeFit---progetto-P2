#ifndef UTENTE_H
#define UTENTE_H

#include <QDate>
#include <QColor>
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

    /**
    * @brief Costruttore completo di bambino
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
    virtual QColor coloreGruppo() const=0;
    virtual bool viewCalendar() const=0;

    void insert_gg(QDate,giorno);
    void modify_gg(QDate,giorno);
    void delete_gg(QDate);
    void setFit(utente*);

    QDate primaAtt()const;
    QDate ultimaAtt()const;

    /**
     * @brief Giorno utente in data QDate
     * @param QDate giorno del quale ritornare le informazioni legate all'attività e alla "situazione di quel giorno"
     * @return giorno* della giornata passata se esiste altrimenti puntatore nullo
    */
    giorno * giornoData(const QDate);

    /**
     * @brief Giorno utente in data QDate
     * @param QDate giorno del quale ritornare le informazioni legate all'attività e alla "situazione di quel giorno"
     * @return giorno* const della giornata passata se esiste altrimenti puntatore nullo
    */
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

    //Progressi in un mese Utente
    unsigned int progressi_mese(QDate d);

    static std::pair<int,int> massimoGiornoUtenti(const std::vector<const utente*>,const QDate);
    //ritorna l'utente con il codiceUtente passato preso dal vettore utenti
    static utente *  utenteCodiceUtente(const std::vector<const utente*>,const int);
    static std::vector<std::pair<int,int>> ultimiSetteGiorniUtenti(const std::vector<const utente*> utenti ,const QDate data);

};

#endif // UTENTE_H
