#include "contentchooser.h"
contentChooser::contentChooser()
{
    setLayout(layout);
    layout->addWidget(assWindow);
    layout->addWidget(unassWindow);
    layout->addWidget(wipWindow);
    layout->setCurrentIndex(1);


   connect(unassWindow,&ContentVersionWindow::changeWindow,this,&contentChooser::setWindow);
   connect(assWindow,&ContentVersionWindow::changeWindow,this,&contentChooser::setWindow);
   connect(wipWindow,&ContentVersionWindow::changeWindow,this,&contentChooser::setWindow);


}

void contentChooser::setWindow(int index){
    layout->setCurrentIndex(index);
}
