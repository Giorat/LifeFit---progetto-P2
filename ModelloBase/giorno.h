#ifndef GIORNO_H
#define GIORNO_H
#include <iostream>
#include <vector>
#include <QDate>
#include <string>

#include "att_mov.h"
#include "att_sonno.h"

class giorno
{
public:

    giorno();

    /** Costruttore completo di un giorno
     *  @param QDate data del giorno
     *  @param att_mov giornata movimento
     *  @param att_sonno riposo sonno da ieri notte alla mattina del giorno attuale
    giorno(QDate,att_mov,att_sonno);

    /** @return QDate la data del giorno*/
    QDate dataOd() const;

    /** @return la data di questo giorno in formato stringa ANNO MESE GIORNO*/
    std::string getDate() const;

    att_mov movim()const {return awake;}

    att_sonno dormit()const {return sleep;}

    giorno(const giorno &copyin);

    giorno& operator=(const giorno &g);

    int operator==(const giorno &g) const;

    int operator!=(const giorno &g) const;

    int operator<(const giorno &g) const;

    friend std::ostream& operator<<(std::ostream& output, const giorno &s);


private:
    QDate data;
    att_mov awake;
    att_sonno sleep;
};



#endif // GIORNO_H
