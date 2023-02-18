#ifndef CHOFER_H
#define CHOFER_H
#include "Camion.h"

using namespace std;

class Chofer
{
    public:
        Camion uno;

        Chofer();
        void mostrar();

    protected:

    private:

    friend class Camion;
    //friend datosPrivados();
};

#endif // CHOFER_H
