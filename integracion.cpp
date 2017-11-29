#include "integracion.h"
#include "ui_integracion.h"

Integracion::Integracion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Integracion){
    ui->setupUi(this);
    connect(ui->Calcular,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
    }

void Integracion::metodo(){
    /*Declaration of variables to the private slot*/
    QString temp, temp1;
    double B[11];
    double H=ui->h->value();
    double integral=0, integralF0=0, integralFn=0;
    int i;
    /*We recover the data from the Spinboxes, and transfer to a variable*/
        B[5]=ui->fxi->value();
        B[1]=ui->fximin1->value();
        B[2]=ui->fximin2->value();
        B[3]=ui->fximin3->value();
        B[4]=ui->fximin4->value();
        B[0]=ui->fximin5->value();
        B[6]=ui->fximas1->value();
        B[7]=ui->fximas2->value();
        B[8]=ui->fximas3->value();
        B[9]=ui->fximas4->value();
        B[10]=ui->fximas5->value();

   /*The integral is evaluated*/
    integralF0=(H/2)*B[0];
    integralFn=(H/2)*B[10];

            for(i=1;i<10;i++){
                integral=integral+((H)*B[i]);
            }
    integral=integral+integralF0+integralFn;
    temp.append("Integral=").append(temp1.setNum(integral));
    ui->texto->setText(temp);
}
void Integracion::borrar(){
    ui->xi->setValue(0.0);
    ui->ximin1->setValue(0.0);
    ui->ximin2->setValue(0.0);
    ui->ximin3->setValue(0.0);
    ui->ximin4->setValue(0.0);
    ui->ximin5->setValue(0.0);
    ui->ximas1->setValue(0.0);
    ui->ximas2->setValue(0.0);
    ui->ximas3->setValue(0.0);
    ui->ximas4->setValue(0.0);
    ui->ximas5->setValue(0.0);
    ui->fximin1->setValue(0.0);
    ui->fximin2->setValue(0.0);
    ui->fximin3->setValue(0.0);
    ui->fximin4->setValue(0.0);
    ui->fximin5->setValue(0.0);
    ui->fximas1->setValue(0.0);
    ui->fximas2->setValue(0.0);
    ui->fximas3->setValue(0.0);
    ui->fximas4->setValue(0.0);
    ui->fximas5->setValue(0.0);
    ui->fxi->setValue(0.0);
    ui->h->setValue(0.0);
     ui->texto->clear();
}

Integracion::~Integracion()
{
    delete ui;
}
