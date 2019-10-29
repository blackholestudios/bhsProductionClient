#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "contentversionwindow.h"
#include "serveritems.h"


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget();
    ContentVersionWindow win;

private:
    QPushButton *butt;

private slots:
    void unassScreen();
    void clicked(const QModelIndex &index);


};
#endif // WIDGET_H
