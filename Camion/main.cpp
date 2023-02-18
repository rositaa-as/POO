#include "Camion.h"
#include "Chofer.h"
#include <iostream>
using namespace std;

int main()
{

    Camion c1(45);
    Camion c2("aaaaaa","000:1111", 45);

    //clase amiga
    Chofer conductor;
    conductor.mostrar();

    datosPrivados(c1);
    datosPrivados(c2);

    //int dato(48);
    //nt *ptr;

    //ptr=&dato;

    //cout<<dato<<endl;
    //cout<<ptr<<endl;
    //cout<<*ptr<<endl;
    //cout<<&ptr<<endl;

    //Camion *camionDina = new Camion();




    //camionDina->frenar();


    //c1.apagar();
    //c1.encender();
    //c2.setNumSerie("AHHHHHHH");

    //cout<<c1.getNumSerie()<<endl;
    //cout<<c1.getPlaca()<<endl;

    //c1.setPlaca(c2.getPlaca());

    //c2.encender();
    //c2.~Camion();

    return 0;
}
