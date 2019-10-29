#include "unassignedcontentversionwindow.h"

unassignedcontentversionwindow::unassignedcontentversionwindow()
{
//------------------------Buttons-----------------------------------------------------
    assToMe->setFont(font);
    assToMe->setFixedSize(400,100);
    buttons->addWidget(assToMe);
    buttons->addStretch(1000);
    center->addLayout(buttons);
}
