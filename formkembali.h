#ifndef FORMKEMBALI_H
#define FORMKEMBALI_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>


namespace Ui {
class Formkembali;
}

class Formkembali : public QWidget
{
    Q_OBJECT

public:
    explicit Formkembali(QWidget *parent = nullptr);
    ~Formkembali();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Formkembali *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMKEMBALI_H
