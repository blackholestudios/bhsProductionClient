#ifndef UNASSIGNEDCONTENTVERSIONWINDOW_H
#define UNASSIGNEDCONTENTVERSIONWINDOW_H
#include "contentversionwindow.h"


class unassignedcontentversionwindow : public ContentVersionWindow
{

public:
    unassignedcontentversionwindow();
private:
    QPushButton *assToMe = new QPushButton("Assign To Me");


private slots:
    void assToMeClicked();
};

#endif // UNASSIGNEDCONTENTVERSIONWINDOW_H
