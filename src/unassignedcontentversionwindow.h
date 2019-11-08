#ifndef UNASSIGNEDCONTENTVERSIONWINDOW_H
#define UNASSIGNEDCONTENTVERSIONWINDOW_H
#include "contentversionwindow.h"


class unassignedcontentversionwindow : public ContentVersionWindow
{

public:
    unassignedcontentversionwindow(QWidget *p);
    QWidget *parent;
    QPushButton *assToMe = new QPushButton("Assign To Me");

private:


public slots:
    void assToMeClicked();

signals:
    void k();
};

#endif // UNASSIGNEDCONTENTVERSIONWINDOW_H
