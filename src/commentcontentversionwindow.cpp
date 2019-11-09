#include "commentcontentversionwindow.h"

commentContentVersionWindow::commentContentVersionWindow(QWidget *p)
{
    parent=p;

    setButtonStyle(open);
    buttons->addWidget(open);
    buttons->addStretch();
    center->addLayout(buttons);

    model->setStringList(stringList);
    listView->setModel(model);
    mainLayout->addWidget(listView);

    commentAdd->addWidget(commentInput);
    commentAdd->addWidget(commentEnter);
    mainLayout->addLayout(commentAdd);

    commentSection->addLayout(mainLayout);
    //connect(commentEnter,&QPushButton::clicked,this,&commentContentVersionWindow::addComment);
    connect(commentInput,&QLineEdit::editingFinished,this,&commentContentVersionWindow::addComment);
    connect(open,&QPushButton::clicked,this,&commentContentVersionWindow::openClicked);

}

void commentContentVersionWindow::getComments(){

    stringList.clear();
    for(int i=0;i<content->comments.size();i++){
        stringList <<content->comments.at(i);
    }

    model->setStringList(stringList);
    listView->setModel(model);

}

void commentContentVersionWindow::addComment(){
    if(commentInput->text() !=""){
        content->comments.push_back(commentInput->text());
        commentInput->setText("");
        getComments();
    }
}

void commentContentVersionWindow::openClicked(){
    qDebug()<<"openClicked\n";
    content->contentStageNum=0;
    emit changeWindow(content);
}

