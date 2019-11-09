#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QStackedLayout>
#include "assignedcontentversionwindow.h"
#include "unassignedcontentversionwindow.h"
#include "wipcontentversionwindow.h"
#include "commentcontentversionwindow.h"
#include "contentchooser.h"
#include <stdlib.h>
#include <QScrollArea>
class mainWindow: public QWidget
{

public:
    mainWindow();
    contentChooser *contentWindow = new contentChooser();
    assignedContentVersionWindow *assWindow= new assignedContentVersionWindow(this);
    unassignedcontentversionwindow *unassWindow= new unassignedcontentversionwindow(this);
    wipContentVersionWindow *wipWindow= new wipContentVersionWindow(this);
    commentContentVersionWindow *commWindow= new commentContentVersionWindow(this);

    std::vector <ContentVersionWindow*> windows{unassWindow,assWindow,wipWindow,commWindow};

    QStackedLayout *layout= new QStackedLayout();

    serverItems *tempCon;
    QScrollArea *scroll=new QScrollArea();

public slots:
    void setWindow(serverItems *c);



};

#endif // MAINWINDOW_H
