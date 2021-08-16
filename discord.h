#ifndef DISCORD_H
#define DISCORD_H

#include <QDialog>

namespace Ui {
class discord;
}

class discord : public QDialog
{
    Q_OBJECT

public:
    explicit discord(QWidget *parent = nullptr);
    ~discord();

private slots:
    void on_pathButton_clicked();

    void on_buttonBox_clicked();

private:
    Ui::discord *ui;
};

#endif // DISCORD_H
