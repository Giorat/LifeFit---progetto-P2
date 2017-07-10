/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox;
    QLineEdit *nome;
    QGroupBox *groupBox_2;
    QLineEdit *cognome;
    QGroupBox *groupBox_3;
    QLineEdit *password;
    QGroupBox *groupBox_4;
    QDateEdit *dataNascita;
    QGroupBox *tipo_sesso_utente;
    QWidget *orizz_1;
    QHBoxLayout *tipo_sesso;
    QRadioButton *man;
    QRadioButton *woman;
    QGroupBox *tipo_utente_padre;
    QWidget *orizz_2;
    QHBoxLayout *tipo_utente;
    QRadioButton *bambino;
    QRadioButton *adolescente;
    QRadioButton *adulto;
    QPushButton *register_send;
    QPushButton *go_back;

    void setupUi(QMainWindow *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(540, 420);
        Register->setMinimumSize(QSize(540, 420));
        Register->setMaximumSize(QSize(540, 420));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/settings/resources/life_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Register->setWindowIcon(icon);
        Register->setStyleSheet(QStringLiteral("background:white;"));
        center_form = new QWidget(Register);
        center_form->setObjectName(QStringLiteral("center_form"));
        verticalLayoutWidget = new QWidget(center_form);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 10, 442, 361));
        QFont font;
        font.setPointSize(10);
        verticalLayoutWidget->setFont(font);
        form = new QVBoxLayout(verticalLayoutWidget);
        form->setSpacing(1);
        form->setObjectName(QStringLiteral("form"));
        form->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        nome = new QLineEdit(groupBox);
        nome->setObjectName(QStringLiteral("nome"));
        nome->setGeometry(QRect(5, 20, 430, 24));
        nome->setFont(font);

        form->addWidget(groupBox);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        cognome = new QLineEdit(groupBox_2);
        cognome->setObjectName(QStringLiteral("cognome"));
        cognome->setGeometry(QRect(5, 20, 430, 24));
        cognome->setFont(font);

        form->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(verticalLayoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        password = new QLineEdit(groupBox_3);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(5, 20, 430, 24));
        password->setFont(font);
        password->raise();
        password->raise();

        form->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(verticalLayoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        dataNascita = new QDateEdit(groupBox_4);
        dataNascita->setObjectName(QStringLiteral("dataNascita"));
        dataNascita->setGeometry(QRect(5, 20, 430, 24));
        dataNascita->setFont(font);
        dataNascita->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        dataNascita->setProperty("showGroupSeparator", QVariant(true));
        dataNascita->setMinimumDate(QDate(1753, 1, 1));
        dataNascita->setDate(QDate(1990, 1, 1));

        form->addWidget(groupBox_4);

        tipo_sesso_utente = new QGroupBox(verticalLayoutWidget);
        tipo_sesso_utente->setObjectName(QStringLiteral("tipo_sesso_utente"));
        orizz_1 = new QWidget(tipo_sesso_utente);
        orizz_1->setObjectName(QStringLiteral("orizz_1"));
        orizz_1->setGeometry(QRect(10, 19, 421, 31));
        tipo_sesso = new QHBoxLayout(orizz_1);
        tipo_sesso->setSpacing(1);
        tipo_sesso->setObjectName(QStringLiteral("tipo_sesso"));
        tipo_sesso->setContentsMargins(6, 0, 0, 0);
        man = new QRadioButton(orizz_1);
        man->setObjectName(QStringLiteral("man"));

        tipo_sesso->addWidget(man);

        woman = new QRadioButton(orizz_1);
        woman->setObjectName(QStringLiteral("woman"));

        tipo_sesso->addWidget(woman);


        form->addWidget(tipo_sesso_utente);

        tipo_utente_padre = new QGroupBox(verticalLayoutWidget);
        tipo_utente_padre->setObjectName(QStringLiteral("tipo_utente_padre"));
        orizz_2 = new QWidget(tipo_utente_padre);
        orizz_2->setObjectName(QStringLiteral("orizz_2"));
        orizz_2->setGeometry(QRect(10, 19, 421, 31));
        tipo_utente = new QHBoxLayout(orizz_2);
        tipo_utente->setSpacing(1);
        tipo_utente->setObjectName(QStringLiteral("tipo_utente"));
        tipo_utente->setContentsMargins(6, 0, 0, 0);
        bambino = new QRadioButton(orizz_2);
        bambino->setObjectName(QStringLiteral("bambino"));

        tipo_utente->addWidget(bambino);

        adolescente = new QRadioButton(orizz_2);
        adolescente->setObjectName(QStringLiteral("adolescente"));

        tipo_utente->addWidget(adolescente);

        adulto = new QRadioButton(orizz_2);
        adulto->setObjectName(QStringLiteral("adulto"));

        tipo_utente->addWidget(adulto);


        form->addWidget(tipo_utente_padre);

        register_send = new QPushButton(verticalLayoutWidget);
        register_send->setObjectName(QStringLiteral("register_send"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(register_send->sizePolicy().hasHeightForWidth());
        register_send->setSizePolicy(sizePolicy);
        register_send->setMinimumSize(QSize(439, 40));
        register_send->setFont(font);
        register_send->setCursor(QCursor(Qt::PointingHandCursor));
        register_send->setStyleSheet(QLatin1String("background-color: rgb(45, 59, 85);\n"
"color:white;\n"
"border:none;"));

        form->addWidget(register_send);

        go_back = new QPushButton(center_form);
        go_back->setObjectName(QStringLiteral("go_back"));
        go_back->setGeometry(QRect(0, 380, 241, 40));
        sizePolicy.setHeightForWidth(go_back->sizePolicy().hasHeightForWidth());
        go_back->setSizePolicy(sizePolicy);
        go_back->setMinimumSize(QSize(181, 40));
        go_back->setFont(font);
        go_back->setCursor(QCursor(Qt::PointingHandCursor));
        go_back->setStyleSheet(QLatin1String("background-color: rgb(232, 233, 236);\n"
"color: rgb(132,140,157);\n"
"padding-left:5px;\n"
"border:none;"));
        go_back->setFlat(false);
        Register->setCentralWidget(center_form);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QMainWindow *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "UiUser", 0));
        groupBox->setTitle(QApplication::translate("Register", "Nome", 0));
#ifndef QT_NO_TOOLTIP
        nome->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        nome->setPlaceholderText(QApplication::translate("Register", "Nome", 0));
        groupBox_2->setTitle(QApplication::translate("Register", "Cognome", 0));
#ifndef QT_NO_TOOLTIP
        cognome->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        cognome->setPlaceholderText(QApplication::translate("Register", "Cognome", 0));
        groupBox_3->setTitle(QApplication::translate("Register", "Password", 0));
        password->setPlaceholderText(QApplication::translate("Register", "Password", 0));
        groupBox_4->setTitle(QApplication::translate("Register", "Data di nascita", 0));
        dataNascita->setDisplayFormat(QApplication::translate("Register", "dd/MM/yyyy", 0));
        tipo_sesso_utente->setTitle(QApplication::translate("Register", "Sesso utente", 0));
        man->setText(QApplication::translate("Register", "Uomo", 0));
        woman->setText(QApplication::translate("Register", "Donna", 0));
        tipo_utente_padre->setTitle(QApplication::translate("Register", "Tipologia utente", 0));
        bambino->setText(QApplication::translate("Register", "Bambino", 0));
        adolescente->setText(QApplication::translate("Register", "Adolescente", 0));
        adulto->setText(QApplication::translate("Register", "Adulto", 0));
        register_send->setText(QApplication::translate("Register", "REGISTRATI", 0));
        go_back->setText(QApplication::translate("Register", "CHIUDI", 0));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
