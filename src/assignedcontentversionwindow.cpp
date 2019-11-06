#include "assignedcontentversionwindow.h"

assignedContentVersionWindow::assignedContentVersionWindow()
{
    version->setFont(font);
    goWip->setFont(font);
    unAssign->setFont(font);
    version->setFixedSize(250,75);
    goWip->setFixedSize(250,75);
    unAssign->setFixedSize(250,75);
    buttons->addWidget(version);
    buttons->addWidget(goWip);
    buttons->addWidget(unAssign);
    buttons->addStretch();
    center->addLayout(buttons);


    connect(version,&QPushButton::clicked,this,&assignedContentVersionWindow::versionClicked);
    connect(goWip,&QPushButton::clicked,this,&assignedContentVersionWindow::goWipClicked);
    connect(unAssign,&QPushButton::clicked,this,&assignedContentVersionWindow::unAssignClicked);


}

void assignedContentVersionWindow::versionClicked(){
    qDebug()<<"versionClicked\n";
}

void assignedContentVersionWindow::goWipClicked(){
    qDebug()<<"goWipClicked\n";
}

void assignedContentVersionWindow::unAssignClicked(){
    qDebug()<<"unAssignClicked\n";
}
