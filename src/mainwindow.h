#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QStackedLayout>
#include "assignedcontentversionwindow.h"
#include "unassignedcontentversionwindow.h"
#include "wipcontentversionwindow.h"
#include "contentchooser.h"
#include <stdlib.h>
class mainWindow: public QWidget
{

public:
    mainWindow();
    contentChooser *contentWindow = new contentChooser();
    ContentVersionWindow *assWindow= new assignedContentVersionWindow(this);
    ContentVersionWindow *unassWindow= new unassignedcontentversionwindow(this);
    ContentVersionWindow *wipWindow= new wipContentVersionWindow(this);
    QStackedLayout *layout= new QStackedLayout();
    std::vector <ContentVersionWindow*> windows{unassWindow,assWindow,wipWindow};
    serverItems *tempCon;

public slots:
    void setWindow(serverItems *c);



};

#endif // MAINWINDOW_H
