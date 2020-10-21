#ifndef LABORATORIO_H
#define LABORATORIO_H
#include <iostream>
#include <fstream>
#include "computadora.h"
using namespace std;
class Laboratorio{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarcomputadora(const Computadora &c);
    void mostrar();
    void respaldar();
    void recuperar();
    friend Laboratorio& operator<<(Laboratorio &out, const Computadora &compu)
    {
        out.agregarcomputadora(compu);

        return out;
    }
};
#endif
