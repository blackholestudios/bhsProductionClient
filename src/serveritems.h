#ifndef SERVERITEMS_H
#define SERVERITEMS_H

#include<QString>
#include <QImageReader>
#include <QObject>
#include <stdlib.h>

class serverItems
{
public:
    serverItems();
    QString fullName;
    QString status;
    QString artist;
    QString deadline;
    QString type;
    QString pipelineStage;
    int contentStageNum;
    QImageReader *thumbnail;
    QString commitDate;
    QString thumbnailLocation;
    std::vector <QString> comments;

    void getContentVersionInitalData();

private:

};

#endif // SERVERITEMS_H
