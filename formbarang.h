#ifndef FORMBARANG_H
#define FORMBARANG_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class Formbarang;
}

class Formbarang : public QWidget
{
    Q_OBJECT

public:
    explicit Formbarang(QWidget *parent = nullptr);
    ~Formbarang();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Formbarang *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMBARANG_H
