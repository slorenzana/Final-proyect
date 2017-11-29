#include "derivacion.h"
#include "ui_derivacion.h"

derivacion::derivacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::derivacion)
{
    ui->setupUi(this);
    connect(ui->pushButton_entrar,SIGNAL(clicked()),this,SLOT(deri()));
}

derivacion::~derivacion()
{
    delete ui;
}
void derivacion::deri(){
    h=ui->h->value();
    xi=ui->xi->value();
    ximas1=ui->ximas1->value();
    ximas2=ui->ximas2->value();
    ximas3=ui->ximas3->value();
    ximas4=ui->ximas4->value();
    ximas5=ui->ximas5->value();
    ximin1=ui->ximin1->value();
    ximin2=ui->ximin2->value();
    ximin3=ui->ximin2->value();
    ximin4=ui->ximin4->value();
    ximin5=ui->ximin5->value();

    e1=(-0.1*(xi*xi*xi*xi))-(0.15*(xi*xi*xi))-(0.5*(xi*xi))-(0.25*xi)+1.2;
    e2=-(0.4*(xi*xi*xi))-(0.45*(xi*xi))-xi-0.25;
    e3=-(1.2*(xi*xi))-(0.9*xi)-1;
    e4=-(2.4*xi)-0.9;

    f1xade=(-fximas2+(4*fximas1)-(3*fxi))/(2*h);
    f2xade=(-fximas3+(4*fximas2)-(5*fximas1)+(2*fxi))/(h*h);
    f3xade=((-3*fximas4)+(14*fximas3)-(24*fximas2)+(18*fximas1)-(5*fxi))/(2*(h*h*h));
    f4xade=((-2*fximas5)+(11*fximas4)-(24*fximas3)+(26*fximas2)-(14*fximas1)+(3*fxi))/(h*h*h*h);

        f1xcen=(-fximas2+(8*fximas1)-(8*fximin1)+fximin2)/(12*h);
        f2xcen=(-fximas2+(16*fximas1)-(30*fxi)+(16*fximin1)-fximin2)/(12*(h*h));
        f3xcen=(-fximas3+(8*fximas2)-(13*fximas1)+(13*fximin1)-(8*fximin2)+fximin3)/(8*(h*h*h));
        f4xcen=(-fximas3+(12*fximas2)+(39*fximas1)+(56*fxi)-(39*fximin1)+(12*fximin2)+fximin3)/(6*(h*h*h*h));

    f1xat=((3*fxi)-(4*fximin1)+fximin2)/(2*h);
    f2xat=((2*fxi)-(5*fximin1)+(4*fximin2)-fximin3)/(h*h);
    f3xat=((5*fxi)-(18*fximin1)+(24*fximin2)-(14*fximin3)+(3*fximin4))/(2*(h*h*h));
    f4xat=((3*fxi)-(14*fximin1)+(26*fximin2)-(24*fximin3)+(11*fximin4)-(2*fximin5))/(h*h*h*h);

    ef1xade=(((e1-f1xade)/e1)*100);
    ef2xade=(((e2-f2xade)/e2)*100);
    ef3xade=(((e3-f3xade)/e3)*100);
    ef4xade=(((e4-f4xade)/e4)*100);

        ef1xade=(((e1-f1xade)/e1)*100);
        ef2xade=(((e2-f2xade)/e2)*100);
        ef3xade=(((e3-f3xade)/e3)*100);
        ef4xade=(((e4-f4xade)/e4)*100);

    ef1xade=(((e1-f1xade)/e1)*100);
    ef2xade=(((e2-f2xade)/e2)*100);
    ef3xade=(((e3-f3xade)/e3)*100);
    ef4xade=(((e4-f4xade)/e4)*100);

    ui->f1xade->display(f1xade);
    ui->f2xade->display(f2xade);
    ui->f3xade->display(f3xade);
    ui->f4xade->display(f4xade);
        ui->ef1xade->display(ef1xade);
        ui->ef2xade->display(ef2xade);
        ui->ef3xade->display(ef3xade);
        ui->ef4xade->display(ef4xade);
            ui->f1xcen->display(f1xcen);
            ui->f2xcen->display(f2xcen);
            ui->f3xcen->display(f3xcen);
            ui->f4xcen->display(f4xcen);
                ui->ef1xcen->display(ef1xcen);
                ui->ef2xcen->display(ef2xcen);
                ui->ef3xcen->display(ef3xcen);
                ui->ef4xcen->display(ef4xcen);
                    ui->f1xat->display(f1xat);
                    ui->f2xat->display(f2xat);
                    ui->f3xat->display(f3xat);
                    ui->f4xat->display(f4xat);
                        ui->ef1xat->display(ef1xat);
                        ui->ef2xat->display(ef2xat);
                        ui->ef3xat->display(ef3xat);
                        ui->ef4xat->display(ef4xat);
}
