#ifndef UTENTE_H
#define UTENTE_H


#include <QDate>
#include <map>
#include <string>
#include "giorno.h"


class utente
{
friend class iofit;
private:
    unsigned int codiceUtente;
    std::string username;
    std::string nome;
    std::string cognome;
    QDate dataNascita;
    QString password;
    bool sesso;
    std::map<QDate,giorno> fit;
    unsigned int obb_pass_giornalieri;
public:

    virtual ~utente(){}

    utente* clone() const {
        return new utente(*this);
    }

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

    QDate primaAtt()const;
    QDate ultimaAtt()const;

    /**Percentuale di passi effettuati rispetto all'obbiettivo di passi giornaliero impostato dall'admin
    * @param QDate giorno del quale generare il float in frazione compresa tra 0.00 e 1.00
    */
    float perc_giorno(const QDate);

    /* Giorno utente in data QDate
     * @param QDate giorno del quale ritornare le informazioni legate all'attività e alla "situazione di quel giorno"
    */
    giorno * giornoData(const QDate);

    giorno * giornoDataConst(const QDate)const;

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

    friend std::ostream& operator<<(std::ostream &output, const utente *s);

    static std::vector<std::pair<int,int> >  ultimiSetteGiorniUtenti(const std::vector<const utente*>,const QDate);

    static std::pair<int,int> massimoGiornoUtenti(const std::vector<const utente*>,const QDate);

};

#endif // UTENTE_H
