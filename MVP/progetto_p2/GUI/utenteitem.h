#ifndef UTENTEITEM_H
#define UTENTEITEM_H

#include <QWidget>
#include <QMessageBox>
#include "MODEL/utente.h"

namespace Ui {
class UtenteItem;
}

class UtenteItem : public QWidget
{
    Q_OBJECT

public:
    explicit UtenteItem(QWidget *parent,utente* user);

    /** @brief imposta l'eliminazione dell'utente quando è distrutto UtenteItem
     *  @param d se true si dovrà eliminare l'utente altrimenti no quando sarà richiamato il disturttore di UtenteItem
     */
    void setDeleteUser(bool d);

    /** @brief ritorna l'utente collegato all'UtenteItem*/
    utente* getUser()const;
    ~UtenteItem();

private:
    Ui::UtenteItem *ui;
    bool deleteUser;
    utente* user;
};

#endif // UTENTEITEM_H
