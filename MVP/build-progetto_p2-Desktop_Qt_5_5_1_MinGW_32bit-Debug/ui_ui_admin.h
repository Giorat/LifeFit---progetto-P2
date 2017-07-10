/********************************************************************************
** Form generated from reading UI file 'ui_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_ADMIN_H
#define UI_UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiAdmin
{
public:
    QWidget *container;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *bentornatoAdm;
    QSpacerItem *spazio0;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listUsers;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *newUserCreate;
    QSpacerItem *spazio1;
    QPushButton *downloadXmlUser;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *deleteUser;

    void setupUi(QMainWindow *UiAdmin)
    {
        if (UiAdmin->objectName().isEmpty())
            UiAdmin->setObjectName(QStringLiteral("UiAdmin"));
        UiAdmin->resize(960, 640);
        UiAdmin->setMinimumSize(QSize(960, 640));
        UiAdmin->setMaximumSize(QSize(960, 640));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/settings/resources/life_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        UiAdmin->setWindowIcon(icon);
        container = new QWidget(UiAdmin);
        container->setObjectName(QStringLiteral("container"));
        container->setWindowIcon(icon);
        container->setStyleSheet(QStringLiteral("background:white;"));
        horizontalLayoutWidget = new QWidget(container);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 0, 901, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        bentornatoAdm = new QLabel(horizontalLayoutWidget);
        bentornatoAdm->setObjectName(QStringLiteral("bentornatoAdm"));
        QFont font;
        font.setPointSize(12);
        bentornatoAdm->setFont(font);
        bentornatoAdm->setStyleSheet(QStringLiteral("color: rgb(163, 180, 200);"));

        horizontalLayout->addWidget(bentornatoAdm);

        spazio0 = new QSpacerItem(50, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(spazio0);

        scrollArea = new QScrollArea(container);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(30, 170, 901, 451));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 899, 449));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 901, 501));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listUsers = new QListWidget(verticalLayoutWidget);
        listUsers->setObjectName(QStringLiteral("listUsers"));
        listUsers->setProperty("isWrapping", QVariant(false));
        listUsers->setUniformItemSizes(false);
        listUsers->setSelectionRectVisible(true);

        verticalLayout->addWidget(listUsers);

        scrollArea->setWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget_2 = new QWidget(container);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 50, 901, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        newUserCreate = new QPushButton(horizontalLayoutWidget_2);
        newUserCreate->setObjectName(QStringLiteral("newUserCreate"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(newUserCreate->sizePolicy().hasHeightForWidth());
        newUserCreate->setSizePolicy(sizePolicy1);
        newUserCreate->setCursor(QCursor(Qt::PointingHandCursor));
        newUserCreate->setStyleSheet(QLatin1String("background-color: rgb(45, 59, 85);\n"
"color:white;\n"
"border-radius: 5px;\n"
"border:none;"));

        horizontalLayout_2->addWidget(newUserCreate);

        spazio1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spazio1);

        downloadXmlUser = new QPushButton(horizontalLayoutWidget_2);
        downloadXmlUser->setObjectName(QStringLiteral("downloadXmlUser"));
        sizePolicy1.setHeightForWidth(downloadXmlUser->sizePolicy().hasHeightForWidth());
        downloadXmlUser->setSizePolicy(sizePolicy1);
        downloadXmlUser->setCursor(QCursor(Qt::PointingHandCursor));
        downloadXmlUser->setStyleSheet(QLatin1String("background-color: rgb(45, 59, 85);\n"
"color:white;\n"
"border-radius: 5px;\n"
"border:none;\n"
"\n"
""));

        horizontalLayout_2->addWidget(downloadXmlUser);

        horizontalLayoutWidget_3 = new QWidget(container);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(30, 110, 901, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        deleteUser = new QPushButton(horizontalLayoutWidget_3);
        deleteUser->setObjectName(QStringLiteral("deleteUser"));
        sizePolicy1.setHeightForWidth(deleteUser->sizePolicy().hasHeightForWidth());
        deleteUser->setSizePolicy(sizePolicy1);
        deleteUser->setCursor(QCursor(Qt::PointingHandCursor));
        deleteUser->setStyleSheet(QLatin1String("background-color: rgb(255,51,51);\n"
"color:white;\n"
"border-radius: 5px;\n"
"border:none;\n"
"\n"
""));

        horizontalLayout_3->addWidget(deleteUser);

        UiAdmin->setCentralWidget(container);

        retranslateUi(UiAdmin);

        QMetaObject::connectSlotsByName(UiAdmin);
    } // setupUi

    void retranslateUi(QMainWindow *UiAdmin)
    {
        container->setWindowTitle(QApplication::translate("UiAdmin", "Form", 0));
        bentornatoAdm->setText(QApplication::translate("UiAdmin", "Bentornato Admin", 0));
        newUserCreate->setText(QApplication::translate("UiAdmin", "Aggiungi nuovo Utente", 0));
        downloadXmlUser->setText(QApplication::translate("UiAdmin", "Scarica XML per input  Utente", 0));
        deleteUser->setText(QApplication::translate("UiAdmin", "Elimina Utente Selezionato", 0));
        Q_UNUSED(UiAdmin);
    } // retranslateUi

};

namespace Ui {
    class UiAdmin: public Ui_UiAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_ADMIN_H
