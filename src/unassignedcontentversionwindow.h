#ifndef UNASSIGNEDCONTENTVERSIONWINDOW_H
#define UNASSIGNEDCONTENTVERSIONWINDOW_H
#include "contentversionwindow.h"
#include "assignedcontentversionwindow.h"


class unassignedcontentversionwindow : public ContentVersionWindow
{
public:
    unassignedcontentversionwindow();
private:
    QPushButton *assToMe = new QPushButton("Assign To Me");
    assignedContentVersionWindow assignedWin;


private slots:
    void assToMeClicked();
};

#endif // UNASSIGNEDCONTENTVERSIONWINDOW_H
