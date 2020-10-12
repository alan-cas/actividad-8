#include <iostream>
#include "computadora.h"
#include "laboratorio.h"
using namespace std;

int main()
{
    Computadora c1;
    Laboratorio l;
    c1.setNombre("dell");
    c1.setSo("linux");
    c1.setRam(6);
    c1.setPrecio(8000.00);
    Computadora c2=Computadora("hp","window",2,3000.00);
    Computadora c3=Computadora("mac","IOS",8,12000.00);
    Computadora c4=Computadora("sony","linux",6,8000.00);
    Computadora c5=Computadora("thinkpad","linux",6,7000.00);
    l.agregarcomputadora(c1);
    l.agregarcomputadora(c2);
    l.agregarcomputadora(c3);
    l.agregarcomputadora(c4);
    l.agregarcomputadora(c5);
    l.mostrar();
    return 0;
}
