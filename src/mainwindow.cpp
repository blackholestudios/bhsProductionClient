#include "mainwindow.h"
mainWindow::mainWindow()
{

    setLayout(layout);
    layout->addWidget(contentWindow);
    for(int i=0;i< windows.size();i++){
        layout->addWidget(windows.at(i));
    }
    layout->setCurrentIndex(0);

    setFixedSize(793,650);

    connect(contentWindow,&contentChooser::showContent,this,QOverload<serverItems *>::of(&mainWindow::setWindow));
    connect(unassWindow,&ContentVersionWindow::changeWindow,this,QOverload<serverItems *>::of(&mainWindow::setWindow));
    connect(assWindow,&ContentVersionWindow::changeWindow,this,QOverload<serverItems *>::of(&mainWindow::setWindow));
    connect(wipWindow,&ContentVersionWindow::changeWindow,this,QOverload<serverItems *>::of(&mainWindow::setWindow));
    connect(commWindow,&ContentVersionWindow::changeWindow,this,QOverload<serverItems *>::of(&mainWindow::setWindow));
}


void mainWindow::setWindow(serverItems *c){
    tempCon=c;

    if(tempCon->contentStageNum ==0 ){
        setFixedSize(793,650);
        layout->setCurrentIndex(0);
    }else{
    setFixedSize(730,1000);
    windows.at(tempCon->contentStageNum-1)->content=tempCon;
    windows.at(tempCon->contentStageNum-1)->setContentItems();
    if(tempCon->contentStageNum-1 ==3 ){
        commWindow->getComments();
    }

    layout->setCurrentIndex(c->contentStageNum);
    }
}

