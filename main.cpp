#include "halamanutama.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HalamanUtama w;
    w.show();
    return a.exec();
}
