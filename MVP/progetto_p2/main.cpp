
#include <QApplication>
#include <QStyle>
#include <QDesktopWidget>

#include "loginform.h"

#include "giorno.h"
#include "admin.h"
#include "admin_iofit.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setOrganizationName("giorat");
    a.setOrganizationDomain("www.riccardogiorato.com");
    a.setApplicationName("lifefit");
    a.setQuitOnLastWindowClosed(false);

    LoginForm w;
    //MainWindow w("riccardo");
    w.setWindowTitle("LIFE-FIT LOGIN");

    w.setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            w.size(),
            a.desktop()->availableGeometry()
        )
    );

    //w.setAttribute(Qt::WA_QuitOnClose);
    w.show();


    QPalette pal = a.palette();
    pal.setColor(QPalette::Window, Qt::white);
    a.setPalette(pal);

    return a.exec();

}
