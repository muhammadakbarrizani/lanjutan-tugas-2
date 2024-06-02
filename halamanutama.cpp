#include "halamanutama.h"
#include "ui_halamanutama.h"

HalamanUtama::HalamanUtama(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HalamanUtama)
{
    ui->setupUi(this);
    plgForm = new FormPelanggan;
    psnForm = new FormPesanan;
    tlsForm = new FormTulis;
    brgForm = new Formbarang;
    kblForm = new Formkembali;
}

HalamanUtama::~HalamanUtama()
{
    delete ui;
}

void HalamanUtama::on_pushButton_clicked()
{
    plgForm->show();
}


void HalamanUtama::on_pushButton_2_clicked()
{
    psnForm->show();
}


void HalamanUtama::on_pushButton_3_clicked()
{
    tlsForm->show();
}


void HalamanUtama::on_pushButton_4_clicked()
{
    brgForm->show();
}


void HalamanUtama::on_pushButton_5_clicked()
{
    kblForm->show();
}

