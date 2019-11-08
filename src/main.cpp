#include "mainwindow.h"
#include "contentinfolistview.h"
#include <QStyleFactory>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //contentInfoListView w;
    mainWindow w;
    a.setStyle(QStyleFactory::create("Fusion"));
    w.show();
    return a.exec();
}
