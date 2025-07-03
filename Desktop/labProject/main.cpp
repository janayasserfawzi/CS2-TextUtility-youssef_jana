#include "item.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Item w;
    w.show();
    return a.exec();
}
