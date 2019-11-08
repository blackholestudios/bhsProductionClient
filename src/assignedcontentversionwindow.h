#ifndef ASSIGNEDCONTENTVERSIONWINDOW_H
#define ASSIGNEDCONTENTVERSIONWINDOW_H
#include "contentversionwindow.h"

class assignedContentVersionWindow : public ContentVersionWindow
{

public:
    assignedContentVersionWindow(QWidget *p);
    QPushButton *version=new QPushButton("Version Page");
    QPushButton *goWip=new QPushButton("Work-In-Progress");
    QPushButton *unAssign=new QPushButton("Unassign Content");
    QWidget *parent;

private slots:
    void versionClicked();
    void goWipClicked();
    void unAssignClicked();

};


#endif // ASSIGNEDCONTENTVERSIONWINDOW_H
