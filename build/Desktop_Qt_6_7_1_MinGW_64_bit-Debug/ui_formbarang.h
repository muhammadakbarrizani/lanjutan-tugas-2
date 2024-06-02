/********************************************************************************
** Form generated from reading UI file 'formbarang.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMBARANG_H
#define UI_FORMBARANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formbarang
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *kode_barangLabel;
    QLineEdit *kode_barangLineEdit;
    QLabel *nama_barangLabel;
    QLineEdit *nama_barangLineEdit;
    QLabel *harga_barangLabel;
    QLineEdit *harga_barangLineEdit;
    QLabel *satuanLabel;
    QLineEdit *satuanLineEdit;
    QLabel *stokLabel;
    QLineEdit *stokLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Formbarang)
    {
        if (Formbarang->objectName().isEmpty())
            Formbarang->setObjectName("Formbarang");
        Formbarang->resize(400, 300);
        formLayoutWidget = new QWidget(Formbarang);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 10, 251, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        kode_barangLabel = new QLabel(formLayoutWidget);
        kode_barangLabel->setObjectName("kode_barangLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, kode_barangLabel);

        kode_barangLineEdit = new QLineEdit(formLayoutWidget);
        kode_barangLineEdit->setObjectName("kode_barangLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, kode_barangLineEdit);

        nama_barangLabel = new QLabel(formLayoutWidget);
        nama_barangLabel->setObjectName("nama_barangLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, nama_barangLabel);

        nama_barangLineEdit = new QLineEdit(formLayoutWidget);
        nama_barangLineEdit->setObjectName("nama_barangLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, nama_barangLineEdit);

        harga_barangLabel = new QLabel(formLayoutWidget);
        harga_barangLabel->setObjectName("harga_barangLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, harga_barangLabel);

        harga_barangLineEdit = new QLineEdit(formLayoutWidget);
        harga_barangLineEdit->setObjectName("harga_barangLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, harga_barangLineEdit);

        satuanLabel = new QLabel(formLayoutWidget);
        satuanLabel->setObjectName("satuanLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, satuanLabel);

        satuanLineEdit = new QLineEdit(formLayoutWidget);
        satuanLineEdit->setObjectName("satuanLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, satuanLineEdit);

        stokLabel = new QLabel(formLayoutWidget);
        stokLabel->setObjectName("stokLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, stokLabel);

        stokLineEdit = new QLineEdit(formLayoutWidget);
        stokLineEdit->setObjectName("stokLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, stokLineEdit);

        pushButton = new QPushButton(Formbarang);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 190, 80, 24));
        pushButton_2 = new QPushButton(Formbarang);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 190, 80, 24));
        pushButton_3 = new QPushButton(Formbarang);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(200, 190, 80, 24));
        pushButton_4 = new QPushButton(Formbarang);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(290, 190, 80, 24));

        retranslateUi(Formbarang);

        QMetaObject::connectSlotsByName(Formbarang);
    } // setupUi

    void retranslateUi(QWidget *Formbarang)
    {
        Formbarang->setWindowTitle(QCoreApplication::translate("Formbarang", "Form", nullptr));
        kode_barangLabel->setText(QCoreApplication::translate("Formbarang", "kode_barang ", nullptr));
        nama_barangLabel->setText(QCoreApplication::translate("Formbarang", "nama_barang", nullptr));
        harga_barangLabel->setText(QCoreApplication::translate("Formbarang", "harga_barang", nullptr));
        satuanLabel->setText(QCoreApplication::translate("Formbarang", "satuan", nullptr));
        stokLabel->setText(QCoreApplication::translate("Formbarang", "stok", nullptr));
        pushButton->setText(QCoreApplication::translate("Formbarang", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Formbarang", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Formbarang", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Formbarang", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formbarang: public Ui_Formbarang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMBARANG_H
