#ifndef CONTENTINFOLISTVIEW_H
#define CONTENTINFOLISTVIEW_H

#include <QObject>
#include <QWidget>
#include <stdlib.h>
#include <QBoxLayout>
#include <QPushButton>
#include <QLabel>
#include "serveritems.h"
using namespace std;

class contentInfoListView: public QWidget
{
    Q_OBJECT
public:
    contentInfoListView();
    vector<serverItems*> content;
    QPushButton *butt;
    QHBoxLayout *row = new QHBoxLayout();
    QVBoxLayout *mainLayout = new QVBoxLayout();
    QLabel *label;


signals:
    void contentChoosen(serverItems *content);

};

#endif // CONTENTINFOLISTVIEW_H
