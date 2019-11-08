#include "wipcontentversionwindow.h"

wipContentVersionWindow::wipContentVersionWindow(QWidget *p)
{
    parent=p;
    setButtonStyle(commit);
    setButtonStyle(open);
    setButtonStyle(unAssign);

    buttons->addWidget(commit);
    buttons->addWidget(open);
    buttons->addWidget(unAssign);
    buttons->addStretch();
    center->addLayout(buttons);

    connect(commit,&QPushButton::clicked,this,&wipContentVersionWindow::commitClicked);
    connect(open,&QPushButton::clicked,this,&wipContentVersionWindow::openClicked);
    connect(unAssign,&QPushButton::clicked,this,&wipContentVersionWindow::unAssignClicked);


}

void wipContentVersionWindow::commitClicked(){
    qDebug()<<"commitClicked\n";
}

void wipContentVersionWindow::openClicked(){
    qDebug()<<"openClicked\n";
}

void wipContentVersionWindow::unAssignClicked(){
    qDebug()<<"unAssignClicked\n";
    content->contentStageNum=1;
    emit changeWindow(content);
}

