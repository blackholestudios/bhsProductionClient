#ifndef CONTENTCHOOSER_H
#define CONTENTCHOOSER_H

#include <QWidget>
#include <QObject>
#include <QTabWidget>
#include <QBoxLayout>
#include "contentinfolistview.h"
#include "serveritems.h"

class contentChooser : public QWidget
{
    Q_OBJECT
public:
    contentChooser();
    contentInfoListView *test = new contentInfoListView();
    QTabWidget *tab=new QTabWidget();
    QVBoxLayout *vbox=new QVBoxLayout();
    serverItems *content=new serverItems();


public slots:
    void getContent(serverItems *content);

signals:
    void showContent(serverItems *content1);


};

#endif // CONTENTCHOOSER_H
