#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "tidyfolder.h"
#include "tidyconfigfile.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Test method
 */
void MainWindow::on_pushButton_clicked()
{
    QString path = "/Users/Simon/QT Projects/Tidy_Downloads/downloads";
    TidyConfigFile config(path);

    config.parseRules();
}
