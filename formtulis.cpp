#include "formtulis.h"
#include "ui_formtulis.h"

FormTulis::FormTulis(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormTulis)
{
    ui->setupUi(this);
}

FormTulis::~FormTulis()
{
    delete ui;
}

void FormTulis::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO tulis (kode_pesanan , kode_barang, jumlah_pesanan, harga_pesanan)"
                "VALUE (:kode_pesanan,:kode_barang,:jumlah_pesanan,:harga_pesanan)");
    sql.bindValue(":kode_pesanan",ui->kode_pesananLineEdit->text());
    sql.bindValue(":kode_barang",ui->kode_barangLineEdit->text());
    sql.bindValue(":jumlah_pesanan",ui->jumlah_pesananLineEdit->text());
    sql.bindValue(":harga_pesanan",ui->harga_pesananLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormTulis::on_pushButton_2_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("UPDATE tulis SET kode_barang=:kode_barang, "
                "jumlah_pesanan=:jumlah_pesanan, harga_pesanan=:harga_pesanan WHERE kode_pesanan=:kode_pesanan");
    sql.bindValue(":kode_pesanan",ui->kode_pesananLineEdit->text());
    sql.bindValue(":kode_barang",ui->kode_barangLineEdit->text());
    sql.bindValue(":jumlah_pesanan",ui->jumlah_pesananLineEdit->text());
    sql.bindValue(":harga_pesanan",ui->harga_pesananLineEdit->text());


    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Ubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormTulis::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM tulis WHERE kode_pesanan=:kode_pesanan");
    sql.bindValue(":kode_pesanan",ui->kode_pesananLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormTulis::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM tulis WHERE kode_pesanan=:kode_pesanan");
    sql.bindValue(":kode_pesanan",ui->kode_pesananLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}

