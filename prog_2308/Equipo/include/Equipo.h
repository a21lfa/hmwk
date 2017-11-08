#ifndef EQUIPO_H
#define EQUIPO_H
#include<string>
#include<iostream>
#include"Jugador.h"
using namespace std;

class Equipo
{
    public:
        Jugador num[11];
        string nombre;
        Equipo();
        Equipo(string nombre,Jugador num[11]);
        void IngresarNombre(string name);
        void Jugadores(Jugador num[11]);
        void print();
};

#endif // EQUIPO_H
