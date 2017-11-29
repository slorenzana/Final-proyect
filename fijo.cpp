#include "fijo.h"
#include "ui_fijo.h"
#include <QString>
#include <cmath>
fijo::fijo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fijo)
{
    ui->setupUi(this);
    connect(ui->ejecutar,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->salir,SIGNAL(clicked()),this,SLOT(close()));
}
fijo::~fijo()
{
    delete ui;
}


    void fijo::metodo(){
      xaa=ui->xa->value();
      eii=ui->e1->value();
      double in=eii;
      xi=xaa;
      double ea=100.00;
      double gx;
      int i;
      while(ea>eii){
          gx=cos(xaa);
          xaa=gx;
          ea= abs (100*((xaa-xi)/(xaa)));
          xi=xaa;
          i=i+1;

      }
        ui->lcdvalori->display(i);
        ui->lcdvalor->display(xaa);
        ui->lcdei->display(in);
        ui->lcdef->display(ea);
    }

    void fijo::borrar(){
        ui->xa->setValue(0.0);
        ui->e1->setValue(0.0);
    }


