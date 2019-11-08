#include "contentinfolistview.h"
#include <QDebug>
#include <QGroupBox>
contentInfoListView::contentInfoListView()
{
    serverItems *temp =new serverItems();
    content.push_back(temp);
    temp->contentStageNum=1;
    for(int i=2;i<4;i++){
    temp =new serverItems();
    content.push_back(temp);
    temp->contentStageNum=i;
    }
    QGroupBox *g=new QGroupBox();

    for(int i=0;i< content.size();i++){

            label=new QLabel();
            label->setText(content.at(i)->fullName);
            row->addWidget(label);
            label=new QLabel();
            label->setText(content.at(i)->deadline);
            row->addWidget(label);
            butt=new QPushButton();
            butt->setText("Go To");
            row->addWidget(butt);
            connect(butt, &QPushButton::clicked,this,[=]() {
                emit contentChoosen(content.at(i));
            });
            g->setLayout(row);
            mainLayout->addWidget(g);
            if(i != content.size()-1)
                g = new QGroupBox();
                row = new QHBoxLayout();
    }


    setLayout(mainLayout);
}

