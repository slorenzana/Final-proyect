#ifndef FIJO_H
#define FIJO_H

#include <QMainWindow>
namespace Ui {
class fijo;
}

class fijo : public QMainWindow
{
    Q_OBJECT

public:
    explicit fijo(QWidget *parent = 0);
    ~fijo();
    double x;
    double xaa;
    double xi;
    double eii;

private:
    Ui::fijo *ui;

public slots:
     void metodo();
     void borrar();
};

#endif // FIJO_H
