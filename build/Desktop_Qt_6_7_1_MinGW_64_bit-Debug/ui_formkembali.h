/********************************************************************************
** Form generated from reading UI file 'formkembali.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMKEMBALI_H
#define UI_FORMKEMBALI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formkembali
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *no_returLabel;
    QLineEdit *no_returLineEdit;
    QLabel *kode_barangLabel;
    QLineEdit *kode_barangLineEdit;
    QLabel *jumlah_kembaliLabel;
    QLineEdit *jumlah_kembaliLineEdit;
    QLabel *alasanLabel;
    QLineEdit *alasanLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Formkembali)
    {
        if (Formkembali->objectName().isEmpty())
            Formkembali->setObjectName("Formkembali");
        Formkembali->resize(400, 300);
        formLayoutWidget = new QWidget(Formkembali);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 20, 241, 131));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        no_returLabel = new QLabel(formLayoutWidget);
        no_returLabel->setObjectName("no_returLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, no_returLabel);

        no_returLineEdit = new QLineEdit(formLayoutWidget);
        no_returLineEdit->setObjectName("no_returLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, no_returLineEdit);

        kode_barangLabel = new QLabel(formLayoutWidget);
        kode_barangLabel->setObjectName("kode_barangLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, kode_barangLabel);

        kode_barangLineEdit = new QLineEdit(formLayoutWidget);
        kode_barangLineEdit->setObjectName("kode_barangLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, kode_barangLineEdit);

        jumlah_kembaliLabel = new QLabel(formLayoutWidget);
        jumlah_kembaliLabel->setObjectName("jumlah_kembaliLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, jumlah_kembaliLabel);

        jumlah_kembaliLineEdit = new QLineEdit(formLayoutWidget);
        jumlah_kembaliLineEdit->setObjectName("jumlah_kembaliLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, jumlah_kembaliLineEdit);

        alasanLabel = new QLabel(formLayoutWidget);
        alasanLabel->setObjectName("alasanLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, alasanLabel);

        alasanLineEdit = new QLineEdit(formLayoutWidget);
        alasanLineEdit->setObjectName("alasanLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, alasanLineEdit);

        pushButton = new QPushButton(Formkembali);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 170, 80, 24));
        pushButton_2 = new QPushButton(Formkembali);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 170, 80, 24));
        pushButton_3 = new QPushButton(Formkembali);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(200, 170, 80, 24));
        pushButton_4 = new QPushButton(Formkembali);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(290, 170, 80, 24));

        retranslateUi(Formkembali);

        QMetaObject::connectSlotsByName(Formkembali);
    } // setupUi

    void retranslateUi(QWidget *Formkembali)
    {
        Formkembali->setWindowTitle(QCoreApplication::translate("Formkembali", "Form", nullptr));
        no_returLabel->setText(QCoreApplication::translate("Formkembali", "no_retur ", nullptr));
        kode_barangLabel->setText(QCoreApplication::translate("Formkembali", "kode_barang", nullptr));
        jumlah_kembaliLabel->setText(QCoreApplication::translate("Formkembali", "jumlah_kembali", nullptr));
        alasanLabel->setText(QCoreApplication::translate("Formkembali", "alasan", nullptr));
        pushButton->setText(QCoreApplication::translate("Formkembali", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Formkembali", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Formkembali", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Formkembali", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formkembali: public Ui_Formkembali {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMKEMBALI_H
