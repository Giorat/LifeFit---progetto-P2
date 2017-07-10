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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
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
    QWidget *login_form;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLineEdit *username;
    QGroupBox *groupBox_2;
    QLineEdit *password;
    QPushButton *forgotpass;
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
        login_form = new QWidget(login_center);
        login_form->setObjectName(QStringLiteral("login_form"));
        login_form->setGeometry(QRect(0, 0, 400, 211));
        verticalLayout = new QVBoxLayout(login_form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 6, -1, -1);
        groupBox = new QGroupBox(login_form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        username = new QLineEdit(groupBox);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(10, 20, 365, 45));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(username->sizePolicy().hasHeightForWidth());
        username->setSizePolicy(sizePolicy1);
        username->setMinimumSize(QSize(239, 25));
        QFont font1;
        font1.setPointSize(11);
        username->setFont(font1);
        username->setStyleSheet(QStringLiteral("color:rgb(46,47,48);"));
        username->setFrame(false);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(login_form);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        password = new QLineEdit(groupBox_2);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(10, 20, 365, 45));
        password->setMinimumSize(QSize(239, 25));
        password->setFont(font1);
        password->setStyleSheet(QLatin1String("color:rgb(46,47,48);\n"
""));
        password->setFrame(false);

        verticalLayout->addWidget(groupBox_2);

        forgotpass = new QPushButton(login_form);
        forgotpass->setObjectName(QStringLiteral("forgotpass"));
        sizePolicy1.setHeightForWidth(forgotpass->sizePolicy().hasHeightForWidth());
        forgotpass->setSizePolicy(sizePolicy1);
        forgotpass->setFont(font1);
        forgotpass->setCursor(QCursor(Qt::PointingHandCursor));
        forgotpass->setStyleSheet(QStringLiteral("color:rgb(140,140,140);"));
        forgotpass->setCheckable(false);
        forgotpass->setFlat(true);

        verticalLayout->addWidget(forgotpass);

        login = new QPushButton(login_center);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(-1, 210, 401, 45));
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
        LoginForm->setWindowTitle(QApplication::translate("LoginForm", "UiUser", 0));
        groupBox->setTitle(QApplication::translate("LoginForm", "USERNAME", 0));
        username->setPlaceholderText(QString());
        groupBox_2->setTitle(QApplication::translate("LoginForm", "PASSWORD", 0));
        password->setPlaceholderText(QString());
        forgotpass->setText(QApplication::translate("LoginForm", "FORGOT YOUR PASSWORD", 0));
        login->setText(QApplication::translate("LoginForm", "LOGIN   ", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
