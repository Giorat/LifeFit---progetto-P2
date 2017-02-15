/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *center_form;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *form;
    QLineEdit *nome;
    QLineEdit *cognome;
    QDateEdit *dataNascita;
    QHBoxLayout *horizontalLayout;
    QRadioButton *man;
    QRadioButton *woman;
    QPushButton *register_send;
    QPushButton *go_back;

    void setupUi(QMainWindow *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(540, 310);
        center_form = new QWidget(Register);
        center_form->setObjectName(QStringLiteral("center_form"));
        verticalLayoutWidget = new QWidget(center_form);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 20, 441, 231));
        QFont font;
        font.setPointSize(10);
        verticalLayoutWidget->setFont(font);
        form = new QVBoxLayout(verticalLayoutWidget);
        form->setSpacing(0);
        form->setObjectName(QStringLiteral("form"));
        form->setContentsMargins(0, 0, 0, 0);
        nome = new QLineEdit(verticalLayoutWidget);
        nome->setObjectName(QStringLiteral("nome"));
        nome->setFont(font);

        form->addWidget(nome);

        cognome = new QLineEdit(verticalLayoutWidget);
        cognome->setObjectName(QStringLiteral("cognome"));
        cognome->setFont(font);

        form->addWidget(cognome);

        dataNascita = new QDateEdit(verticalLayoutWidget);
        dataNascita->setObjectName(QStringLiteral("dataNascita"));
        dataNascita->setFont(font);
        dataNascita->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        dataNascita->setProperty("showGroupSeparator", QVariant(true));

        form->addWidget(dataNascita);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        man = new QRadioButton(verticalLayoutWidget);
        man->setObjectName(QStringLiteral("man"));
        man->setFont(font);

        horizontalLayout->addWidget(man);

        woman = new QRadioButton(verticalLayoutWidget);
        woman->setObjectName(QStringLiteral("woman"));
        woman->setFont(font);

        horizontalLayout->addWidget(woman);


        form->addLayout(horizontalLayout);

        register_send = new QPushButton(verticalLayoutWidget);
        register_send->setObjectName(QStringLiteral("register_send"));
        register_send->setMinimumSize(QSize(0, 40));
        register_send->setFont(font);

        form->addWidget(register_send);

        go_back = new QPushButton(center_form);
        go_back->setObjectName(QStringLiteral("go_back"));
        go_back->setGeometry(QRect(19, 265, 181, 40));
        go_back->setMinimumSize(QSize(0, 40));
        go_back->setFont(font);
        Register->setCentralWidget(center_form);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QMainWindow *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "MainWindow", 0));
#ifndef QT_NO_TOOLTIP
        nome->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        nome->setPlaceholderText(QApplication::translate("Register", "Nome", 0));
#ifndef QT_NO_TOOLTIP
        cognome->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        cognome->setPlaceholderText(QApplication::translate("Register", "Cognome", 0));
        man->setText(QApplication::translate("Register", "MASCHIO", 0));
        woman->setText(QApplication::translate("Register", "FEMMINA", 0));
        register_send->setText(QApplication::translate("Register", "REGISTRATI", 0));
        go_back->setText(QApplication::translate("Register", "TORNA AL LOGIN", 0));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
