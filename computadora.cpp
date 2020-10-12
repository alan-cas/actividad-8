#include "computadora.h"
Computadora::Computadora(){

}
Computadora::Computadora(const string &n,const string &s,int r,float p){
    this->nombre=n;
    this->so=s;
    this->ram=r;
    this->precio=p;
}
void Computadora::setNombre(const string &n){
    nombre=n;
}
string Computadora::getNombre(){
    return nombre;
}
void Computadora::setSo(const string &s){
    so=s;
}
string Computadora::getSo(){
    return so;
}
void Computadora::setRam(const int r){
    ram=r;
}
int Computadora::getRam(){
    return ram;
}
void Computadora::setPrecio(const  float p){
    precio=p;
}
float Computadora::getPrecio(){
    return precio;
}
