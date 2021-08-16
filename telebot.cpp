#include "telebot.h"
#include "ui_telebot.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include "help_function.h"


telebot::telebot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telebot)
{
    ui->setupUi(this);
}

telebot::~telebot()
{
    delete ui;
}

void telebot::on_pathButton_clicked()
{
    QString path = QFileDialog::getExistingDirectory(0, "Directory Dialog", "");
    ui->pathButton->setText(path);

}
void telebot::on_buttonBox_clicked()
{
    QString textToken = "TOKEN = \"" + ui->plainTextEdit->toPlainText() + "\"";
    help_function::easy_file("telebot", textToken, "\\main.py", ui->pathButton->text());
}


