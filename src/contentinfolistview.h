#ifndef CONTENTINFOLISTVIEW_H
#define CONTENTINFOLISTVIEW_H

#include <QObject>
#include <QWidget>
#include <stdlib.h>
#include <QBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QGroupBox>
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
    QGroupBox *g=new QGroupBox();
    QLabel *label;
    QFont *font = new QFont();

signals:
    void contentChoosen(serverItems *content);

};

#endif // CONTENTINFOLISTVIEW_H
