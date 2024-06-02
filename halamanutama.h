#ifndef HALAMANUTAMA_H
#define HALAMANUTAMA_H

#include <QMainWindow>
#include <formpelanggan.h>
#include <formpesanan.h>
#include <formtulis.h>
#include <formbarang.h>
#include <formkembali.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class HalamanUtama;
}
QT_END_NAMESPACE

class HalamanUtama : public QMainWindow
{
    Q_OBJECT

public:
    HalamanUtama(QWidget *parent = nullptr);
    ~HalamanUtama();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::HalamanUtama *ui;
    FormPelanggan *plgForm;
    FormPesanan *psnForm;
    FormTulis *tlsForm;
    Formbarang *brgForm;
    Formkembali *kblForm;
};
#endif // HALAMANUTAMA_H
