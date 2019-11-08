#include "assignedcontentversionwindow.h"

assignedContentVersionWindow::assignedContentVersionWindow(QWidget *p)
{
    parent=p;

    setButtonStyle(version);
    setButtonStyle(goWip);
    setButtonStyle(unAssign);

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
    content->contentStageNum=3;
    emit changeWindow(content);
    qDebug()<<"goWipClicked\n";
}

void assignedContentVersionWindow::unAssignClicked(){
    content->contentStageNum=1;
    emit changeWindow(content);
    qDebug()<<"unAssignClicked\n";

}
