#ifndef EULER_M_H
#define EULER_M_H

#include <QMainWindow>

namespace Ui {
class Euler_M;
}

class Euler_M : public QMainWindow
{
    Q_OBJECT

public:
    explicit Euler_M(QWidget *parent = 0);
    ~Euler_M();
        /*We declared the variables*/
        double xinf, xsup, h;
        int i,j,intervalos;
        double x(double f);
        double y(double g);

public slots:
    void activara();
    void activarb();
    void ejecutar();
    void limpiar();

private:
    Ui::Euler_M *ui;
};

#endif // EULER_M_H
