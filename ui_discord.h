/********************************************************************************
** Form generated from reading UI file 'discord.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCORD_H
#define UI_DISCORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_discord
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *TokenText;
    QPlainTextEdit *PrefixText;
    QPlainTextEdit *NameText;
    QPlainTextEdit *IdText;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pathButton;

    void setupUi(QDialog *discord)
    {
        if (discord->objectName().isEmpty())
            discord->setObjectName(QString::fromUtf8("discord"));
        discord->resize(169, 239);
        buttonBox = new QDialogButtonBox(discord);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-180, 200, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        TokenText = new QPlainTextEdit(discord);
        TokenText->setObjectName(QString::fromUtf8("TokenText"));
        TokenText->setGeometry(QRect(60, 40, 104, 31));
        PrefixText = new QPlainTextEdit(discord);
        PrefixText->setObjectName(QString::fromUtf8("PrefixText"));
        PrefixText->setGeometry(QRect(60, 160, 104, 31));
        NameText = new QPlainTextEdit(discord);
        NameText->setObjectName(QString::fromUtf8("NameText"));
        NameText->setGeometry(QRect(60, 80, 104, 31));
        IdText = new QPlainTextEdit(discord);
        IdText->setObjectName(QString::fromUtf8("IdText"));
        IdText->setGeometry(QRect(60, 120, 104, 31));
        label = new QLabel(discord);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 47, 13));
        label_2 = new QLabel(discord);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 47, 13));
        label_3 = new QLabel(discord);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 47, 13));
        label_4 = new QLabel(discord);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 170, 47, 13));
        pathButton = new QPushButton(discord);
        pathButton->setObjectName(QString::fromUtf8("pathButton"));
        pathButton->setGeometry(QRect(0, 10, 161, 23));

        retranslateUi(discord);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, discord, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, discord, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(discord);
    } // setupUi

    void retranslateUi(QDialog *discord)
    {
        discord->setWindowTitle(QCoreApplication::translate("discord", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("discord", "\320\242\320\276\320\272\320\265\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("discord", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("discord", "Id", nullptr));
        label_4->setText(QCoreApplication::translate("discord", "\320\237\321\200\320\265\321\204\320\270\320\272\321\201", nullptr));
        pathButton->setText(QCoreApplication::translate("discord", "\320\222\321\213\320\261\320\265\321\200\320\265\321\202\320\265 \320\277\321\203\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class discord: public Ui_discord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCORD_H
