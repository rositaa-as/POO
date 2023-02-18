#include "Camion.h"

Camion::~Camion()
{
    cout<<"hola y adios"<<endl;
}

void datosPrivados(Camion a)
{
   cout<<a.placa<<"";
   cout<<a.numSerie<<endl;
}
Camion::Camion()
{
    //ctor
    numAsientos = 30;
    placa = "555-888";
    numSerie = "1334";
}


Camion::Camion(string numSerie, string placa, int numAsientos)
{
    this->numAsientos=numAsientos;
    this->placa=placa;
    this->numSerie=numSerie;
}

Camion::Camion(string p, int n)
{
    numAsientos=n;
    placa=p;
    numSerie="16546";
}

Camion::Camion(int numAsientos)
{
    this->numAsientos=numAsientos;
    placa="555-0000";
    numSerie="16546";
}
string Camion::getPlaca()
{
    return placa;
}

void Camion::setPlaca(string placa)
{
    this->placa=placa;
}

string Camion::getNumSerie()
{
    return numSerie;
}

void Camion::setNumSerie(string numSerie)
{
    this->numSerie=numSerie;
}

void Camion::encender()
{
    cout<<"Encendiendo"<<endl;
}

void Camion::apagar()
{
    cout<<"Apagando"<<endl;
}

void Camion::frenar()
{
    cout<<"Frenando"<<endl;
}

void Datoschofer (Camion a)
{

}
