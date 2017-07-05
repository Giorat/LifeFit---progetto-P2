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
    QLineEdit *password;
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
        Register->setMinimumSize(QSize(540, 310));
        Register->setMaximumSize(QSize(540, 310));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/settings/resources/life_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Register->setWindowIcon(icon);
        Register->setStyleSheet(QStringLiteral("background:white;"));
        center_form = new QWidget(Register);
        center_form->setObjectName(QStringLiteral("center_form"));
        verticalLayoutWidget = new QWidget(center_form);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 20, 442, 231));
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

        password = new QLineEdit(verticalLayoutWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setFont(font);

        form->addWidget(password);

        dataNascita = new QDateEdit(verticalLayoutWidget);
        dataNascita->setObjectName(QStringLiteral("dataNascita"));
        dataNascita->setFont(font);
        dataNascita->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        dataNascita->setProperty("showGroupSeparator", QVariant(true));
        dataNascita->setDate(QDate(1791, 1, 1));

        form->addWidget(dataNascita);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        man = new QRadioButton(verticalLayoutWidget);
        man->setObjectName(QStringLiteral("man"));
        man->setFont(font);
        man->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(man);

        woman = new QRadioButton(verticalLayoutWidget);
        woman->setObjectName(QStringLiteral("woman"));
        woman->setFont(font);
        woman->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(woman);


        form->addLayout(horizontalLayout);

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
        go_back->setGeometry(QRect(0, 265, 210, 45));
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
#ifndef QT_NO_TOOLTIP
        nome->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        nome->setPlaceholderText(QApplication::translate("Register", "Nome", 0));
#ifndef QT_NO_TOOLTIP
        cognome->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        cognome->setPlaceholderText(QApplication::translate("Register", "Cognome", 0));
        password->setPlaceholderText(QApplication::translate("Register", "Password", 0));
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
