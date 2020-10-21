#include <iostream>
#include "computadora.h"
#include "laboratorio.h"
using namespace std;

int main()
{
    Computadora c1;
    Laboratorio l;
    Computadora c2=Computadora("dell","windows",6,200.0);
    Computadora c3=Computadora("hp","windows",4,100.0);
    Computadora c4=Computadora("mac","windows",8,250.0);
    l<<c2;
    l<<c3;
    l<<c4;
    l.respaldar();
    cin>>c1;
    l<<c1;
    cout<<"mostrar"<<endl;
    l.mostrar();
    cout<<"recuperar"<<endl;
    l.recuperar();
    cout<<"mostrar con los recuperados"<<endl;
    l.mostrar();
    cout<<"respaldar c1"<<endl;
    l.respaldar();
    return 0;
}
