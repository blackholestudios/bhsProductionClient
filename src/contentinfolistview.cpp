#include "contentinfolistview.h"
#include <QDebug>

contentInfoListView::contentInfoListView()
{
    serverItems *temp =new serverItems();
    content.push_back(temp);
    temp->contentStageNum=1;
    for(int i=2;i<5;i++){
    temp =new serverItems();
    content.push_back(temp);
    temp->contentStageNum=i;
    }

    for(int i=0;i< content.size();i++){

            font->setPointSize(10);
            font->setBold(true);
            font->setUnderline(false);


            label=new QLabel();
            label->setFont(*font);

            label->setText(content.at(i)->fullName);
            row->addWidget(label);

            font->setBold(false);
            label=new QLabel();
            label->setFont(*font);

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

