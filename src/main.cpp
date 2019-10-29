<<<<<<< HEAD
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
=======
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
>>>>>>> 524319361e136399f4941e2fd6fbabab3aac11a2
