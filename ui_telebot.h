/********************************************************************************
** Form generated from reading UI file 'telebot.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELEBOT_H
#define UI_TELEBOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telebot
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pathButton;
    QPlainTextEdit *plainTextEdit;
    QLabel *q2;

    void setupUi(QDialog *telebot)
    {
        if (telebot->objectName().isEmpty())
            telebot->setObjectName(QString::fromUtf8("telebot"));
        telebot->resize(179, 127);
        buttonBox = new QDialogButtonBox(telebot);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-180, 90, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pathButton = new QPushButton(telebot);
        pathButton->setObjectName(QString::fromUtf8("pathButton"));
        pathButton->setGeometry(QRect(10, 10, 161, 23));
        plainTextEdit = new QPlainTextEdit(telebot);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 50, 104, 31));
        q2 = new QLabel(telebot);
        q2->setObjectName(QString::fromUtf8("q2"));
        q2->setGeometry(QRect(20, 60, 41, 16));

        retranslateUi(telebot);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, telebot, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, telebot, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(telebot);
    } // setupUi

    void retranslateUi(QDialog *telebot)
    {
        telebot->setWindowTitle(QCoreApplication::translate("telebot", "Dialog", nullptr));
        pathButton->setText(QCoreApplication::translate("telebot", "\320\222\321\213\320\261\320\265\321\200\320\265\321\202\320\265 \320\277\321\203\321\202\321\214", nullptr));
        plainTextEdit->setPlainText(QString());
        q2->setText(QCoreApplication::translate("telebot", "\320\242\320\276\320\272\320\265\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telebot: public Ui_telebot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELEBOT_H
