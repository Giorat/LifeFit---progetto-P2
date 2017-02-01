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
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *nome;
    QLabel *eta;
    QSpacerItem *verticalSpacer;
    QWidget *centralWidget;
    QCalendarWidget *calendarWidget;
    CircularProgress *progressoMovim;
    CircularProgress *progressoSonno;
    CircularProgress *progressoMese;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(850, 727);
        MainWindow->setMinimumSize(QSize(850, 550));
        MainWindow->setAutoFillBackground(false);
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
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton->setMaximumSize(QSize(400, 16777215));

        verticalLayout->addWidget(pushButton);

        nome = new QLabel(horizontalLayoutWidget);
        nome->setObjectName(QStringLiteral("nome"));
        nome->setMaximumSize(QSize(400, 16777215));
        QFont font;
        font.setPointSize(20);
        nome->setFont(font);
        nome->setTextFormat(Qt::AutoText);
        nome->setMargin(5);
        nome->setIndent(-1);

        verticalLayout->addWidget(nome);

        eta = new QLabel(horizontalLayoutWidget);
        eta->setObjectName(QStringLiteral("eta"));
        QFont font1;
        font1.setPointSize(16);
        eta->setFont(font1);

        verticalLayout->addWidget(eta);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        centralWidget = new QWidget(horizontalLayoutWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(600, 0));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 0, 600, 400));
        calendarWidget->setMinimumSize(QSize(600, 400));
        calendarWidget->setMaximumSize(QSize(640, 16777215));
        calendarWidget->setGridVisible(true);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::LongDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        progressoMovim = new CircularProgress(centralWidget);
        progressoMovim->setObjectName(QStringLiteral("progressoMovim"));
        progressoMovim->setGeometry(QRect(10, 420, 191, 191));
        progressoSonno = new CircularProgress(centralWidget);
        progressoSonno->setObjectName(QStringLiteral("progressoSonno"));
        progressoSonno->setGeometry(QRect(220, 420, 191, 191));
        progressoMese = new CircularProgress(centralWidget);
        progressoMese->setObjectName(QStringLiteral("progressoMese"));
        progressoMese->setGeometry(QRect(420, 420, 191, 191));

        horizontalLayout->addWidget(centralWidget);

        MainWindow->setCentralWidget(horizontalLayoutWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "IMPOSTAZIONI", 0));
        nome->setText(QApplication::translate("MainWindow", "Riccardo", 0));
        eta->setText(QApplication::translate("MainWindow", "20 ANNI", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
