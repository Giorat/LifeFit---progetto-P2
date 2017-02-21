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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "circularprogress.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QWidget *left_menu;
    QPushButton *settings;
    QLabel *avatar;
    QLabel *nome;
    QLabel *eta;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *right_container;
    QCalendarWidget *calendarWidget;
    CircularProgress *progressoMovim;
    CircularProgress *progressoSonno;
    CircularProgress *progressoMese;
    QWidget *right_settings;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(860, 750);
        MainWindow->setMinimumSize(QSize(800, 750));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/settings/resources/life_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(236, 242, 246);"));
        horizontalLayoutWidget = new QWidget(MainWindow);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalLayoutWidget->sizePolicy().hasHeightForWidth());
        horizontalLayoutWidget->setSizePolicy(sizePolicy);
        left_menu = new QWidget(horizontalLayoutWidget);
        left_menu->setObjectName(QStringLiteral("left_menu"));
        left_menu->setGeometry(QRect(0, 0, 260, 741));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(left_menu->sizePolicy().hasHeightForWidth());
        left_menu->setSizePolicy(sizePolicy1);
        left_menu->setMaximumSize(QSize(400, 16777215));
        left_menu->setStyleSheet(QLatin1String("background-color: rgb(53, 64, 82);\n"
"color: rgb(163, 180, 200);"));
        settings = new QPushButton(left_menu);
        settings->setObjectName(QStringLiteral("settings"));
        settings->setGeometry(QRect(6, 6, 40, 39));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy2);
        settings->setMinimumSize(QSize(0, 30));
        settings->setMaximumSize(QSize(40, 39));
        settings->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/settings/resources/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        settings->setIcon(icon1);
        settings->setIconSize(QSize(41, 39));
        settings->setFlat(true);
        avatar = new QLabel(left_menu);
        avatar->setObjectName(QStringLiteral("avatar"));
        avatar->setGeometry(QRect(68, 50, 125, 125));
        avatar->setMinimumSize(QSize(125, 125));
        avatar->setMaximumSize(QSize(125, 125));
        avatar->setSizeIncrement(QSize(0, 0));
        avatar->setStyleSheet(QStringLiteral("background-image: url(:/new/settings/resources/avatar-df.png)"));
        nome = new QLabel(left_menu);
        nome->setObjectName(QStringLiteral("nome"));
        nome->setGeometry(QRect(10, 180, 241, 35));
        sizePolicy2.setHeightForWidth(nome->sizePolicy().hasHeightForWidth());
        nome->setSizePolicy(sizePolicy2);
        nome->setMinimumSize(QSize(241, 35));
        nome->setMaximumSize(QSize(400, 16777215));
        QFont font;
        font.setPointSize(16);
        nome->setFont(font);
        nome->setTextFormat(Qt::AutoText);
        nome->setAlignment(Qt::AlignCenter);
        nome->setMargin(5);
        nome->setIndent(-1);
        eta = new QLabel(left_menu);
        eta->setObjectName(QStringLiteral("eta"));
        eta->setGeometry(QRect(10, 230, 41, 20));
        eta->setFont(font);
        eta->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(left_menu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 260, 41, 20));
        QFont font1;
        font1.setPointSize(10);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(left_menu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 310, 151, 31));
        label_5->setFont(font1);
        right_container = new QWidget(horizontalLayoutWidget);
        right_container->setObjectName(QStringLiteral("right_container"));
        right_container->setGeometry(QRect(260, 0, 600, 738));
        right_container->setMinimumSize(QSize(600, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Sans Serif"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        right_container->setFont(font2);
        right_container->setAutoFillBackground(false);
        right_container->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        calendarWidget = new QCalendarWidget(right_container);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 0, 600, 451));
        calendarWidget->setMinimumSize(QSize(600, 400));
        calendarWidget->setMaximumSize(QSize(640, 16777215));
        QFont font3;
        font3.setPointSize(9);
        calendarWidget->setFont(font3);
        calendarWidget->setStyleSheet(QLatin1String("color: rgb(67, 72, 88);\n"
"background-color: rgb(255, 255, 255);"));
        calendarWidget->setGridVisible(true);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::LongDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        progressoMovim = new CircularProgress(right_container);
        progressoMovim->setObjectName(QStringLiteral("progressoMovim"));
        progressoMovim->setGeometry(QRect(8, 470, 191, 191));
        progressoSonno = new CircularProgress(right_container);
        progressoSonno->setObjectName(QStringLiteral("progressoSonno"));
        progressoSonno->setGeometry(QRect(208, 470, 191, 191));
        progressoMese = new CircularProgress(right_container);
        progressoMese->setObjectName(QStringLiteral("progressoMese"));
        progressoMese->setGeometry(QRect(408, 470, 191, 191));
        progressoMovim->raise();
        progressoSonno->raise();
        progressoMese->raise();
        calendarWidget->raise();
        right_settings = new QWidget(horizontalLayoutWidget);
        right_settings->setObjectName(QStringLiteral("right_settings"));
        right_settings->setEnabled(true);
        right_settings->setGeometry(QRect(260, 0, 600, 738));
        right_settings->setMinimumSize(QSize(600, 0));
        right_settings->setFont(font2);
        right_settings->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255); "));
        verticalLayoutWidget = new QWidget(right_settings);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 170, 321, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        MainWindow->setCentralWidget(horizontalLayoutWidget);
        right_settings->raise();
        right_container->raise();
        left_menu->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LIFE-FIT", 0));
        settings->setText(QString());
        avatar->setText(QString());
        nome->setText(QApplication::translate("MainWindow", "Riccardo Giorato", 0));
        eta->setText(QApplication::translate("MainWindow", "20", 0));
        label_4->setText(QApplication::translate("MainWindow", "ETA", 0));
        label_5->setText(QApplication::translate("MainWindow", "OBBIETTIVO  questa settimana:", 0));
        label_3->setText(QApplication::translate("MainWindow", "cambia password", 0));
        label->setText(QApplication::translate("MainWindow", "cambia data di nascita", 0));
        label_2->setText(QApplication::translate("MainWindow", "cambia sesso", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
