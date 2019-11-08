#ifndef CONTENTVERSIONWINDOW_H
#define CONTENTVERSIONWINDOW_H

#include <QWidget>
#include <QObject>
#include <QLabel>
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
    void setButtonStyle(QPushButton *button);

    serverItems *content =nullptr;


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


    void setContentItems();

private:

signals:
        void changeWindow(serverItems *s);

public slots:



};

#endif // CONTENTVERSIONWINDOW_H
