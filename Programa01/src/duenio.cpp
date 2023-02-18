#include "duenio.h"
#include "mascota.h"
#include <iostream>

using namespace std;

duenio::duenio()
{
    // Constructor 1
    nombre = "";
    edad = 0;
    estatura = 0;
    peso = 0;
    direccion = "";
    telefono = "";
    mascota = "";

}
duenio::duenio(string nombre,int edad,float estatura,float peso,string direccion, string telefono, string mascota)
{
    //constructor 2
    this->nombre=nombre;
    this->edad=edad;
    this->estatura=estatura;
    this->peso=peso;
    this->direccion=direccion;
    this->telefono=telefono;
    this->mascota=mascota;
}
duenio::duenio(string nombre,string direccion, string telefono)
{
    //constructor 3
    this->nombre="Rosa";
    this->direccion="Azucena371";
    this->telefono="3334845466";
}
duenio::duenio(float estatura, float peso)
{
    //constructor 4
    this->estatura= 1.59;
    this->peso= 58.5;

}

duenio::~duenio()
{
    //destructor
    cout<<"Adiós, hasta pronto :)"<<endl;
}

 // Métodos para obtener los valores- get
string duenio::getNombre()
{
      return nombre;
}
int duenio::getEdad()
{
    return edad;
}
float duenio::getEstatura()
{
    return estatura;
}
float duenio::getPeso()
{
    return peso;
}
string duenio::getDireccion()
{
    return direccion;
}
string duenio::getTelefono()
{
    return telefono;
}
string duenio::getMascota()
{
    return mascota;
}

// Métodos para establecer los valores-set
void duenio::setNombre(string nombre)
{
    this->nombre=nombre;
}
void duenio::setEdad(int edad)
{
    this->edad=edad;
}
void duenio::setEstatura(float estatura)
{
    this->estatura=estatura;
}
void duenio::setPeso(float peso)
{
    this->peso=peso;
}
void duenio::setDireccion(string direccion)
{
    this->direccion = direccion;
}
void duenio::setTelefono(string telefono)
{
    this->telefono = telefono;
}
void duenio::setMascota(string mascota)
{
    this->mascota=mascota;
}
