#include "contentchooser.h"

contentChooser::contentChooser()
{

    tab->addTab(test,"Modeling");
    tab->addTab(test2,"rigging");
    vbox->addWidget(tab);
    setLayout(vbox);


    connect(test,&contentInfoListView::contentChoosen,this,&contentChooser::getContent);
}

void contentChooser::getContent(serverItems *content1){
    emit showContent(content1);
}

