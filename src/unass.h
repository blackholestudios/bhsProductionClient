#ifndef UNASS_H
#define UNASS_H

#include <QWidget>
#include <QLabel>
#include <QString>
#include <QPushButton>
#include <QFrame>
#include "serveritems.h"



class unass : public QWidget
{
public:
    unass();
    serverItems content;

private:
    QLabel *fullNameLabel=new QLabel("full name not recovered");
    QLabel *thumbnailLabel=new QLabel("Image not found");
    QLabel *statusLabel =new QLabel("Status not found");
    QLabel *deadlineLabel =new QLabel("Deadline not found");
    QLabel *deadlineNameLabel =new QLabel("Deadline");
    QLabel *typeLabel =new QLabel("Type not fond");
    QLabel *typeNameLabel =new QLabel("Type");
    QLabel *pipelineStageLabel =new QLabel("Pipeline stage not found");
    QLabel *pipelineStageNameLabel =new QLabel("Pipeline");
    QPushButton *assToME;
    QImageReader *pic;

};

#endif // UNASS_H
