#include "serveritems.h"

serverItems::serverItems()
{
    //change to take in items
    getContentVersionInitalData();
}

void serverItems::getContentVersionInitalData(){
   fullName="/char/joe/rig/v004";
   status= "unassigned";
   artist= nullptr;
   deadline= "Monday, November 14th";
   type= "Asset";
   pipelineStage= "Model";
   contentStageNum=0;
   thumbnailLocation="C:/Users/danth/Desktop/duck.png";
   thumbnail = new QImageReader(thumbnailLocation);
   commitDate= nullptr;
}
