#include "unassignedcontentversionwindow.h"

unassignedcontentversionwindow::unassignedcontentversionwindow()
{
//------------------------Buttons-----------------------------------------------------
    assToMe->setFont(font);
    assToMe->setFixedSize(400,100);
    buttons->addWidget(assToMe);
    buttons->addStretch();
    center->addLayout(buttons);

    connect(assToMe,&QPushButton::clicked,this,&unassignedcontentversionwindow::assToMeClicked);
}

void unassignedcontentversionwindow::assToMeClicked(){
    this->close();
    assignedWin.show();
}
