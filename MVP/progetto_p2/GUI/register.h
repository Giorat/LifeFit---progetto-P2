#ifndef REGISTER_H
#define REGISTER_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCryptographicHash>

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
    int gruppo;

    void closeEvent(QCloseEvent* event);
signals:
    /** chiusura registrazione segnalata a Ui_Admin */
    void closeReg();
private slots :
    void SessoM();
    void SessoD();
    void tornaAdmin();
    void vaiApp();
    void on_bambino_clicked();
    void on_adolescente_clicked();
    void on_adulto_clicked();
};

#endif // REGISTER_H
