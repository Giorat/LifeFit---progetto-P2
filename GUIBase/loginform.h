#ifndef LOGINFORM_H
#define LOGINFORM_H

#include "mainwindow.h"
#include <QMainWindow>
#include <QLineEdit>
#include <QtGui>

#include "loginform.h"
#include "ui_loginform.h"

namespace Ui {
class LoginForm;
}

class LoginForm : public QMainWindow
{
    Q_OBJECT
public:
    LoginForm(QWidget *parent = 0);

    QPushButton *loginbtn;
    QPushButton *registerbtn;
    QLineEdit *usernametext;
    QLineEdit *passtext;

    ~LoginForm();

public slots:
    void loginclick();

private:
    QString user;
    QString pass;
    Ui::LoginForm *ui;
    MainWindow *mainapp;
};

#endif // LOGINFORM_H
