#include "final.h"
#include "ui_final.h"

Final::Final(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Final)
{
    ui->setupUi(this);
    metodo = new fijo();
    metodo2 = new MainWindow();
    metodo3 = new NWRSN();
    metodo4 = new regresionlineal();
    metodo5 = new derivacion();
    metodo6 = new Eli_Gauss();
    metodo7 = new Euler_M();
    metodo8 = new Integracion();

    connect(ui->bisec,SIGNAL(clicked()),this,SLOT(biseccio()));
    connect(ui->punt,SIGNAL(clicked()),this,SLOT(pfijo()));
    connect(ui->newt,SIGNAL(clicked()),this,SLOT(newto()));
    connect(ui->regr,SIGNAL(clicked()),this,SLOT(regresio()));
    connect(ui->integra,SIGNAL(clicked()),this,SLOT(inte()));
    connect(ui->deriva,SIGNAL(clicked()),this,SLOT(deri()));
    connect(ui->gaus,SIGNAL(clicked()),this,SLOT(gau()));
    connect(ui->eul,SIGNAL(clicked()),this,SLOT(eule()));
    connect(ui->sal,SIGNAL(clicked()),this,SLOT(salir()));

}

Final::~Final()
{
    delete ui;
}
void Final::biseccio(){
    metodo2->show();
}
void Final::pfijo(){
    metodo->show();
}
void Final::newto(){
    metodo3->show();
}
void Final::regresio(){
    metodo4->show();
}
void Final::deri(){
    metodo5->show();
}
void Final::gau(){
    metodo6->show();
}
void Final::eule(){
    metodo7->show();
}
void Final::inte(){
    metodo8->show();
}
void Final::salir(){
    delete metodo;
    delete metodo2;
    delete metodo3;
    delete metodo4;
    delete metodo5;
    delete metodo6;
    delete metodo7;
    delete metodo8;
}
