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
    void setDeleteUser(bool d);
    utente* getUser()const;
    ~UtenteItem();

private:
    Ui::UtenteItem *ui;
    bool deleteUser;
    utente* user;
};

#endif // UTENTEITEM_H
