#ifndef FRIEND_LABEL_H
#define FRIEND_LABEL_H
#include <QLabel>

class friend_label : public QLabel
{
    Q_OBJECT
private:
    static int count;
public:
    /** @brief costruttore completo di friendlabel
     *  @param QString testo da visualizzare sul Label
     *  @param QWidget genitore friendlabel
     */
    friend_label(const QString & text, QWidget *parent =0);

    ~friend_label();

    /** @brief ritorna numero di friend_label generati nella app da login utente corrente
     *  @return numero di friend_label generati nella app da login utente corrente
     */
    static int GetCount();

};
//int friend_label::count = 0;
#endif // FRIEND_LABEL_H


