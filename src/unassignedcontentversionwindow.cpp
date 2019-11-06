#include "unassignedcontentversionwindow.h"

unassignedcontentversionwindow::unassignedcontentversionwindow()
{
//------------------------Buttons-----------------------------------------------------
    setButtonStyle(assToMe);
    buttons->addWidget(assToMe);
    buttons->addStretch();
    center->addLayout(buttons);

    connect(assToMe,&QPushButton::clicked,this,&unassignedcontentversionwindow::assToMeClicked);
}

void unassignedcontentversionwindow::assToMeClicked(){
    close();
}
