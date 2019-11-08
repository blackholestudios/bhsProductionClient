#include "mainwindow.h"
mainWindow::mainWindow()
{
    setLayout(layout);
    layout->addWidget(contentWindow);
    for(int i=0;i< windows.size();i++){
        layout->addWidget(windows.at(i));
    }
    layout->setCurrentIndex(0);

   connect(contentWindow,&contentChooser::showContent,this,QOverload<serverItems *>::of(&mainWindow::setWindow));
   connect(unassWindow,&ContentVersionWindow::changeWindow,this,QOverload<serverItems *>::of(&mainWindow::setWindow));
   connect(assWindow,&ContentVersionWindow::changeWindow,this,QOverload<serverItems *>::of(&mainWindow::setWindow));
   connect(wipWindow,&ContentVersionWindow::changeWindow,this,QOverload<serverItems *>::of(&mainWindow::setWindow));

}


void mainWindow::setWindow(serverItems *c){
    tempCon=c;
    windows.at(tempCon->contentStageNum-1)->content=tempCon;
    windows.at(tempCon->contentStageNum-1)->setContentItems();
    layout->setCurrentIndex(c->contentStageNum);
}

