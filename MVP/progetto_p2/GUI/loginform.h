
#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QLineEdit>
#include <QtGui>
#include <string>

#include "../MODEL/giorno.h"
#include "../MODEL/utente.h"
#include "../MODEL/iofit.h"

#include "ui_loginform.h"
#include "ui_admin.h"

class UiAdmin;
class UiUser;

namespace Ui {
    class LoginForm;
}

class LoginForm : public QMainWindow
{
    Q_OBJECT
public:
    explicit LoginForm(QWidget *parent = 0);

    QPushButton *loginbtn;
    QPushButton *registerbtn;
    QLineEdit *usernametext;
    QLineEdit *passtext;

    ~LoginForm();

public slots:
    void loginclick();
    void loginclick2();
    void psetFocus();

private slots:
    /** @brief se cliccato su password dimenticata */
    void on_forgotpass_clicked();

private:
    Ui::LoginForm *ui;
    UiUser *mainapp;
    UiAdmin *adminapp;
    iofit *ioutenti;
    utente *utenteLog;
    QString user;
    QString pass;

    //functions
    /** @brief login dell'utente con informazioni messe nella ui */
    void LoginUser();

    void closeEvent(QCloseEvent* event);
};

#endif // LOGINFORM_H
