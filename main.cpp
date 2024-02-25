#include "Luxembourg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Luxembourg w;
    w.show();
    return a.exec();
}
