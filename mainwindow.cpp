#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addButton_clicked()
{
    QString word = ui->taskInput->text();
    int newcolumn = ui->taskList->columnCount();
    int rows = ui->taskList->rowCount();
    ui->taskList->insertColumn(newcolumn);
    ui->taskList->insertRow(rows);
    ui->taskList->setHorizontalHeaderItem(newcolumn, new QTableWidgetItem(word));
}

void MainWindow::on_clearAllButton_clicked()
{
    ui->taskList->clear();
}


void MainWindow::on_deleteButton_clicked()
{
    QTableWidgetItem *item = ui->taskList->currentItem();
    if (item) {
        item->setText("");
    }
}

