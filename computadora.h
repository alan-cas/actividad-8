#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
#include <iomanip>
#include <string>
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
    friend ostream& operator<<(ostream &out, const Computadora &compu)
    {
        out << setw(10) << compu.nombre
            << setw(10) << compu.so
            << setw(10) << compu.ram
            << setw(10) << compu.precio;


        return out;
    }
    friend istream& operator>>(istream &in, Computadora &compu)
    {
        string temp;
        float temp_d;
        int temp_i;


        cout << "nombre: ";
        getline(cin, temp);
        compu.setNombre(temp);

        cout << "sistema operativo: ";
        getline(cin, temp);
        compu.setSo(temp);

        cout << "ram: ";
        getline(cin, temp);
        temp_i=stoi(temp);
        compu.setRam(temp_i);

        cout << "precio: ";
        getline(cin, temp);
        temp_d=stof(temp);
        compu.setPrecio(temp_d);

        return in;
    }
};
#endif
