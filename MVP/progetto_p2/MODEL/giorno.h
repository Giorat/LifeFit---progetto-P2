#ifndef GIORNO_H
#define GIORNO_H

#include <vector>
#include <QDate>
#include <string>

#include "att_mov.h"
#include "att_sonno.h"

class giorno
{
public:

    giorno();

    /** @brief Costruttore completo di un giorno
     *  @param QDate data del giorno
     *  @param att_mov giornata movimento
     *  @param att_sonno riposo sonno da ieri notte alla mattina del giorno attuale
     */
    giorno(QDate,att_mov,att_sonno);

    /** @return QDate la data del giorno*/
    QDate dataOd() const;

    /** @return la data di questo giorno in formato stringa ANNO MESE GIORNO*/
    std::string getDate() const;

    /** @brief ritorna attività movimento di questo giorno
     *  @return att_mov di questo giorno
     */
    att_mov movim()const {return awake;}

    /** @brief ritorna attività sonno di questo giorno
     *  @return att_sonno di questo giorno
     */
    att_sonno dormit()const {return sleep;}

    /** @brief costruttore di copia di giorno
     *  @param giorno di cui effettuare la copia
     */
    giorno(const giorno &copyin);

private:
    QDate data;
    att_mov awake;
    att_sonno sleep;
};



#endif // GIORNO_H
