#ifndef DERIVACION_H
#define DERIVACION_H

#include <QMainWindow>

namespace Ui {
class derivacion;
}

class derivacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit derivacion(QWidget *parent = 0);
    ~derivacion();
    float h;
    float e1;
    float e2;
    float e3;
    float e4;

    float ximin5;
    float ximin4;
    float ximin3;
    float ximin2;
    float ximin1;
    float xi;
    float ximas1;
    float ximas2;
    float ximas3;
    float ximas4;
    float ximas5;

    float fximin5;
    float fximin4;
    float fximin3;
    float fximin2;
    float fximin1;
    float fxi;
    float fximas1;
    float fximas2;
    float fximas3;
    float fximas4;
    float fximas5;

    float f1xade;
    float f2xade;
    float f3xade;
    float f4xade;
        float f1xcen;
        float f2xcen;
        float f3xcen;
        float f4xcen;
    float f1xat;
    float f2xat;
    float f3xat;
    float f4xat;

    float ef1xade;
    float ef2xade;
    float ef3xade;
    float ef4xade;
        float ef1xcen;
        float ef2xcen;
        float ef3xcen;
        float ef4xcen;
    float ef1xat;
    float ef2xat;
    float ef3xat;
    float ef4xat;

public slots:
    void deri();

private:
    Ui::derivacion *ui;
};

#endif // DERIVACION_H
