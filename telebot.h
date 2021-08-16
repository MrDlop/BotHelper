#ifndef TELEBOT_H
#define TELEBOT_H

#include <QDialog>

namespace Ui {
class telebot;
}

class telebot : public QDialog
{
    Q_OBJECT

public:
    explicit telebot(QWidget *parent = nullptr);
    ~telebot();

private slots:
    void on_pathButton_clicked();

    void on_buttonBox_clicked();


private:
    Ui::telebot *ui;
    void file_copy(QString fileIn, QString dirIn, QString fileOut, QString dir);
};

#endif // TELEBOT_H
