#ifndef REGISTER_H
#define REGISTER_H

#include "loginform.h"

#include <QMainWindow>
#include <QMessageBox>

class LoginForm;
class UiUser;

namespace Ui {
class Register;
}

class Register : public QMainWindow
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();
private:
    iofit * ioutenti;
    utente * user;
    LoginForm* loginF;
    Ui::Register *ui;
    UiUser *mainw;

    std::string username;
    std::string nome;
    std::string cognome;
    QDate dataNascita;
    QString password;
    int sesso;

    void closeEvent(QCloseEvent* event);

private slots :
    void SessoM();
    void SessoD();
    void tornaLogin();
    void vaiApp();
};

#endif // REGISTER_H
