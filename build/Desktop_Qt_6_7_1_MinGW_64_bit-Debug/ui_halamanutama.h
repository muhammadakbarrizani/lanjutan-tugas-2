/********************************************************************************
** Form generated from reading UI file 'halamanutama.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALAMANUTAMA_H
#define UI_HALAMANUTAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HalamanUtama
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HalamanUtama)
    {
        if (HalamanUtama->objectName().isEmpty())
            HalamanUtama->setObjectName("HalamanUtama");
        HalamanUtama->resize(800, 600);
        centralwidget = new QWidget(HalamanUtama);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 270, 80, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(330, 270, 80, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(420, 270, 80, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(510, 270, 80, 24));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(600, 270, 80, 24));
        HalamanUtama->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HalamanUtama);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        HalamanUtama->setMenuBar(menubar);
        statusbar = new QStatusBar(HalamanUtama);
        statusbar->setObjectName("statusbar");
        HalamanUtama->setStatusBar(statusbar);

        retranslateUi(HalamanUtama);

        QMetaObject::connectSlotsByName(HalamanUtama);
    } // setupUi

    void retranslateUi(QMainWindow *HalamanUtama)
    {
        HalamanUtama->setWindowTitle(QCoreApplication::translate("HalamanUtama", "HalamanUtama", nullptr));
        pushButton->setText(QCoreApplication::translate("HalamanUtama", "Pelanggan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HalamanUtama", "Pemesanan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HalamanUtama", "Tulis", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HalamanUtama", "Barang", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HalamanUtama", "Kembali", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HalamanUtama: public Ui_HalamanUtama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALAMANUTAMA_H
