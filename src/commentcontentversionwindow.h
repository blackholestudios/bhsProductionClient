#ifndef COMMENTCONTENTVERSIONWINDOW_H
#define COMMENTCONTENTVERSIONWINDOW_H

#include "contentversionwindow.h"
#include <QBoxLayout>
#include <QStringListModel>
#include <QListView>
#include <QLineEdit>

class commentContentVersionWindow : public ContentVersionWindow
{
public:
    commentContentVersionWindow(QWidget *p);
    QWidget *parent;
    QVBoxLayout *mainLayout = new QVBoxLayout();
    QHBoxLayout *commentAdd = new QHBoxLayout();
    QLineEdit *commentInput= new QLineEdit();
    QPushButton *commentEnter= new QPushButton("Enter");
    QPushButton *open=new QPushButton("Open");
    QStringListModel *model=new QStringListModel();
    QListView *listView=new QListView();
    QStringList stringList;

    void getComments();
public slots:
    void addComment();
    void openClicked();

};

#endif // COMMENTCONTENTVERSIONWINDOW_H
