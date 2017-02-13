/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "circularprogress.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *settings;
    QLabel *avatar;
    QLabel *nome;
    QLabel *eta;
    QPlainTextEdit *username;
    QSpacerItem *verticalSpacer;
    QWidget *centralWidget;
    QCalendarWidget *calendarWidget;
    CircularProgress *progressoMovim;
    CircularProgress *progressoSonno;
    CircularProgress *progressoMese;
    QPushButton *mesePrec;
    QPushButton *meseSucc;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(850, 750);
        MainWindow->setMinimumSize(QSize(800, 750));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(236, 242, 246);"));
        horizontalLayoutWidget = new QWidget(MainWindow);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalLayoutWidget->sizePolicy().hasHeightForWidth());
        horizontalLayoutWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, -1, 181, -1);
        widget = new QWidget(horizontalLayoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(400, 16777215));
        widget->setStyleSheet(QLatin1String("background-color: rgb(53, 64, 82);\n"
"color: rgb(163, 180, 200);"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        settings = new QPushButton(widget);
        settings->setObjectName(QStringLiteral("settings"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy1);
        settings->setMinimumSize(QSize(0, 30));
        settings->setMaximumSize(QSize(40, 39));
        settings->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/settings/resources/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        settings->setIcon(icon);
        settings->setIconSize(QSize(41, 39));
        settings->setFlat(true);

        verticalLayout->addWidget(settings);

        avatar = new QLabel(widget);
        avatar->setObjectName(QStringLiteral("avatar"));
        avatar->setMinimumSize(QSize(125, 125));
        avatar->setMaximumSize(QSize(125, 125));
        avatar->setSizeIncrement(QSize(0, 0));
        avatar->setStyleSheet(QStringLiteral("background-image: url(:/new/settings/resources/avatar-df.png)"));

        verticalLayout->addWidget(avatar);

        nome = new QLabel(widget);
        nome->setObjectName(QStringLiteral("nome"));
        nome->setMaximumSize(QSize(400, 16777215));
        QFont font;
        font.setPointSize(20);
        nome->setFont(font);
        nome->setTextFormat(Qt::AutoText);
        nome->setMargin(5);
        nome->setIndent(-1);

        verticalLayout->addWidget(nome);

        eta = new QLabel(widget);
        eta->setObjectName(QStringLiteral("eta"));
        QFont font1;
        font1.setPointSize(16);
        eta->setFont(font1);

        verticalLayout->addWidget(eta);

        username = new QPlainTextEdit(widget);
        username->setObjectName(QStringLiteral("username"));
        username->setMaximumSize(QSize(16777215, 40));
        QFont font2;
        font2.setPointSize(11);
        username->setFont(font2);

        verticalLayout->addWidget(username);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(widget);

        centralWidget = new QWidget(horizontalLayoutWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(600, 0));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Sans Serif"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        centralWidget->setFont(font3);
        centralWidget->setStyleSheet(QStringLiteral(""));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 0, 600, 400));
        calendarWidget->setMinimumSize(QSize(600, 400));
        calendarWidget->setMaximumSize(QSize(640, 16777215));
        calendarWidget->setStyleSheet(QLatin1String("color: rgb(67, 72, 88);\n"
"background-color: rgb(255, 255, 255);"));
        calendarWidget->setGridVisible(true);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::LongDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        progressoMovim = new CircularProgress(centralWidget);
        progressoMovim->setObjectName(QStringLiteral("progressoMovim"));
        progressoMovim->setGeometry(QRect(10, 470, 191, 191));
        progressoSonno = new CircularProgress(centralWidget);
        progressoSonno->setObjectName(QStringLiteral("progressoSonno"));
        progressoSonno->setGeometry(QRect(220, 470, 191, 191));
        progressoMese = new CircularProgress(centralWidget);
        progressoMese->setObjectName(QStringLiteral("progressoMese"));
        progressoMese->setGeometry(QRect(420, 470, 191, 191));
        mesePrec = new QPushButton(centralWidget);
        mesePrec->setObjectName(QStringLiteral("mesePrec"));
        mesePrec->setGeometry(QRect(10, 410, 191, 41));
        meseSucc = new QPushButton(centralWidget);
        meseSucc->setObjectName(QStringLiteral("meseSucc"));
        meseSucc->setGeometry(QRect(410, 410, 191, 41));
        progressoMovim->raise();
        progressoSonno->raise();
        progressoMese->raise();
        mesePrec->raise();
        meseSucc->raise();
        calendarWidget->raise();

        horizontalLayout->addWidget(centralWidget);

        MainWindow->setCentralWidget(horizontalLayoutWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        settings->setText(QString());
        avatar->setText(QString());
        nome->setText(QApplication::translate("MainWindow", "Riccardo", 0));
        eta->setText(QApplication::translate("MainWindow", "20 ANNI", 0));
        mesePrec->setText(QApplication::translate("MainWindow", "MESE PRECEDENTE", 0));
        meseSucc->setText(QApplication::translate("MainWindow", "MESE SUCCESSIVO", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
