#ifndef WIPCONTENTVERSIONWINDOW_H
#define WIPCONTENTVERSIONWINDOW_H
#include "contentversionwindow.h"


class wipContentVersionWindow : public ContentVersionWindow
{

public:
    wipContentVersionWindow(QWidget *p);
    QWidget *parent;
    QPushButton *commit=new QPushButton("Commit Content");
    QPushButton *open=new QPushButton("Open");
    QPushButton *unAssign=new QPushButton("Unassign Content");

private slots:
    void commitClicked();
    void openClicked();
    void unAssignClicked();
};

#endif // WIPCONTENTVERSIONWINDOW_H
