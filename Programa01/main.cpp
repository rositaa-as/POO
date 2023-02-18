#include <iostream>
#include "duenio.h"
#include "mascota.h"

using namespace std;

int main()
{
    duenio c1;
    mascota c2;

    c2.setNombreMascota("Dulce");
    c1.setEdad(20);
    c1.setNombre("Rosa");
    c1.setDireccion("Azucena 371");
    c1.setTelefono("1234537899");
    c1.setMascota(c2.getNombreMascota()); //Pasar valor de un atributo a otro

    c2.setColor("cafe");
    c2.setRaza("Salchicha");

    c2.setDuenio(c1.getNombre());

    cout << " Datos del Dueño"<< endl;
    cout << "Nombre: " << c1.getNombre() << endl;
    cout << "Direccion: " << c1.getDireccion() << endl;
    cout << "Tel: " << c1.getTelefono()<<endl;
    cout << "Nombre de la mascota" << c1.getMascota()<<endl<<endl;

    cout << " Datos de la mascota" << endl;
    cout<< "Color: " << c2.getColor()<<endl;
    cout << "Raza: "<< c2.getRaza()<< endl;
    cout << "Nombre: "<< c2.getNombreMascota()<<endl;
    cout << "Nombre del dueño: "<< c2.getDuenio()<<endl;

    c1.~duenio();

    return 0;
}
