#ifndef FINAL_H
#define FINAL_H

#include <QMainWindow>
#include <fijo.h>
#include <mainwindow.h>
#include <nwrsn.h>
#include <regresionlineal.h>
#include <derivacion.h>
#include <eli_gauss.h>
#include <integracion.h>
#include <euler_m.h>


namespace Ui {
class Final;
}

class Final : public QMainWindow
{
    Q_OBJECT

public:
    explicit Final(QWidget *parent = 0);
    ~Final();


    fijo *metodo;
    MainWindow *metodo2;
    NWRSN *metodo3;
    regresionlineal *metodo4;
    derivacion *metodo5;
    Eli_Gauss *metodo6;
    Euler_M *metodo7;
    Integracion *metodo8;

private slots:
    void regresio();
    void biseccio();
    void newto();
    void pfijo();
    void deri();
    void gau();
    void eule();
    void inte();
    void salir();
private:
    Ui::Final *ui;
};

#endif // FINAL_H
