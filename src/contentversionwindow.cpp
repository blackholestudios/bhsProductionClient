#include "contentversionwindow.h"

ContentVersionWindow::ContentVersionWindow(){

//---------------------------Sets Labels and Thumbnail------------------------
    fullNameLabel->setText(content.fullName);
    statusLabel->setText(content.status);
    deadlineLabel->setText(content.deadline);
    typeLabel->setText(content.type);
    pipelineStageLabel->setText(content.pipelineStage);
    QImageReader *pic = content.thumbnail;
    thumbnailLabel->setPixmap(QPixmap::fromImageReader(pic));

//----------------------------Font--------------------------------------------

    font.setPointSize(23);
    font.setBold(true);
    font.setUnderline(true);
    fullNameLabel->setFont(font);
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

//----------------------------Font--------------------------------------------

    mainLayout->addWidget(fullNameLabel);
    mainLayout->addSpacing(20);

    center->addWidget(thumbnailLabel);

//--------------------------Buttons layout-------------------------------------
    buttons->addStretch(1);

    center->addLayout(buttons);
    center->addStretch();
    mainLayout->addLayout(center);

//--------------------------Group Box Layout-------------------------------------
    hbox->addWidget(typeNameLabel);
    hbox->addStretch(1);
    hbox->addWidget(deadlineNameLabel);
    hbox->addStretch(1);
    hbox->addWidget(pipelineStageNameLabel);
    groupBox->setLayout(hbox);
    mainLayout->addSpacing(20);
    mainLayout->addWidget(groupBox);


    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
    setContentsMargins(15,15,15,15);
    setLayout(mainLayout);

}
