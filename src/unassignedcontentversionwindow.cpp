#include "unassignedcontentversionwindow.h"

unassignedcontentversionwindow::unassignedcontentversionwindow(QWidget *p)
{
    parent=p;
//------------------------Buttons-----------------------------------------------------
    setButtonStyle(assToMe);
    buttons->addWidget(assToMe);
    buttons->addStretch();
    center->addLayout(buttons);

    connect(assToMe,&QPushButton::clicked,this,&unassignedcontentversionwindow::assToMeClicked);
}

void unassignedcontentversionwindow::assToMeClicked(){
    emit changeWindow(0);
}
