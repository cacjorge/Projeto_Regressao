#include <QtGui/QApplication>
#include "regressao.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Regressao w;
    w.show();
    return a.exec();
}
