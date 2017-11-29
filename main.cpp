#include "final.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Final w;
    w.show();

    return a.exec();
}
