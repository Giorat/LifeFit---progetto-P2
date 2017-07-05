
#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QMainWindow>
#include <QLineEdit>
#include <QtGui>

#include "../MODEL/giorno.h"
#include "../MODEL/utente.h"
#include "../MODEL/iofit.h"

#include "ui_user.h"
#include "register.h"
#include "ui_admin.h"
#include "ui_loginform.h"

class Register;
class QMainWindow;

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
    void registerTo();

private slots:
    void on_forgotpass_clicked();

private:
    iofit * ioutenti;
    utente * utenteLog;

    QString user;
    QString pass;
    Ui::LoginForm *ui;
    UiUser *mainapp;
    Register *registerapp;
    UiAdmin *adminapp;
    void LoginUser();
    void closeEvent(QCloseEvent* event);
};

#endif // LOGINFORM_H
