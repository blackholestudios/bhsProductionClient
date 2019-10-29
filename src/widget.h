<<<<<<< HEAD
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "unass.h"
#include "serveritems.h"


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget();
    unass win;

private:
    QPushButton *butt;

private slots:
    void unassScreen();
    void clicked(const QModelIndex &index);


};
#endif // WIDGET_H
=======
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "unass.h"
#include "serveritems.h"


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget();
    unass win;

private:
    QPushButton *butt;

private slots:
    void unassScreen();
    void clicked(const QModelIndex &index);


};
#endif // WIDGET_H
>>>>>>> 524319361e136399f4941e2fd6fbabab3aac11a2
