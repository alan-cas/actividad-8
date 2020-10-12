#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
using namespace std;
class Computadora{
    string nombre;
    string so;
    int ram;
    float precio;
public:
    Computadora();
    Computadora(const string &n,const string &s,int r,float p);
    void setNombre(const string &n);
    string getNombre();
    void setSo(const string &s);
    string getSo();
    void setRam (const int r);
    int getRam();
    void setPrecio(const float p);
    float getPrecio();
};
#endif
