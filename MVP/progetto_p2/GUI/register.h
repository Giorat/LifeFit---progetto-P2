#ifndef REGISTER_H
#define REGISTER_H

#include <QMainWindow>
#include <QMessageBox>

#include "ui_admin.h"

class UiAdmin;
class UiUser;

namespace Ui {
class Register;
}

class Register : public QMainWindow
{
    Q_OBJECT

public:
    explicit Register(UiAdmin *adm,QWidget *parent=0);
    ~Register();
private:
    Ui::Register *ui;
    iofit * ioutenti;
    utente * user;
    UiAdmin* adminapp;
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
    void tornaAdmin();
    void vaiApp();
};

#endif // REGISTER_H
