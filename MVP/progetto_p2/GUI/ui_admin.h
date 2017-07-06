#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QMainWindow>
#include <QPushButton>
#include <QListWidgetItem>
#include <QSettings>

#include "utenteitem.h"
#include "MODEL/iofit.h"

namespace Ui {
class UiAdmin;
}

class UiAdmin : public QMainWindow
{
    Q_OBJECT

public:
    explicit UiAdmin(QMainWindow *parent = 0);
    ~UiAdmin();

private slots:
    void on_listUsers_itemPressed(QListWidgetItem *item);

    void on_listUsers_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::UiAdmin *ui;
    iofit * ioutenti;
};

#endif // UI_ADMIN_H
