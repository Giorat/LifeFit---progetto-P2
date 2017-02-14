#include "loginform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setOrganizationName("giorat");
    a.setOrganizationDomain("www.riccardogiorato.com");
    a.setApplicationName("lifefit");


    LoginForm w;
    w.setWindowTitle("LIFE-FIT");
    w.show();

    QPalette pal = a.palette();
    pal.setColor(QPalette::Window, Qt::white);
    a.setPalette(pal);

    return a.exec();

}
