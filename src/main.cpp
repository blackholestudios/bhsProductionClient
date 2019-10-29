#include "unassignedcontentversionwindow.h"
#include <QStyleFactory>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    unassignedcontentversionwindow w;
    a.setStyle(QStyleFactory::create("Fusion"));
    w.show();
    return a.exec();
}
