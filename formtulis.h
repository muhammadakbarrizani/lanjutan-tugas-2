#ifndef FORMTULIS_H
#define FORMTULIS_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class FormTulis;
}

class FormTulis : public QWidget
{
    Q_OBJECT

public:
    explicit FormTulis(QWidget *parent = nullptr);
    ~FormTulis();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::FormTulis *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMTULIS_H
