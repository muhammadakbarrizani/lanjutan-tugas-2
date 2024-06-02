/********************************************************************************
** Form generated from reading UI file 'formpesanan.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPESANAN_H
#define UI_FORMPESANAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPesanan
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *kode_pesananLabel;
    QLineEdit *kode_pesananLineEdit;
    QLabel *kode_pelangganLabel;
    QLineEdit *kode_pelangganLineEdit;
    QLabel *tgl_kirimLabel;
    QDateEdit *tgl_kirimDateEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormPesanan)
    {
        if (FormPesanan->objectName().isEmpty())
            FormPesanan->setObjectName("FormPesanan");
        FormPesanan->resize(400, 300);
        formLayoutWidget = new QWidget(FormPesanan);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 30, 271, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        kode_pesananLabel = new QLabel(formLayoutWidget);
        kode_pesananLabel->setObjectName("kode_pesananLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, kode_pesananLabel);

        kode_pesananLineEdit = new QLineEdit(formLayoutWidget);
        kode_pesananLineEdit->setObjectName("kode_pesananLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, kode_pesananLineEdit);

        kode_pelangganLabel = new QLabel(formLayoutWidget);
        kode_pelangganLabel->setObjectName("kode_pelangganLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, kode_pelangganLabel);

        kode_pelangganLineEdit = new QLineEdit(formLayoutWidget);
        kode_pelangganLineEdit->setObjectName("kode_pelangganLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, kode_pelangganLineEdit);

        tgl_kirimLabel = new QLabel(formLayoutWidget);
        tgl_kirimLabel->setObjectName("tgl_kirimLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, tgl_kirimLabel);

        tgl_kirimDateEdit = new QDateEdit(formLayoutWidget);
        tgl_kirimDateEdit->setObjectName("tgl_kirimDateEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, tgl_kirimDateEdit);

        pushButton = new QPushButton(FormPesanan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 140, 80, 24));
        pushButton_2 = new QPushButton(FormPesanan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 140, 80, 24));
        pushButton_3 = new QPushButton(FormPesanan);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 140, 80, 24));
        pushButton_4 = new QPushButton(FormPesanan);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(310, 140, 80, 24));

        retranslateUi(FormPesanan);

        QMetaObject::connectSlotsByName(FormPesanan);
    } // setupUi

    void retranslateUi(QWidget *FormPesanan)
    {
        FormPesanan->setWindowTitle(QCoreApplication::translate("FormPesanan", "Form", nullptr));
        kode_pesananLabel->setText(QCoreApplication::translate("FormPesanan", "kode_pesanan ", nullptr));
        kode_pelangganLabel->setText(QCoreApplication::translate("FormPesanan", "kode_pelanggan", nullptr));
        tgl_kirimLabel->setText(QCoreApplication::translate("FormPesanan", "tgl_kirim", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPesanan", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormPesanan", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormPesanan", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormPesanan", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPesanan: public Ui_FormPesanan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPESANAN_H
