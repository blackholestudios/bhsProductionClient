<<<<<<< HEAD
#include "unass.h"
#include <QImageReader>
#include <QBoxLayout>
#include <QGroupBox>
#include <QFont>
#include <QDebug>
#include <QFrame>



unass::unass(){

    QVBoxLayout *mainLayout = new QVBoxLayout();
    QHBoxLayout *hbox = new QHBoxLayout();
    QVBoxLayout *buttons = new QVBoxLayout();
    QHBoxLayout *center = new QHBoxLayout();
    QGroupBox *groupBox = new QGroupBox();


    fullNameLabel->setText(content.fullName);
    statusLabel->setText(content.status);
    deadlineLabel->setText(content.deadline);
    typeLabel->setText(content.type);
    pipelineStageLabel->setText(content.pipelineStage);
    QImageReader *pic = content.thumbnail;
    thumbnailLabel->setPixmap(QPixmap::fromImageReader(pic));

    assToME = new QPushButton("Assign To Me");

    assToME->setFixedSize(400,100);

    //fullNameLabel->setFixedSize(200,100);
    QFont font;
    font.setPointSize(23);
    font.setBold(true);
    font.setUnderline(true);
    fullNameLabel->setFont(font);
    //fullNameLabel->setStyleSheet("background-color: red");
    font.setPointSize(10);
    font.setBold(false);
    font.setUnderline(false);
    statusLabel->setFont(font);
    deadlineLabel->setFont(font);
    deadlineNameLabel->setFont(font);

    typeLabel->setFont(font);
    typeNameLabel->setFont(font);

    pipelineStageLabel->setFont(font);
    pipelineStageNameLabel->setFont(font);

    assToME->setFont(font);

    mainLayout->addWidget(fullNameLabel);
    mainLayout->addSpacing(20);
    center->addWidget(thumbnailLabel);
    buttons->addWidget(assToME);
    //vbox2->addSpacing(300);
    buttons->addStretch(1);
    center->addLayout(buttons);
    center->addStretch();
    mainLayout->addLayout(center);

    hbox->addWidget(typeNameLabel);
    hbox->addStretch(1);
    hbox->addWidget(deadlineNameLabel);
    hbox->addStretch(1);
    hbox->addWidget(pipelineStageNameLabel);
    groupBox->setLayout(hbox);
    //groupBox->setStyleSheet("background-color: red");
    mainLayout->addSpacing(20);
    mainLayout->addWidget(groupBox);
    //implement loop to print correct data


    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
    setContentsMargins(15,15,15,15);
    setLayout(mainLayout);
    //QWidget::adjustSize();
    qDebug()<<size().width()<<endl<<size().height();
    //soft grid
}
=======
#include "unass.h"
#include <QImageReader>
#include <QBoxLayout>
#include <QGroupBox>
#include <QFont>
#include <QDebug>
#include <QFrame>



unass::unass(){

    QVBoxLayout *mainLayout = new QVBoxLayout();
    QHBoxLayout *hbox = new QHBoxLayout();
    QVBoxLayout *buttons = new QVBoxLayout();
    QHBoxLayout *center = new QHBoxLayout();
    QGroupBox *groupBox = new QGroupBox();


    fullNameLabel->setText(content.fullName);
    statusLabel->setText(content.status);
    deadlineLabel->setText(content.deadline);
    typeLabel->setText(content.type);
    pipelineStageLabel->setText(content.pipelineStage);
    QImageReader *pic = content.thumbnail;
    thumbnailLabel->setPixmap(QPixmap::fromImageReader(pic));

    assToME = new QPushButton("Assign To Me");

    assToME->setFixedSize(400,100);

    //fullNameLabel->setFixedSize(200,100);
    QFont font;
    font.setPointSize(23);
    font.setBold(true);
    font.setUnderline(true);
    fullNameLabel->setFont(font);
    //fullNameLabel->setStyleSheet("background-color: red");
    font.setPointSize(10);
    font.setBold(false);
    font.setUnderline(false);
    statusLabel->setFont(font);
    deadlineLabel->setFont(font);
    deadlineNameLabel->setFont(font);

    typeLabel->setFont(font);
    typeNameLabel->setFont(font);

    pipelineStageLabel->setFont(font);
    pipelineStageNameLabel->setFont(font);

    assToME->setFont(font);

    mainLayout->addWidget(fullNameLabel);
    mainLayout->addSpacing(20);
    center->addWidget(thumbnailLabel);
    buttons->addWidget(assToME);
    //vbox2->addSpacing(300);
    buttons->addStretch(1);
    center->addLayout(buttons);
    center->addStretch();
    mainLayout->addLayout(center);

    hbox->addWidget(typeNameLabel);
    hbox->addStretch(1);
    hbox->addWidget(deadlineNameLabel);
    hbox->addStretch(1);
    hbox->addWidget(pipelineStageNameLabel);
    groupBox->setLayout(hbox);
    //groupBox->setStyleSheet("background-color: red");
    mainLayout->addSpacing(20);
    mainLayout->addWidget(groupBox);
    //implement loop to print correct data


    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
    setContentsMargins(15,15,15,15);
    setLayout(mainLayout);
    //QWidget::adjustSize();
    qDebug()<<size().width()<<endl<<size().height();
    //soft grid
}
>>>>>>> 524319361e136399f4941e2fd6fbabab3aac11a2
