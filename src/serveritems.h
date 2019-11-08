#ifndef SERVERITEMS_H
#define SERVERITEMS_H

#include<QString>
#include <QImageReader>
#include <QObject>

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
    void getContentVersionInitalData();

private:

};

#endif // SERVERITEMS_H
