/********************************************************************************
** Form generated from reading UI file 'utenteitem.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UTENTEITEM_H
#define UI_UTENTEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UtenteItem
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *contenitore;
    QHBoxLayout *utenteBlocco;
    QLabel *username;

    void setupUi(QWidget *UtenteItem)
    {
        if (UtenteItem->objectName().isEmpty())
            UtenteItem->setObjectName(QStringLiteral("UtenteItem"));
        UtenteItem->resize(900, 83);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UtenteItem->sizePolicy().hasHeightForWidth());
        UtenteItem->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        UtenteItem->setFont(font);
        UtenteItem->setStyleSheet(QLatin1String("background-color: rgb(45, 59, 85);\n"
"color:white;\n"
"border:none;\n"
"\n"
""));
        gridLayout = new QGridLayout(UtenteItem);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        contenitore = new QVBoxLayout();
        contenitore->setSpacing(0);
        contenitore->setObjectName(QStringLiteral("contenitore"));
        contenitore->setSizeConstraint(QLayout::SetFixedSize);
        contenitore->setContentsMargins(0, 0, 0, 0);
        utenteBlocco = new QHBoxLayout();
        utenteBlocco->setSpacing(0);
        utenteBlocco->setObjectName(QStringLiteral("utenteBlocco"));
        utenteBlocco->setContentsMargins(6, 6, 6, 6);
        username = new QLabel(UtenteItem);
        username->setObjectName(QStringLiteral("username"));
        username->setFont(font);
        username->setAlignment(Qt::AlignCenter);
        username->setMargin(0);

        utenteBlocco->addWidget(username);


        contenitore->addLayout(utenteBlocco);


        gridLayout->addLayout(contenitore, 0, 0, 1, 1);


        retranslateUi(UtenteItem);

        QMetaObject::connectSlotsByName(UtenteItem);
    } // setupUi

    void retranslateUi(QWidget *UtenteItem)
    {
        UtenteItem->setWindowTitle(QApplication::translate("UtenteItem", "Form", 0));
        username->setText(QApplication::translate("UtenteItem", "NomeUtente", 0));
    } // retranslateUi

};

namespace Ui {
    class UtenteItem: public Ui_UtenteItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UTENTEITEM_H
