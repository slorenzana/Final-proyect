#include "euler_m.h"
#include "ui_euler_m.h"
#include <QTableWidget>

Euler_M::Euler_M(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Euler_M)
{
    ui->setupUi(this);
    ui->setupUi(this);

    /*In here we conect th GUI with the variables*/
    connect(ui->Inferior,SIGNAL(valueChanged(double)),this,SLOT(activara()));
    connect(ui->Superior,SIGNAL(valueChanged(double)),this,SLOT(activara()));
    connect(ui->Incremento,SIGNAL(valueChanged(double)),this,SLOT(activarb()));
    connect(ui->Inicia,SIGNAL(clicked()),this,SLOT(ejecutar()));
    connect(ui->Limpia,SIGNAL(clicked()),this,SLOT(limpiar()));

    ui->Inicia->setDisabled(true);
    ui->TablaY->setDisabled(true);
    ui->Incremento->setDisabled(true);
}

double Euler_M::x(double f){
    /*Fuction for the differential equation*/
    return((-2*(f*f*f))+(12*(f*f))-(20*(f))+8.5);
}

double Euler_M::y(double g){
    /*Fuction for the integrated equation*/
    return(-(0.5*(g*g*g*g))+(4*(g*g*g))-(10*(g*g))+(8.5*g)+1);
}

void Euler_M::activara(){
    /*In this slot, the value of the spinbox is incremented*/
    xinf=ui->Inferior->value();
    xsup=ui->Superior->value();
            if(xinf!=xsup){
                ui->Incremento->setDisabled(false);
            }
    else{
        ui->Incremento->setDisabled(true);
    }
}
void Euler_M::activarb(){
    h=ui->Incremento->value();
    if(h!=0){
        ui->Inicia->setDisabled(false);
    }
    else{
        ui->Inicia->setDisabled(true);
    }
}

void Euler_M::ejecutar(){
            double inum=0;
            QStringList A;
            QString temporal;
    inum=((xsup-xinf)/h);
    intervalos=inum;
            double puntosx[intervalos];
            double yi[intervalos];
            double yreal[intervalos];
    puntosx[0]=xinf, puntosx[intervalos]=xsup;
    yi[0]=y(xinf), yreal[0]=y(xinf);
                for(i=1;i<=intervalos;i++){
                    puntosx[i]=puntosx[i-1]+h;
                    temporal.setNum(puntosx[i]);
                    A << temporal;
                    yi[i]=(yi[i-1])+(x(puntosx[i-1]))*h;
                    yreal[i]=y(puntosx[i]);
                }
        temporal.setNum(xsup);
        A << temporal;
    ui->TablaY->setDisabled(false);
    ui->TablaY->setRowCount(intervalos);
    ui->TablaY->setVerticalHeaderLabels(A);
        for(i=0;i<intervalos;i++){
            ui->TablaY->setItem(i,0,new QTableWidgetItem(QString::number(yi[i+1])));
            ui->TablaY->setItem(i,1,new QTableWidgetItem(QString::number(yreal[i+1])));
        }
    }
void Euler_M::limpiar(){

    ui->Incremento->setValue(0.0);
    ui->Inferior->setValue(0.0);
    ui->Superior->setValue(0.0);
    ui->TablaY->clearContents();
}

Euler_M::~Euler_M()
{
    delete ui;
}
