<<<<<<< HEAD
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
   thumbnail = new QImageReader("C:/Users/danth/Desktop/duck.png");
   commitDate= nullptr;
}
=======
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
   thumbnail = new QImageReader("C:/Users/danth/Desktop/duck.png");
   commitDate= nullptr;
}
>>>>>>> 524319361e136399f4941e2fd6fbabab3aac11a2
