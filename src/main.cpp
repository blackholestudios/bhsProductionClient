#include "assignedcontentversionwindow.h"
#include <QStyleFactory>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    assignedContentVersionWindow w;
    a.setStyle(QStyleFactory::create("Fusion"));
    w.show();
    return a.exec();
}
