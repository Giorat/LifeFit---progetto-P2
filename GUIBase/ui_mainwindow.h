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
    QPushButton *logout;
    QWidget *top_header;
    QVBoxLayout *verticalLayout;
    QLabel *app_name;
    QWidget *content;
    QWidget *right_progress;
    CircularProgress *progressoMese;
    CircularProgress *progressoSonno;
    CircularProgress *progressoMovim;
    QLabel *calendario_titolo_2;
    QLabel *calendario_titolo_3;
    QLabel *calendario_titolo_4;
    QWidget *right_calendar;
    QCalendarWidget *calendarWidget;
    QLabel *calendario_titolo;
    QLabel *ricc_g;
    QLabel *user2;
    QLabel *amici_t;
    QWidget *content2;
    QWidget *right_settings;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *impostazioni;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 1207);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1200, 750));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/settings/resources/life_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(236, 242, 246);\n"
"border-top-color: rgb(53, 64, 82);\n"
";"));
        horizontalLayoutWidget = new QWidget(MainWindow);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        sizePolicy.setHeightForWidth(horizontalLayoutWidget->sizePolicy().hasHeightForWidth());
        horizontalLayoutWidget->setSizePolicy(sizePolicy);
        left_menu = new QWidget(horizontalLayoutWidget);
        left_menu->setObjectName(QStringLiteral("left_menu"));
        left_menu->setGeometry(QRect(0, 0, 260, 167772));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(left_menu->sizePolicy().hasHeightForWidth());
        left_menu->setSizePolicy(sizePolicy1);
        left_menu->setMinimumSize(QSize(0, 0));
        left_menu->setMaximumSize(QSize(400, 16777215));
        left_menu->setSizeIncrement(QSize(0, 0));
        left_menu->setBaseSize(QSize(0, 0));
        left_menu->setStyleSheet(QLatin1String("background-color: rgb(53, 64, 82);\n"
"color: rgb(163, 180, 200);"));
        settings = new QPushButton(left_menu);
        settings->setObjectName(QStringLiteral("settings"));
        settings->setGeometry(QRect(10, 15, 40, 39));
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
        avatar->setGeometry(QRect(68, 125, 125, 125));
        avatar->setMinimumSize(QSize(125, 125));
        avatar->setMaximumSize(QSize(125, 125));
        avatar->setSizeIncrement(QSize(0, 0));
        avatar->setStyleSheet(QStringLiteral("background-image: url(:/new/settings/resources/avatar-df.png)"));
        nome = new QLabel(left_menu);
        nome->setObjectName(QStringLiteral("nome"));
        nome->setGeometry(QRect(10, 250, 241, 35));
        sizePolicy2.setHeightForWidth(nome->sizePolicy().hasHeightForWidth());
        nome->setSizePolicy(sizePolicy2);
        nome->setMinimumSize(QSize(241, 35));
        nome->setMaximumSize(QSize(400, 16777215));
        QFont font;
        font.setPointSize(16);
        nome->setFont(font);
        nome->setTextFormat(Qt::AutoText);
        nome->setScaledContents(true);
        nome->setAlignment(Qt::AlignCenter);
        nome->setMargin(5);
        nome->setIndent(-1);
        eta = new QLabel(left_menu);
        eta->setObjectName(QStringLiteral("eta"));
        eta->setGeometry(QRect(10, 300, 40, 25));
        QFont font1;
        font1.setPointSize(14);
        eta->setFont(font1);
        eta->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(left_menu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 330, 40, 25));
        QFont font2;
        font2.setPointSize(10);
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(left_menu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 370, 241, 41));
        QFont font3;
        font3.setPointSize(9);
        label_5->setFont(font3);
        logout = new QPushButton(left_menu);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(210, 15, 35, 39));
        sizePolicy2.setHeightForWidth(logout->sizePolicy().hasHeightForWidth());
        logout->setSizePolicy(sizePolicy2);
        logout->setMinimumSize(QSize(0, 30));
        logout->setMaximumSize(QSize(40, 39));
        logout->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/settings/resources/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout->setIcon(icon2);
        logout->setIconSize(QSize(41, 39));
        logout->setFlat(true);
        settings->raise();
        avatar->raise();
        nome->raise();
        eta->raise();
        label_4->raise();
        label_5->raise();
        logout->raise();
        top_header = new QWidget(horizontalLayoutWidget);
        top_header->setObjectName(QStringLiteral("top_header"));
        top_header->setGeometry(QRect(260, 0, 16777215, 75));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(top_header->sizePolicy().hasHeightForWidth());
        top_header->setSizePolicy(sizePolicy3);
        top_header->setMinimumSize(QSize(0, 0));
        top_header->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-top: 3px solid  rgb(53, 64, 82);\n"
"border-bottom: 3px solid  rgb(214, 220, 224);"));
        verticalLayout = new QVBoxLayout(top_header);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(46, -1, -1, -1);
        app_name = new QLabel(top_header);
        app_name->setObjectName(QStringLiteral("app_name"));
        app_name->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(app_name->sizePolicy().hasHeightForWidth());
        app_name->setSizePolicy(sizePolicy4);
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        app_name->setFont(font4);
        app_name->setStyleSheet(QLatin1String("color: rgb(25, 173, 250);\n"
"border: none;"));

        verticalLayout->addWidget(app_name);

        content = new QWidget(horizontalLayoutWidget);
        content->setObjectName(QStringLiteral("content"));
        content->setGeometry(QRect(260, 70, 1021, 1181));
        content->setMinimumSize(QSize(100, 100));
        content->setMaximumSize(QSize(16777215, 16777215));
        right_progress = new QWidget(content);
        right_progress->setObjectName(QStringLiteral("right_progress"));
        right_progress->setGeometry(QRect(40, 590, 601, 271));
        progressoMese = new CircularProgress(right_progress);
        progressoMese->setObjectName(QStringLiteral("progressoMese"));
        progressoMese->setGeometry(QRect(408, 50, 191, 191));
        progressoMese->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        progressoSonno = new CircularProgress(right_progress);
        progressoSonno->setObjectName(QStringLiteral("progressoSonno"));
        progressoSonno->setGeometry(QRect(208, 50, 191, 191));
        progressoSonno->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        progressoMovim = new CircularProgress(right_progress);
        progressoMovim->setObjectName(QStringLiteral("progressoMovim"));
        progressoMovim->setGeometry(QRect(10, 50, 191, 191));
        progressoMovim->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255);"));
        calendario_titolo_2 = new QLabel(right_progress);
        calendario_titolo_2->setObjectName(QStringLiteral("calendario_titolo_2"));
        calendario_titolo_2->setGeometry(QRect(20, 10, 131, 41));
        calendario_titolo_2->setFont(font2);
        calendario_titolo_2->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        calendario_titolo_3 = new QLabel(right_progress);
        calendario_titolo_3->setObjectName(QStringLiteral("calendario_titolo_3"));
        calendario_titolo_3->setGeometry(QRect(210, 10, 131, 41));
        calendario_titolo_3->setFont(font2);
        calendario_titolo_3->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        calendario_titolo_4 = new QLabel(right_progress);
        calendario_titolo_4->setObjectName(QStringLiteral("calendario_titolo_4"));
        calendario_titolo_4->setGeometry(QRect(410, 10, 201, 41));
        calendario_titolo_4->setFont(font2);
        calendario_titolo_4->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        right_calendar = new QWidget(content);
        right_calendar->setObjectName(QStringLiteral("right_calendar"));
        right_calendar->setGeometry(QRect(40, 70, 600, 451));
        right_calendar->setMinimumSize(QSize(600, 0));
        QFont font5;
        font5.setFamily(QStringLiteral("MS Sans Serif"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        right_calendar->setFont(font5);
        right_calendar->setAutoFillBackground(false);
        right_calendar->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        calendarWidget = new QCalendarWidget(right_calendar);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 0, 600, 451));
        calendarWidget->setMinimumSize(QSize(600, 400));
        calendarWidget->setMaximumSize(QSize(640, 16777215));
        calendarWidget->setFont(font3);
        calendarWidget->setStyleSheet(QLatin1String("color: rgb(67, 72, 88);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        calendarWidget->setGridVisible(true);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::LongDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        calendarWidget->raise();
        calendario_titolo = new QLabel(content);
        calendario_titolo->setObjectName(QStringLiteral("calendario_titolo"));
        calendario_titolo->setGeometry(QRect(40, 20, 131, 41));
        calendario_titolo->setFont(font1);
        calendario_titolo->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        ricc_g = new QLabel(content);
        ricc_g->setObjectName(QStringLiteral("ricc_g"));
        ricc_g->setGeometry(QRect(650, 70, 331, 51));
        ricc_g->setStyleSheet(QLatin1String("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 20px;\n"
"border-color: rgb(53,64,82);\n"
"background: white;\n"
"padding-left: 10px;"));
        user2 = new QLabel(content);
        user2->setObjectName(QStringLiteral("user2"));
        user2->setGeometry(QRect(650, 130, 201, 51));
        user2->setStyleSheet(QLatin1String("border-width: 1px;\n"
"border-style: solid;\n"
"border-radius: 20px;\n"
"border-color: rgb(53,64,82);\n"
"background: white;\n"
"padding-left: 10px;"));
        amici_t = new QLabel(content);
        amici_t->setObjectName(QStringLiteral("amici_t"));
        amici_t->setGeometry(QRect(660, 20, 221, 41));
        amici_t->setFont(font1);
        amici_t->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        right_progress->raise();
        right_calendar->raise();
        calendario_titolo->raise();
        ricc_g->raise();
        user2->raise();
        amici_t->raise();
        content2 = new QWidget(horizontalLayoutWidget);
        content2->setObjectName(QStringLiteral("content2"));
        content2->setGeometry(QRect(300, 80, 941, 400));
        content2->setMinimumSize(QSize(100, 100));
        right_settings = new QWidget(content2);
        right_settings->setObjectName(QStringLiteral("right_settings"));
        right_settings->setEnabled(true);
        right_settings->setGeometry(QRect(0, 45, 700, 450));
        right_settings->setMinimumSize(QSize(600, 450));
        right_settings->setFont(font5);
        right_settings->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255); "));
        verticalLayoutWidget = new QWidget(right_settings);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 321, 220));
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

        impostazioni = new QLabel(content2);
        impostazioni->setObjectName(QStringLiteral("impostazioni"));
        impostazioni->setGeometry(QRect(0, 5, 171, 31));
        impostazioni->setFont(font1);
        impostazioni->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        MainWindow->setCentralWidget(horizontalLayoutWidget);
        impostazioni->raise();
        content->raise();
        left_menu->raise();
        top_header->raise();
        right_settings->raise();
        content2->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LIFE-FIT", 0));
        settings->setText(QString());
        avatar->setText(QString());
        nome->setText(QApplication::translate("MainWindow", "RICCARDO GIORATO", 0));
        eta->setText(QApplication::translate("MainWindow", "20", 0));
        label_4->setText(QApplication::translate("MainWindow", "ETA", 0));
        label_5->setText(QApplication::translate("MainWindow", "OBBIETTIVO  questa settimana:", 0));
        logout->setText(QString());
        app_name->setText(QApplication::translate("MainWindow", "LIFE-FIT", 0));
        calendario_titolo_2->setText(QApplication::translate("MainWindow", "Passi", 0));
        calendario_titolo_3->setText(QApplication::translate("MainWindow", "Sonno", 0));
        calendario_titolo_4->setText(QApplication::translate("MainWindow", "Progressi complessivi mese", 0));
        calendario_titolo->setText(QApplication::translate("MainWindow", "Calendario", 0));
        ricc_g->setText(QApplication::translate("MainWindow", "Riccardo Giorato 73.580 passi", 0));
        user2->setText(QApplication::translate("MainWindow", "Utente 2 43.580 passi", 0));
        amici_t->setText(QApplication::translate("MainWindow", "Classifica Amici", 0));
        label_3->setText(QApplication::translate("MainWindow", "cambia password", 0));
        label->setText(QApplication::translate("MainWindow", "cambia data di nascita", 0));
        label_2->setText(QApplication::translate("MainWindow", "cambia sesso", 0));
        impostazioni->setText(QApplication::translate("MainWindow", "Impostazioni", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
