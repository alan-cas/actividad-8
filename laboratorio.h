#ifndef LABORATORIO_H
#define LABORATORIO_H
#include <iostream>
#include "computadora.h"
using namespace std;
class Laboratorio{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarcomputadora(const Computadora &c);
    void mostrar();
};
#endif