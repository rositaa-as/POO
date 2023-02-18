#include "mascota.h"
#include <iostream>

using namespace std;

mascota::mascota()
{
    //constructor 1
    nombreMascota = "";
    edadMascota = 0;
    raza = "";
    color="";
    peso = 0;
    comida= "";
    duenio = "";

}
mascota::mascota(string nombreMascota,int edadMascota, string raza, string color,float peso, string comida, string duenio)
{
    //costructor 2
    this->nombreMascota=nombreMascota;
    this->edadMascota=edadMascota;
    this->raza=raza;
    this->color=color;
    this->peso=peso;
    this->comida=comida;
    this->duenio=duenio;
}
mascota::mascota(string nombreMascota,int edad, string raza)
{
    //costructor 3
    this->nombreMascota="Dulce";
    this->edadMascota= 13;
    this->raza="Salchicha";
}
mascota::mascota(string color)
{
    //costructor 4
    this->color="cafe";
}
mascota::~mascota()
{
    //destructor
    cout<<"Guau guau"<<endl;
}

// Métodos para obtener los valores- get
string mascota::getNombreMascota()
{
      return nombreMascota ;
}
int mascota::getEdadMascota()
{
      return edadMascota ;
}
string mascota::getRaza()
{
      return raza;
}
string mascota::getColor()
{
      return color ;
}
float mascota::getPeso()
{
      return peso ;
}
string mascota::getComida()
{
      return comida;
}
string mascota::getDuenio()
{
      return duenio;
}

// Métodos para establecer los valores-set
void mascota::setNombreMascota(string nombreMascota )
{
    this->nombreMascota=nombreMascota;
}

void mascota::setEdadMascota(int edadMascota )
{
    this->edadMascota=edadMascota;
}

void mascota::setRaza(string raza )
{
    this->raza=raza;
}

void mascota::setColor(string color )
{
    this->color=color;
}

void mascota::setPeso(float peso )
{
    this->peso=peso;
}

void mascota::setComida(string comida )
{
    this->comida=comida;
}
void mascota::setDuenio(string duenio)
{
    this->duenio=duenio;
}
