#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent)    :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "HELLO" << endl;
    //commentdfdfegdfggdfg
    djfksfjdfksfk
            lfsldff
}

MainWindow::~MainWindow()
{
    delete ui;
}
