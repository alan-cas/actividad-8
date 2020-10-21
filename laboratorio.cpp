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
void Laboratorio::respaldar()
{
    ofstream archivo("computadora.txt");

    if (archivo.is_open())
    {
        for (size_t i = 0; i < cont; i++)
        {
            Computadora &compu = arreglo[i];
            archivo << compu.getNombre() << endl;
            archivo << compu.getSo() << endl;
            archivo << compu.getRam() << endl;
            archivo << compu.getPrecio() << endl;
        }

    }
    archivo.close();

}
void Laboratorio::recuperar()
{
    ifstream archivo("compuradoras.txt");

    if (archivo.is_open())
    {
        Computadora compu;
        string temp;
        float temp_f;
        int temp_i;

        while (true)
        {

            getline(archivo, temp);
            if (archivo.eof())
            {
            break;
            }
            compu.setNombre(temp);

            getline(archivo, temp);
            compu.setSo(temp);

            getline(archivo, temp);
            temp_i = stoi(temp);
            compu.setRam(temp_i);

            getline(archivo, temp);
            temp_f = stof(temp);
            compu.setPrecio(temp_f);

            agregarcomputadora(compu);
        }

    }
}
