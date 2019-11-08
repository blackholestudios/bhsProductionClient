#ifndef CONTENTCHOOSER_H
#define CONTENTCHOOSER_H

#include <QWidget>
#include <QObject>
#include "assignedcontentversionwindow.h"
#include "unassignedcontentversionwindow.h"
#include "wipcontentversionwindow.h"
#include <QStackedLayout>

class contentChooser : public QWidget
{
    Q_OBJECT
public:
    contentChooser();
    ContentVersionWindow *assWindow= new assignedContentVersionWindow(this);
    ContentVersionWindow *unassWindow= new unassignedcontentversionwindow(this);
    ContentVersionWindow *wipWindow= new wipContentVersionWindow();
    QStackedLayout *layout= new QStackedLayout();
    int tim=0;

public slots:
    void setWindow(int index);


};

#endif // CONTENTCHOOSER_H
