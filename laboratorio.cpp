#include "laboratorio.h"
Laboratorio::Laboratorio(){
    cont=0;
}
void Laboratorio::agregarcomputadora(const Computadora &c){
    if (cont<5){
        arreglo[cont]=c;
        cont++;
    }
    else{
        cout<<"el arreglo esta lleno"<<endl;
    }
}
void Laboratorio::mostrar(){
    cout << left;
    cout << setw(10) << "nombre";
    cout << setw(10) << "so";
    cout << setw(10) << "ram";
    cout << setw(10) << "precio";
    cout << endl;

    for (size_t i = 0; i < cont; ++i) {
        Computadora &compu = arreglo[i];
        cout << compu << endl;
    }
}
