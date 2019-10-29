#include "widget.h"
#include <QGridLayout>
#include <QBoxLayout>
#include <QToolBox>
#include <QTreeWidget>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QDebug>


QStandardItemModel *model = new QStandardItemModel;

Widget::Widget()
{

    //ui->setupUi(this);
    //setFixedSize(1000, 1000);
    resize(width(),height());
    QToolBox *tool = new QToolBox;
    QVBoxLayout *grid = new QVBoxLayout();
    QHBoxLayout *grid2 = new QHBoxLayout();
    QPushButton *butt = new QPushButton("Click me");
    QLabel *a=new QLabel("asasa                              ");
    QWidget *itemWidget = new QWidget;

    /*
    //butt->setFixedSize(60,60);
    grid2->addWidget(a);
    grid2->addWidget(butt);
    itemWidget->setLayout(grid2);
    tool->addItem(itemWidget,"Modeling");
    tool->addItem(NULL,"Surfacing");
    tool->addItem(NULL,"Rigging");
    //grid->addWidget(butt,5,0,1,1);
    //grid->addWidget(tool);
    */

    model->setHorizontalHeaderLabels(QStringList("Daniel Sirota"));
    QStandardItem *parentItem = model->invisibleRootItem();
    QStandardItem *parentItem2 = model->invisibleRootItem();
    QStandardItem *modelingParent = new QStandardItem;
    QStandardItem *surfacingParent = new QStandardItem;
    QStandardItem *riggingParent = new QStandardItem;

    modelingParent = new QStandardItem(QString("Modeling"));
    parentItem->appendRow(modelingParent);
    QStandardItem *item = new QStandardItem(QString("Modeling"));
    modelingParent->appendRow(item);
    surfacingParent= new QStandardItem(QString("Surfacing"));
    parentItem->appendRow(surfacingParent);
    surfacingParent->appendRow(item);
    riggingParent= new QStandardItem(QString("Rigging"));
    parentItem2->appendRow(riggingParent);
    riggingParent->appendRow(item);
    riggingParent->appendRow(item);


    QFont font;
    font.setPointSize(10);
    //font.setBold(true);
    //font.setUnderline(true);

    //here have loop to go over all content
    QTreeView *treeView = new QTreeView(this);
    treeView->setModel(model);
    treeView->setFont(font);
    //treeView->setIndexWidget(model->index(0,0),butt);

    /*
    QTreeWidget *treeWidget = new QTreeWidget();
    treeWidget->setColumnCount(1);
    QList<QTreeWidgetItem *> items;
    for (int i = 0; i < 1; ++i)
        items.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("item: %1").arg(i))));
    treeWidget->insertTopLevelItems(0, items);
    */

    grid->addWidget(treeView);
    grid->setMargin(0);
    this->setLayout(grid);
    //butt->show();

    connect(treeView, &QTreeView::clicked,this, &Widget::clicked);
    connect(butt,&QPushButton::clicked,this,&Widget::unassScreen);
}


void Widget::unassScreen(){
    this->close();
    win.show();
}

void Widget::clicked(const QModelIndex &index)
{
    QStandardItem *item = model->itemFromIndex(index);
    qDebug()<<item<<endl;
    close();
    win.show();
}

