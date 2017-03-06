#ifndef LOGINFORM_H
#define LOGINFORM_H

#include "mainwindow.h"
#include <QMainWindow>
#include <QLineEdit>
#include <QtGui>

#include "giorno.h"
#include "admin.h"
#include "admin_iofit.h"

#include "register.h"
#include "ui_loginform.h"

class Register;
class MainWindow;

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

private:
    admin_iofit ioutenti;
    utente * utenteLog;

    QString user;
    QString pass;
    Ui::LoginForm *ui;
    MainWindow *mainapp;
    Register *registerapp;
};

#endif // LOGINFORM_H
