#include <iostream>
#include "computadora.h"
#include "laboratorio.h"
using namespace std;

int main()
{
    Computadora c1,c3;
    Laboratorio l;
    Computadora c2=Computadora("dell","windows",6,200.0);
    l.agregarcomputadora(c2);
    cin>>c3;
    l<<c3;
    l.mostrar();
    cin>>c1;
    cout<<c1;
    return 0;
}
