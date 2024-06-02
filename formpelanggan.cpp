#include "formpelanggan.h"
#include "ui_formpelanggan.h"

FormPelanggan::FormPelanggan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPelanggan)
{
    ui->setupUi(this);

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_penjualan");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi";

    }
}

FormPelanggan::~FormPelanggan()
{
    delete ui;
}

void FormPelanggan::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO pelanggan (nama, alamat,telpon)"
                "VALUE (:nama,:alamat,:telpon)");
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telpon",ui->telponLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPelanggan::on_pushButton_2_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("UPDATE pelanggan SET alamat=:alamat, "
                "telpon=:telpon WHERE nama=:nama");
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telpon",ui->telponLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Ubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPelanggan::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM pelanggan WHERE nama=:nama");
    sql.bindValue(":nama",ui->namaLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPelanggan::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM pelanggan WHERE nama=:nama");
    sql.bindValue(":nama",ui->namaLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}

