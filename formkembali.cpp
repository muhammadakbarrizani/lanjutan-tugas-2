#include "formkembali.h"
#include "ui_formkembali.h"

Formkembali::Formkembali(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formkembali)
{
    ui->setupUi(this);
}

Formkembali::~Formkembali()
{
    delete ui;
}

void Formkembali::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO kembali (no_retur  , kode_barang, jumlah_kembali, alasan)"
                "VALUE (:no_retur,:kode_barang,:jumlah_kembali,:alasan)");
    sql.bindValue(":no_retur",ui->no_returLineEdit->text());
    sql.bindValue(":kode_barang",ui->kode_barangLineEdit->text());
    sql.bindValue(":jumlah_kembali",ui->jumlah_kembaliLineEdit->text());
    sql.bindValue(":alasan",ui->alasanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formkembali::on_pushButton_2_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("UPDATE kembali SET kode_barang=:kode_barang, "
                "jumlah_kembali=:jumlah_kembali, alasan=:alasan WHERE no_retur=:no_retur");
    sql.bindValue(":no_retur",ui->no_returLineEdit->text());
    sql.bindValue(":kode_barang",ui->kode_barangLineEdit->text());
    sql.bindValue(":jumlah_kembali",ui->jumlah_kembaliLineEdit->text());
    sql.bindValue(":alasan",ui->alasanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Ubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formkembali::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM kembali WHERE no_retur=:no_retur");
    sql.bindValue(":no_retur",ui->no_returLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();

    }
}


void Formkembali::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM kembali WHERE no_retur=:no_retur");
    sql.bindValue(":no_retur",ui->no_returLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}

