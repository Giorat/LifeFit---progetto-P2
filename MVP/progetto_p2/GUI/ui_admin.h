#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QMainWindow>
#include <QPushButton>
#include <QListWidgetItem>
#include <QInputDialog>
#include <QSettings>

#include "ui_user.h"
#include "register.h"
#include "utenteitem.h"

class UiUser;
class Register;

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

    void on_deleteUser_clicked();

    void on_downloadXmlUser_clicked();

    void on_newUserCreate_clicked();

private:
    Ui::UiAdmin *ui;
    iofit *ioutenti;
    UiUser *mainapp;
    Register* registerapp;
};

#endif // UI_ADMIN_H
