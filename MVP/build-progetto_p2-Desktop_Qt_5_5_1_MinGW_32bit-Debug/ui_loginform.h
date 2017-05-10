/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QWidget *login_center;
    QWidget *form;
    QVBoxLayout *verticalLayout;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *forgotpass;
    QLabel *label;
    QPushButton *register_n;
    QPushButton *login;

    void setupUi(QMainWindow *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QStringLiteral("LoginForm"));
        LoginForm->resize(400, 254);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginForm->sizePolicy().hasHeightForWidth());
        LoginForm->setSizePolicy(sizePolicy);
        LoginForm->setMinimumSize(QSize(400, 254));
        LoginForm->setMaximumSize(QSize(400, 254));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/settings/resources/life_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LoginForm->setWindowIcon(icon);
        LoginForm->setStyleSheet(QStringLiteral("background:white;"));
        login_center = new QWidget(LoginForm);
        login_center->setObjectName(QStringLiteral("login_center"));
        sizePolicy.setHeightForWidth(login_center->sizePolicy().hasHeightForWidth());
        login_center->setSizePolicy(sizePolicy);
        login_center->setMinimumSize(QSize(400, 254));
        QFont font;
        font.setPointSize(12);
        login_center->setFont(font);
        login_center->setStyleSheet(QStringLiteral("background:white;"));
        form = new QWidget(login_center);
        form->setObjectName(QStringLiteral("form"));
        form->setGeometry(QRect(0, 40, 400, 161));
        verticalLayout = new QVBoxLayout(form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        username = new QLineEdit(form);
        username->setObjectName(QStringLiteral("username"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(username->sizePolicy().hasHeightForWidth());
        username->setSizePolicy(sizePolicy1);
        username->setMinimumSize(QSize(239, 25));
        QFont font1;
        font1.setPointSize(11);
        username->setFont(font1);
        username->setFrame(false);

        verticalLayout->addWidget(username);

        password = new QLineEdit(form);
        password->setObjectName(QStringLiteral("password"));
        password->setMinimumSize(QSize(239, 25));
        password->setFont(font1);
        password->setFrame(false);

        verticalLayout->addWidget(password);

        forgotpass = new QPushButton(form);
        forgotpass->setObjectName(QStringLiteral("forgotpass"));
        sizePolicy1.setHeightForWidth(forgotpass->sizePolicy().hasHeightForWidth());
        forgotpass->setSizePolicy(sizePolicy1);
        forgotpass->setFont(font1);
        forgotpass->setStyleSheet(QStringLiteral("color:rgb(140,140,140);"));
        forgotpass->setCheckable(false);
        forgotpass->setFlat(true);

        verticalLayout->addWidget(forgotpass);

        label = new QLabel(login_center);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 111, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:rgb(102,102,102);"));
        register_n = new QPushButton(login_center);
        register_n->setObjectName(QStringLiteral("register_n"));
        register_n->setGeometry(QRect(0, 210, 200, 45));
        sizePolicy.setHeightForWidth(register_n->sizePolicy().hasHeightForWidth());
        register_n->setSizePolicy(sizePolicy);
        register_n->setMinimumSize(QSize(124, 31));
        register_n->setFont(font);
        register_n->setCursor(QCursor(Qt::PointingHandCursor));
        register_n->setStyleSheet(QLatin1String("background-color: rgb(232, 233, 236);\n"
"color: rgb(132,140,157);\n"
"Text-align:left;\n"
"border:none;\n"
"padding-left:10px;"));
        register_n->setFlat(false);
        login = new QPushButton(login_center);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(200, 210, 200, 45));
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        login->setMinimumSize(QSize(124, 31));
        login->setFont(font);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setLayoutDirection(Qt::LeftToRight);
        login->setStyleSheet(QLatin1String("background-color: rgb(45, 59, 85);\n"
"color:white;\n"
"Text-align:right;\n"
"border:none;\n"
"padding-right:10px;"));
        login->setFlat(false);
        LoginForm->setCentralWidget(login_center);

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QMainWindow *LoginForm)
    {
        LoginForm->setWindowTitle(QApplication::translate("LoginForm", "MainWindow", 0));
        username->setPlaceholderText(QApplication::translate("LoginForm", "USERNAME", 0));
        password->setPlaceholderText(QApplication::translate("LoginForm", "PASSWORD", 0));
        forgotpass->setText(QApplication::translate("LoginForm", "FORGOT YOUR PASSWORD", 0));
        label->setText(QApplication::translate("LoginForm", "LOGIN", 0));
        register_n->setText(QApplication::translate("LoginForm", "  REGISTER", 0));
        login->setText(QApplication::translate("LoginForm", "LOGIN   ", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
