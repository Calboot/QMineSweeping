#include "introdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IntroDialog w;
    w.show();
    return a.exec();
}
