#ifndef DUENIO_H
#define DUENIO_H
#include <iostream>

using namespace std;

class duenio
{
    private:
        string nombre;
        int edad;
        float estatura;
        float peso;
        string direccion;
        string telefono;
        string mascota;

    public:
        ///metodos
        duenio();
        ~duenio();

        duenio(string,int,float,float,string,string,string);
        duenio(string,string,string);
        duenio(float,float);

        string getNombre();
        void setNombre(string);

        int getEdad();
        void setEdad(int);

        float getEstatura();
        void setEstatura(float);

        float getPeso();
        void setPeso(float);

        string getDireccion();
        void setDireccion(string);

        string getTelefono();
        void setTelefono(string);

        string getMascota();
        void setMascota(string);

};

#endif // DUENIO_H
