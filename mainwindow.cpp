#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "telebot.h"
#include "discord.h"

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


void MainWindow::on_ButType_clicked()
{
    if(ui->CBType->currentText() == "Telegram (telebot)"){
        telebot window;
        window.setModal(true);
        window.exec();
    }
    else if (ui->CBType->currentText() == "Discord") {
        discord window;
        window.setModal(true);
        window.exec();
    }
}

