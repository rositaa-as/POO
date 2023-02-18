#ifndef CAMION_H
#define CAMION_H

#include <iostream>

using namespace std;
class chofer;

class Camion
{
    private:
        ///Atributos
        string placa;
        string numSerie;

    public:
        int numAsientos;

        ///Metodos
        Camion();
        ~Camion();
        Camion(string, string, int);
        Camion(string, int);
        Camion(int);

        string getPlaca();
        void setPlaca(string);

        string getNumSerie();
        void setNumSerie(string);

        void encender();
        void apagar();
        void frenar();

        friend class Chofer;
        friend void datosPrivados(Camion);
};
#endif // CAMION_H

class Chofer
{
    public:
        Camion uno;

        Chofer();
        void mostrar();

    protected:

    private:

    friend class Camion;
    friend void datosChofer();
};
//#endif // CHOFER_H


