#include "discord.h"
#include "ui_discord.h"
#include "help_function.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include "help_function.h"

discord::discord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::discord)
{
    ui->setupUi(this);
}

discord::~discord()
{
    delete ui;
}

void discord::on_pathButton_clicked()
{
    QString path = QFileDialog::getExistingDirectory(0, "Directory Dialog", "");
    ui->pathButton->setText(path);
}


void discord::on_buttonBox_clicked()
{
    QString textToken = "settings_ds = {\n \'token\': \'" + ui->TokenText->toPlainText() + "\',\n";
    textToken += "\'bot\': \'" + ui->NameText->toPlainText() + "\',\n";
    textToken += "\'id\': \'" + ui->IdText->toPlainText() + "\',\n";
    textToken += "\'prefix\': \'" + ui->PrefixText->toPlainText() + "\'\n}";
    help_function::easy_file("discord", textToken, "\\main.py", ui->pathButton->text());
}

