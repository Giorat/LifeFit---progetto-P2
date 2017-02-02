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
    std::string nome;
    std::string cognome;
    QDate dataNascita;
    bool sesso;
    std::map<QDate,giorno> fit;
    unsigned int obb_pass_giornalieri = 10000;
public:

    /**Costruttore completo di utente tranne obb_pass_giornalieri
     * @param string nome dell'utente
     * @param string cognome utente
     * @param QDate data di nascita
     * @param bool sesso della persona ==1 se uomo ==0 se donna
 */ 
    utente(const std::string &n,const std::string &cn, QDate dN,bool s);

    void insert_gg(QDate,giorno);

    /**Percentuale di passi effettuati rispetto all'obbiettivo di passi giornaliero impostato dall'admin
    * @param QDate giorno del quale generare il float in frazione compresa tra 0.00 e 1.00
    */
    float perc_giorno(QDate);
    giorno giornoData(QDate);

    unsigned int obbiettivo_passi()const{return obb_pass_giornalieri;}

    /**Progressi del Mese totali
    * @param QDate data dal cui mese si parte dall'inizio ricavano il quantitativo di giorni tracciati e se il giorno con 0 steps/non tracked viene non considerato nella divisione della media
    */
    unsigned int progressi_mese(QDate);

    std::string sesso_ut()const{if(sesso)return "uomo"; else return "donna";}

    friend std::ostream& operator<<(std::ostream &output, const utente &s);

    unsigned int getCodiceUtente()const;
    std::string getNome()const;
    std::string getCognome()const;
    int getAge()const;

};

#endif // UTENTE_H
