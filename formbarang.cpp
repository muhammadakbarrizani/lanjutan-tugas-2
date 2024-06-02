#include "formbarang.h"
#include "ui_formbarang.h"

Formbarang::Formbarang(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formbarang)
{
    ui->setupUi(this);
}

Formbarang::~Formbarang()
{
    delete ui;
}

void Formbarang::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO barang (kode_barang , nama_barang, harga_barang, satuan, stok)"
                "VALUE (:kode_barang,:nama_barang,:harga_barang,:satuan,:stok)");
    sql.bindValue(":kode_barang",ui->kode_barangLineEdit->text());
    sql.bindValue(":nama_barang",ui->nama_barangLineEdit->text());
    sql.bindValue(":harga_barang",ui->harga_barangLineEdit->text());
    sql.bindValue(":satuan",ui->satuanLineEdit->text());
    sql.bindValue(":stok",ui->stokLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formbarang::on_pushButton_2_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("UPDATE barang SET nama_barang=:nama_barang, "
                "harga_barang=:harga_barang, satuan=:satuan, stok=:stok WHERE kode_barang=:kode_barang");
    sql.bindValue(":kode_barang",ui->kode_barangLineEdit->text());
    sql.bindValue(":nama_barang",ui->nama_barangLineEdit->text());
    sql.bindValue(":harga_barang",ui->harga_barangLineEdit->text());
    sql.bindValue(":satuan",ui->satuanLineEdit->text());
    sql.bindValue(":stok",ui->stokLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Ubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formbarang::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM barang WHERE kode_barang=:kode_barang");
    sql.bindValue(":kode_barang",ui->kode_barangLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();

    }

}


void Formbarang::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM barang WHERE kode_barang=:kode_barang");
    sql.bindValue(":kode_barang",ui->kode_barangLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }

}

