/********************************************************************************
** Form generated from reading UI file 'formtulis.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTULIS_H
#define UI_FORMTULIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormTulis
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *kode_pesananLabel;
    QLineEdit *kode_pesananLineEdit;
    QLabel *kode_barangLabel;
    QLineEdit *kode_barangLineEdit;
    QLabel *jumlah_pesananLabel;
    QLineEdit *jumlah_pesananLineEdit;
    QLabel *harga_pesananLabel;
    QLineEdit *harga_pesananLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormTulis)
    {
        if (FormTulis->objectName().isEmpty())
            FormTulis->setObjectName("FormTulis");
        FormTulis->resize(400, 300);
        formLayoutWidget = new QWidget(FormTulis);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 20, 281, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        kode_pesananLabel = new QLabel(formLayoutWidget);
        kode_pesananLabel->setObjectName("kode_pesananLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, kode_pesananLabel);

        kode_pesananLineEdit = new QLineEdit(formLayoutWidget);
        kode_pesananLineEdit->setObjectName("kode_pesananLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, kode_pesananLineEdit);

        kode_barangLabel = new QLabel(formLayoutWidget);
        kode_barangLabel->setObjectName("kode_barangLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, kode_barangLabel);

        kode_barangLineEdit = new QLineEdit(formLayoutWidget);
        kode_barangLineEdit->setObjectName("kode_barangLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, kode_barangLineEdit);

        jumlah_pesananLabel = new QLabel(formLayoutWidget);
        jumlah_pesananLabel->setObjectName("jumlah_pesananLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, jumlah_pesananLabel);

        jumlah_pesananLineEdit = new QLineEdit(formLayoutWidget);
        jumlah_pesananLineEdit->setObjectName("jumlah_pesananLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, jumlah_pesananLineEdit);

        harga_pesananLabel = new QLabel(formLayoutWidget);
        harga_pesananLabel->setObjectName("harga_pesananLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, harga_pesananLabel);

        harga_pesananLineEdit = new QLineEdit(formLayoutWidget);
        harga_pesananLineEdit->setObjectName("harga_pesananLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, harga_pesananLineEdit);

        pushButton = new QPushButton(FormTulis);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 160, 80, 24));
        pushButton_2 = new QPushButton(FormTulis);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 160, 80, 24));
        pushButton_3 = new QPushButton(FormTulis);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(190, 160, 80, 24));
        pushButton_4 = new QPushButton(FormTulis);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(280, 160, 80, 24));

        retranslateUi(FormTulis);

        QMetaObject::connectSlotsByName(FormTulis);
    } // setupUi

    void retranslateUi(QWidget *FormTulis)
    {
        FormTulis->setWindowTitle(QCoreApplication::translate("FormTulis", "Form", nullptr));
        kode_pesananLabel->setText(QCoreApplication::translate("FormTulis", "kode_pesanan ", nullptr));
        kode_barangLabel->setText(QCoreApplication::translate("FormTulis", "kode_barang", nullptr));
        jumlah_pesananLabel->setText(QCoreApplication::translate("FormTulis", "jumlah_pesanan", nullptr));
        harga_pesananLabel->setText(QCoreApplication::translate("FormTulis", "harga_pesanan", nullptr));
        pushButton->setText(QCoreApplication::translate("FormTulis", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormTulis", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormTulis", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormTulis", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormTulis: public Ui_FormTulis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTULIS_H
