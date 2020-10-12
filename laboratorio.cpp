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
    for(int i=0;i<5;i++){
        Computadora c=arreglo[i];
        cout<<"nombre: "<<c.getNombre()<<endl;
        cout<<"so: "<<c.getSo()<<endl;
        cout<<"ram: "<<c.getRam()<<endl;
        cout<<"precio: "<<c.getPrecio()<<endl;
    }
}
