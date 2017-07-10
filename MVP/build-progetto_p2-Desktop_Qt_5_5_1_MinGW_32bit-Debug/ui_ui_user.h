/********************************************************************************
** Form generated from reading UI file 'ui_user.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_USER_H
#define UI_UI_USER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "GUI/circularprogress.h"

QT_BEGIN_NAMESPACE

class Ui_UiUser
{
public:
    QWidget *container;
    QWidget *left_menu;
    QPushButton *settings;
    QLabel *avatar;
    QLabel *username;
    QLabel *eta;
    QLabel *eta_l;
    QPushButton *logout;
    QLabel *sesso;
    QLabel *sesso_l;
    QPushButton *aggiungi_dati;
    QWidget *top_header;
    QVBoxLayout *verticalLayout;
    QLabel *nome_app;
    QWidget *content;
    QWidget *right_progress;
    CircularProgress *progressoMese;
    CircularProgress *progressoSonno;
    CircularProgress *progressoMovim;
    QLabel *calendario_titolo_2;
    QLabel *calendario_titolo_3;
    QLabel *calendario_titolo_4;
    QLabel *amici_t;
    QLabel *no_data_img;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *amici_list;
    QWidget *right_ui;
    QWidget *right_calendar;
    QCalendarWidget *calendarWidget;
    QLabel *mese_calendario;
    QLabel *mese_calendario_giorno;
    QPushButton *elimina_giorno;
    QLabel *top_title;
    QWidget *content2;
    QWidget *right_settings;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QLineEdit *nome;
    QGroupBox *groupBox_2;
    QLineEdit *cognome;
    QGroupBox *groupBox_3;
    QLineEdit *password;
    QGroupBox *groupBox_4;
    QDateEdit *datanascita;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget;
    QHBoxLayout *scelta_sesso;
    QRadioButton *uomo;
    QRadioButton *donna;
    QPushButton *saveUser;
    QPushButton *elimina_utente;
    QGroupBox *tipo_utente_padre;
    QWidget *orizz_2;
    QHBoxLayout *tipo_utente;
    QRadioButton *bambino;
    QRadioButton *adolescente;
    QRadioButton *adulto;
    QLabel *impostazioni;

    void setupUi(QMainWindow *UiUser)
    {
        if (UiUser->objectName().isEmpty())
            UiUser->setObjectName(QStringLiteral("UiUser"));
        UiUser->resize(1200, 900);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(UiUser->sizePolicy().hasHeightForWidth());
        UiUser->setSizePolicy(sizePolicy);
        UiUser->setMinimumSize(QSize(1200, 900));
        UiUser->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/settings/resources/life_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        UiUser->setWindowIcon(icon);
        UiUser->setAutoFillBackground(false);
        UiUser->setStyleSheet(QLatin1String("background-color: rgb(236, 242, 246);\n"
"border-top-color: rgb(53, 64, 82);\n"
";"));
        container = new QWidget(UiUser);
        container->setObjectName(QStringLiteral("container"));
        sizePolicy.setHeightForWidth(container->sizePolicy().hasHeightForWidth());
        container->setSizePolicy(sizePolicy);
        left_menu = new QWidget(container);
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
        settings->setCursor(QCursor(Qt::PointingHandCursor));
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
        username = new QLabel(left_menu);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(10, 250, 241, 51));
        sizePolicy2.setHeightForWidth(username->sizePolicy().hasHeightForWidth());
        username->setSizePolicy(sizePolicy2);
        username->setMinimumSize(QSize(241, 35));
        username->setMaximumSize(QSize(400, 16777215));
        QFont font;
        font.setPointSize(14);
        username->setFont(font);
        username->setTextFormat(Qt::AutoText);
        username->setScaledContents(true);
        username->setAlignment(Qt::AlignCenter);
        username->setMargin(5);
        username->setIndent(-1);
        eta = new QLabel(left_menu);
        eta->setObjectName(QStringLiteral("eta"));
        eta->setGeometry(QRect(60, 320, 40, 25));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        eta->setFont(font1);
        eta->setAlignment(Qt::AlignCenter);
        eta_l = new QLabel(left_menu);
        eta_l->setObjectName(QStringLiteral("eta_l"));
        eta_l->setGeometry(QRect(60, 350, 40, 25));
        eta_l->setFont(font1);
        eta_l->setAlignment(Qt::AlignCenter);
        logout = new QPushButton(left_menu);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(210, 15, 35, 39));
        sizePolicy2.setHeightForWidth(logout->sizePolicy().hasHeightForWidth());
        logout->setSizePolicy(sizePolicy2);
        logout->setMinimumSize(QSize(0, 30));
        logout->setMaximumSize(QSize(40, 39));
        logout->setCursor(QCursor(Qt::PointingHandCursor));
        logout->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/settings/resources/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout->setIcon(icon2);
        logout->setIconSize(QSize(41, 39));
        logout->setFlat(true);
        sesso = new QLabel(left_menu);
        sesso->setObjectName(QStringLiteral("sesso"));
        sesso->setGeometry(QRect(150, 320, 81, 25));
        sesso->setFont(font1);
        sesso->setAlignment(Qt::AlignCenter);
        sesso_l = new QLabel(left_menu);
        sesso_l->setObjectName(QStringLiteral("sesso_l"));
        sesso_l->setGeometry(QRect(150, 350, 81, 25));
        sesso_l->setFont(font1);
        sesso_l->setAlignment(Qt::AlignCenter);
        aggiungi_dati = new QPushButton(left_menu);
        aggiungi_dati->setObjectName(QStringLiteral("aggiungi_dati"));
        aggiungi_dati->setGeometry(QRect(10, 420, 241, 70));
        QFont font2;
        font2.setPointSize(9);
        aggiungi_dati->setFont(font2);
        aggiungi_dati->setCursor(QCursor(Qt::PointingHandCursor));
        aggiungi_dati->setStyleSheet(QLatin1String("border-width: 1px;\n"
"   border-style: solid;\n"
"   border-radius: 30px;\n"
"   border-color: white;\n"
"   background: white;\n"
"   padding-left: 5px;\n"
"   color: rgb(53,64,82);\n"
"   "));
        top_header = new QWidget(container);
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
        nome_app = new QLabel(top_header);
        nome_app->setObjectName(QStringLiteral("nome_app"));
        nome_app->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(nome_app->sizePolicy().hasHeightForWidth());
        nome_app->setSizePolicy(sizePolicy4);
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        nome_app->setFont(font3);
        nome_app->setStyleSheet(QLatin1String("color: rgb(25, 173, 250);\n"
"border: none;\n"
""));

        verticalLayout->addWidget(nome_app);

        content = new QWidget(container);
        content->setObjectName(QStringLiteral("content"));
        content->setGeometry(QRect(260, 75, 1021, 1181));
        content->setMinimumSize(QSize(100, 100));
        content->setMaximumSize(QSize(16777215, 16777215));
        right_progress = new QWidget(content);
        right_progress->setObjectName(QStringLiteral("right_progress"));
        right_progress->setGeometry(QRect(40, 562, 601, 241));
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
        calendario_titolo_2->setFont(font1);
        calendario_titolo_2->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        calendario_titolo_3 = new QLabel(right_progress);
        calendario_titolo_3->setObjectName(QStringLiteral("calendario_titolo_3"));
        calendario_titolo_3->setGeometry(QRect(210, 10, 131, 41));
        calendario_titolo_3->setFont(font1);
        calendario_titolo_3->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        calendario_titolo_4 = new QLabel(right_progress);
        calendario_titolo_4->setObjectName(QStringLiteral("calendario_titolo_4"));
        calendario_titolo_4->setGeometry(QRect(410, 10, 201, 41));
        calendario_titolo_4->setFont(font1);
        calendario_titolo_4->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        amici_t = new QLabel(content);
        amici_t->setObjectName(QStringLiteral("amici_t"));
        amici_t->setGeometry(QRect(660, 0, 221, 41));
        amici_t->setFont(font);
        amici_t->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        no_data_img = new QLabel(content);
        no_data_img->setObjectName(QStringLiteral("no_data_img"));
        no_data_img->setGeometry(QRect(30, 4, 901, 781));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(no_data_img->sizePolicy().hasHeightForWidth());
        no_data_img->setSizePolicy(sizePolicy5);
        no_data_img->setMinimumSize(QSize(901, 780));
        no_data_img->setFont(font2);
        verticalLayoutWidget_2 = new QWidget(content);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(660, 40, 911, 782));
        amici_list = new QVBoxLayout(verticalLayoutWidget_2);
        amici_list->setSpacing(5);
        amici_list->setContentsMargins(11, 11, 11, 11);
        amici_list->setObjectName(QStringLiteral("amici_list"));
        amici_list->setSizeConstraint(QLayout::SetMinAndMaxSize);
        amici_list->setContentsMargins(5, 1, 5, 1);
        right_ui = new QWidget(content);
        right_ui->setObjectName(QStringLiteral("right_ui"));
        right_ui->setGeometry(QRect(40, 36, 601, 791));
        right_calendar = new QWidget(right_ui);
        right_calendar->setObjectName(QStringLiteral("right_calendar"));
        right_calendar->setGeometry(QRect(0, 0, 600, 501));
        right_calendar->setMinimumSize(QSize(600, 0));
        QFont font4;
        font4.setFamily(QStringLiteral("MS Sans Serif"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        right_calendar->setFont(font4);
        right_calendar->setAutoFillBackground(false);
        right_calendar->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        calendarWidget = new QCalendarWidget(right_calendar);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 44, 600, 400));
        calendarWidget->setMinimumSize(QSize(600, 400));
        calendarWidget->setMaximumSize(QSize(640, 16777215));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        calendarWidget->setFont(font5);
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QLatin1String("background-color: rgb(53, 64, 82);\n"
"   color: white;"));
        calendarWidget->setGridVisible(true);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::LongDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(false);
        calendarWidget->setDateEditEnabled(true);
        mese_calendario = new QLabel(right_calendar);
        mese_calendario->setObjectName(QStringLiteral("mese_calendario"));
        mese_calendario->setGeometry(QRect(170, 0, 221, 41));
        mese_calendario->setFont(font5);
        mese_calendario->setStyleSheet(QStringLiteral("color:rgb(53, 64, 82);"));
        mese_calendario->setAlignment(Qt::AlignCenter);
        mese_calendario_giorno = new QLabel(right_calendar);
        mese_calendario_giorno->setObjectName(QStringLiteral("mese_calendario_giorno"));
        mese_calendario_giorno->setGeometry(QRect(200, 450, 361, 41));
        mese_calendario_giorno->setFont(font5);
        mese_calendario_giorno->setStyleSheet(QStringLiteral("color:rgb(53, 64, 82);"));
        mese_calendario_giorno->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        elimina_giorno = new QPushButton(right_calendar);
        elimina_giorno->setObjectName(QStringLiteral("elimina_giorno"));
        elimina_giorno->setGeometry(QRect(20, 450, 44, 40));
        elimina_giorno->setCursor(QCursor(Qt::PointingHandCursor));
        elimina_giorno->setAutoFillBackground(false);
        elimina_giorno->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"   border:2px solid rgb(102,119,129);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/settings/resources/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        elimina_giorno->setIcon(icon3);
        elimina_giorno->setIconSize(QSize(36, 36));
        elimina_giorno->setCheckable(false);
        elimina_giorno->setFlat(true);
        top_title = new QLabel(content);
        top_title->setObjectName(QStringLiteral("top_title"));
        top_title->setGeometry(QRect(40, 0, 171, 31));
        top_title->setFont(font);
        top_title->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        amici_t->raise();
        verticalLayoutWidget_2->raise();
        right_ui->raise();
        right_progress->raise();
        top_title->raise();
        no_data_img->raise();
        content2 = new QWidget(container);
        content2->setObjectName(QStringLiteral("content2"));
        content2->setGeometry(QRect(300, 78, 601, 671));
        content2->setMinimumSize(QSize(100, 100));
        right_settings = new QWidget(content2);
        right_settings->setObjectName(QStringLiteral("right_settings"));
        right_settings->setEnabled(true);
        right_settings->setGeometry(QRect(0, 45, 600, 641));
        right_settings->setMinimumSize(QSize(600, 450));
        right_settings->setFont(font4);
        right_settings->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255); "));
        verticalLayoutWidget = new QWidget(right_settings);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 571, 541));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        nome = new QLineEdit(groupBox);
        nome->setObjectName(QStringLiteral("nome"));
        nome->setGeometry(QRect(5, 30, 560, 30));

        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        cognome = new QLineEdit(groupBox_2);
        cognome->setObjectName(QStringLiteral("cognome"));
        cognome->setGeometry(QRect(5, 30, 560, 30));

        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(verticalLayoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        password = new QLineEdit(groupBox_3);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(5, 30, 560, 30));

        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(verticalLayoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        datanascita = new QDateEdit(groupBox_4);
        datanascita->setObjectName(QStringLiteral("datanascita"));
        datanascita->setGeometry(QRect(5, 30, 560, 30));
        datanascita->setDate(QDate(1990, 1, 1));

        verticalLayout_2->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(verticalLayoutWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        layoutWidget = new QWidget(groupBox_5);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(18, 20, 531, 57));
        scelta_sesso = new QHBoxLayout(layoutWidget);
        scelta_sesso->setSpacing(0);
        scelta_sesso->setContentsMargins(11, 11, 11, 11);
        scelta_sesso->setObjectName(QStringLiteral("scelta_sesso"));
        scelta_sesso->setContentsMargins(8, 0, 0, 0);
        uomo = new QRadioButton(layoutWidget);
        uomo->setObjectName(QStringLiteral("uomo"));
        uomo->setMaximumSize(QSize(16777215, 30));

        scelta_sesso->addWidget(uomo);

        donna = new QRadioButton(layoutWidget);
        donna->setObjectName(QStringLiteral("donna"));
        donna->setMaximumSize(QSize(16777215, 30));

        scelta_sesso->addWidget(donna);


        verticalLayout_2->addWidget(groupBox_5);

        saveUser = new QPushButton(verticalLayoutWidget);
        saveUser->setObjectName(QStringLiteral("saveUser"));
        sizePolicy5.setHeightForWidth(saveUser->sizePolicy().hasHeightForWidth());
        saveUser->setSizePolicy(sizePolicy5);
        saveUser->setMinimumSize(QSize(30, 0));
        saveUser->setMaximumSize(QSize(16777215, 50));
        saveUser->setCursor(QCursor(Qt::PointingHandCursor));
        saveUser->setStyleSheet(QLatin1String("border-width: 5px;\n"
"border-style: solid;\n"
"border-radius: 5px;\n"
"border-color: rgb(53,64,82);\n"
"background: rgb(53,64,82);\n"
"color: white;\n"
""));

        verticalLayout_2->addWidget(saveUser);

        elimina_utente = new QPushButton(verticalLayoutWidget);
        elimina_utente->setObjectName(QStringLiteral("elimina_utente"));
        elimina_utente->setCursor(QCursor(Qt::PointingHandCursor));
        elimina_utente->setAutoFillBackground(false);
        elimina_utente->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"border:2px solid rgb(102,119,129);"));
        elimina_utente->setIcon(icon3);
        elimina_utente->setIconSize(QSize(36, 36));
        elimina_utente->setCheckable(false);
        elimina_utente->setFlat(true);

        verticalLayout_2->addWidget(elimina_utente);

        tipo_utente_padre = new QGroupBox(right_settings);
        tipo_utente_padre->setObjectName(QStringLiteral("tipo_utente_padre"));
        tipo_utente_padre->setGeometry(QRect(10, 560, 570, 55));
        tipo_utente_padre->setStyleSheet(QLatin1String("background:white;\n"
"color:black;"));
        orizz_2 = new QWidget(tipo_utente_padre);
        orizz_2->setObjectName(QStringLiteral("orizz_2"));
        orizz_2->setGeometry(QRect(10, 29, 551, 21));
        tipo_utente = new QHBoxLayout(orizz_2);
        tipo_utente->setSpacing(0);
        tipo_utente->setContentsMargins(11, 11, 11, 11);
        tipo_utente->setObjectName(QStringLiteral("tipo_utente"));
        tipo_utente->setContentsMargins(6, 0, 6, 0);
        bambino = new QRadioButton(orizz_2);
        bambino->setObjectName(QStringLiteral("bambino"));

        tipo_utente->addWidget(bambino);

        adolescente = new QRadioButton(orizz_2);
        adolescente->setObjectName(QStringLiteral("adolescente"));

        tipo_utente->addWidget(adolescente);

        adulto = new QRadioButton(orizz_2);
        adulto->setObjectName(QStringLiteral("adulto"));

        tipo_utente->addWidget(adulto);

        impostazioni = new QLabel(content2);
        impostazioni->setObjectName(QStringLiteral("impostazioni"));
        impostazioni->setGeometry(QRect(0, 5, 171, 31));
        impostazioni->setFont(font);
        impostazioni->setStyleSheet(QStringLiteral("color: rgb(68, 60, 75);"));
        UiUser->setCentralWidget(container);
        left_menu->raise();
        top_header->raise();
        content2->raise();
        content->raise();

        retranslateUi(UiUser);

        QMetaObject::connectSlotsByName(UiUser);
    } // setupUi

    void retranslateUi(QMainWindow *UiUser)
    {
        UiUser->setWindowTitle(QApplication::translate("UiUser", "LIFE-FIT", 0));
        settings->setText(QString());
        avatar->setText(QString());
        username->setText(QApplication::translate("UiUser", "RICCARDO GIORATO", 0));
        eta->setText(QApplication::translate("UiUser", "20", 0));
        eta_l->setText(QApplication::translate("UiUser", "ETA", 0));
        logout->setText(QString());
        sesso->setText(QApplication::translate("UiUser", "UOMO", 0));
        sesso_l->setText(QApplication::translate("UiUser", "SESSO", 0));
        aggiungi_dati->setText(QApplication::translate("UiUser", "Aggiungi nuovi dati ", 0));
        nome_app->setText(QApplication::translate("UiUser", "LIFE-FIT", 0));
        calendario_titolo_2->setText(QApplication::translate("UiUser", "Passi", 0));
        calendario_titolo_3->setText(QApplication::translate("UiUser", "Sonno", 0));
        calendario_titolo_4->setText(QApplication::translate("UiUser", "Traguardo mese", 0));
        amici_t->setText(QApplication::translate("UiUser", "Classifica Amici", 0));
        mese_calendario->setText(QApplication::translate("UiUser", "Mese", 0));
        mese_calendario_giorno->setText(QApplication::translate("UiUser", "Mese", 0));
        elimina_giorno->setText(QString());
        top_title->setText(QApplication::translate("UiUser", "Calendario", 0));
        groupBox->setTitle(QApplication::translate("UiUser", "cambia nome", 0));
        groupBox_2->setTitle(QApplication::translate("UiUser", "cambia cognome", 0));
        groupBox_3->setTitle(QApplication::translate("UiUser", "cambia password", 0));
        groupBox_4->setTitle(QApplication::translate("UiUser", "cambia data di nascita", 0));
        datanascita->setDisplayFormat(QApplication::translate("UiUser", "dd/MM/yyyy", 0));
        groupBox_5->setTitle(QApplication::translate("UiUser", "cambia sesso", 0));
        uomo->setText(QApplication::translate("UiUser", "UO&MO", 0));
        donna->setText(QApplication::translate("UiUser", "DONNA", 0));
        saveUser->setText(QApplication::translate("UiUser", "Salva le modifiche Utente", 0));
        elimina_utente->setText(QApplication::translate("UiUser", "ELIMINA IL TUO ACCOUNT (compresi i dati salvati)", 0));
        tipo_utente_padre->setTitle(QApplication::translate("UiUser", "Tipologia utente", 0));
        bambino->setText(QApplication::translate("UiUser", "Bambino", 0));
        adolescente->setText(QApplication::translate("UiUser", "Adolescente", 0));
        adulto->setText(QApplication::translate("UiUser", "Adulto", 0));
        impostazioni->setText(QApplication::translate("UiUser", "Impostazioni", 0));
    } // retranslateUi

};

namespace Ui {
    class UiUser: public Ui_UiUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_USER_H
