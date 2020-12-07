#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{    
    ui->setupUi(this);

    connect(ui->actionopen,&QAction::triggered,this,[=](){

    QString str =QFileDialog::getOpenFileName(this,"biaoti","D://");//图片显示

    ui->label->setPixmap(QPixmap(str));


    });
    QMovie* name =new QMovie(":/new/lc/gif/asd.gif");//动态图片播放gif类型
    ui->label_2->setMovie(name);
    name->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}
