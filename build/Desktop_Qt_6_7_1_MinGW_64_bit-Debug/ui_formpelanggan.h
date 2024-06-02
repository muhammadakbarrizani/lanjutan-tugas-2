/********************************************************************************
** Form generated from reading UI file 'formpelanggan.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPELANGGAN_H
#define UI_FORMPELANGGAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPelanggan
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *namaLabel;
    QLineEdit *namaLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;
    QLabel *telponLabel;
    QLineEdit *telponLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormPelanggan)
    {
        if (FormPelanggan->objectName().isEmpty())
            FormPelanggan->setObjectName("FormPelanggan");
        FormPelanggan->resize(502, 379);
        formLayoutWidget = new QWidget(FormPelanggan);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 30, 281, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        namaLabel = new QLabel(formLayoutWidget);
        namaLabel->setObjectName("namaLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, namaLabel);

        namaLineEdit = new QLineEdit(formLayoutWidget);
        namaLineEdit->setObjectName("namaLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, namaLineEdit);

        alamatLabel = new QLabel(formLayoutWidget);
        alamatLabel->setObjectName("alamatLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formLayoutWidget);
        alamatLineEdit->setObjectName("alamatLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, alamatLineEdit);

        telponLabel = new QLabel(formLayoutWidget);
        telponLabel->setObjectName("telponLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, telponLabel);

        telponLineEdit = new QLineEdit(formLayoutWidget);
        telponLineEdit->setObjectName("telponLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, telponLineEdit);

        pushButton = new QPushButton(FormPelanggan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 160, 80, 24));
        pushButton->setMinimumSize(QSize(0, 24));
        pushButton_2 = new QPushButton(FormPelanggan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 160, 80, 24));
        pushButton_3 = new QPushButton(FormPelanggan);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 160, 80, 24));
        pushButton_4 = new QPushButton(FormPelanggan);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(340, 160, 80, 24));

        retranslateUi(FormPelanggan);

        QMetaObject::connectSlotsByName(FormPelanggan);
    } // setupUi

    void retranslateUi(QWidget *FormPelanggan)
    {
        FormPelanggan->setWindowTitle(QCoreApplication::translate("FormPelanggan", "Form", nullptr));
        namaLabel->setText(QCoreApplication::translate("FormPelanggan", "nama", nullptr));
        alamatLabel->setText(QCoreApplication::translate("FormPelanggan", "alamat", nullptr));
        telponLabel->setText(QCoreApplication::translate("FormPelanggan", "telpon", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPelanggan", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormPelanggan", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormPelanggan", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormPelanggan", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPelanggan: public Ui_FormPelanggan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPELANGGAN_H
