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

    giorno(QDate,att_mov,att_sonno);

    QDate dataOd() const;

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
