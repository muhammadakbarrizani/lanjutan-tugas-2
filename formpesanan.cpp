#include "formpesanan.h"
#include "ui_formpesanan.h"

FormPesanan::FormPesanan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPesanan)
{
    ui->setupUi(this);
}

FormPesanan::~FormPesanan()
{
    delete ui;
}

void FormPesanan::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO pesanan (kode_pesanan , kode_pelanggan,tgl_kirim)"
                "VALUE (:kode_pesanan,:kode_pelanggan,:tgl_kirim)");
    sql.bindValue(":kode_pesanan",ui->kode_pesananLineEdit->text());
    sql.bindValue(":kode_pelanggan",ui->kode_pelangganLineEdit->text());
    sql.bindValue(":tgl_kirim",ui->tgl_kirimDateEdit->date().toString("yyyy-MM-dd"));

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPesanan::on_pushButton_2_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("UPDATE pesanan SET kode_pelanggan=:kode_pelanggan, "
                "tgl_kirim=:tgl_kirim WHERE kode_pesanan=:kode_pesanan");
    sql.bindValue(":kode_pesanan",ui->kode_pesananLineEdit->text());
    sql.bindValue(":kode_pelanggan",ui->kode_pelangganLineEdit->text());
    sql.bindValue(":tgl_kirim",ui->tgl_kirimDateEdit->date().toString("yyyy-MM-dd"));

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Ubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPesanan::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM pesanan WHERE kode_pesanan=:kode_pesanan");
    sql.bindValue(":kode_pesanan",ui->kode_pesananLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPesanan::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM pesanan WHERE kode_pesanan=:kode_pesanan");
    sql.bindValue(":kode_pesanan",ui->kode_pesananLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}

