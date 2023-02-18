#ifndef MASCOTA_H
#define MASCOTA_H
#include <iostream>

using namespace std;

class mascota
{
    private:
        string nombreMascota;
        int edadMascota;
        string raza;
        string color;
        float peso;
        string comida;
        string duenio;
    public:
        mascota();
        ~mascota();

        mascota(string,int,string,string,float,string,string);
        mascota(string,int,string);
        mascota(string);

        string getNombreMascota();
        void setNombreMascota(string);

        int getEdadMascota();
        void setEdadMascota(int);

        string getRaza();
        void setRaza(string);

        string getColor();
        void setColor(string);

        float getPeso();
        void setPeso(float);

        string getComida();
        void setComida(string);

        string getDuenio();
        void setDuenio(string);
};

#endif // MASCOTA_H
