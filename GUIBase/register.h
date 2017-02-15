#ifndef REGISTER_H
#define REGISTER_H

#include "loginform.h"

#include <QMainWindow>
#include <QMessageBox>

class LoginForm;

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
    LoginForm* loginF;
    Ui::Register *ui;
private slots :
    void SessoM();
    void SessoD();
    void tornaLogin();

};

#endif // REGISTER_H
