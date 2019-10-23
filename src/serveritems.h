#ifndef SERVERITEMS_H
#define SERVERITEMS_H

#include<QString>
#include <QImageReader>


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
    QImageReader *thumbnail;
    QString commitDate;
    void getContentVersionInitalData();

private:

};

#endif // SERVERITEMS_H
