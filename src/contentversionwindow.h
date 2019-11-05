#ifndef CONTENTVERSIONWINDOW_H
#define CONTENTVERSIONWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QImageReader>
#include <QBoxLayout>
#include <QGroupBox>
#include <QFont>
#include <QDebug>
#include <QFrame>
#include "serveritems.h"

class ContentVersionWindow : public QWidget
{
    Q_OBJECT
public:
    explicit ContentVersionWindow();
    //unass();
    serverItems content;


    QLabel *fullNameLabel = new QLabel("full name not recovered");
    QLabel *thumbnailLabel = new QLabel("Image not found");
    QLabel *statusLabel = new QLabel("Status not found");
    QLabel *deadlineLabel = new QLabel("Deadline not found");
    QLabel *deadlineNameLabel = new QLabel("Deadline");
    QLabel *typeLabel = new QLabel("Type not fond");
    QLabel *typeNameLabel = new QLabel("Type");
    QLabel *pipelineStageLabel = new QLabel("Pipeline stage not found");
    QLabel *pipelineStageNameLabel = new QLabel("Pipeline");
    QImageReader *pic;
    QVBoxLayout *mainLayout = new QVBoxLayout();
    QHBoxLayout *hbox = new QHBoxLayout();
    QVBoxLayout *buttons = new QVBoxLayout();
    QHBoxLayout *center = new QHBoxLayout();
    QGroupBox *groupBox = new QGroupBox();
    QFont font;

private:

signals:

public slots:



};

#endif // CONTENTVERSIONWINDOW_H
