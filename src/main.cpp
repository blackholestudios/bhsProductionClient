#include "widget.h"
#include "unass.h"
#include <QStyleFactory>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    a.setStyle(QStyleFactory::create("Fusion"));
    w.show();
    return a.exec();
}
