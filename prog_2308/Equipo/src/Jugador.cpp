#include "Jugador.h"
#include <string>
#include<iostream>
using namespace std;

Jugador::Jugador() {
    name = "";
    pos = "";
    num = 0;
    agresividad = 0;
}

Jugador::Jugador(string x,string y,int z,int w)
{
    name = x;
    pos = y;
    num = z;
    agresividad = w;
}

void Jugador::setAgresividad(int x){
    agresividad = x;
}
void Jugador::setNombre(string y){
    name = y;
}
void Jugador::setNumero(int z){
        num = z;
}
void Jugador::setPosicion(string w){
        pos = w;
}
void Jugador::print(){
    cout<<"el jugador del seleccionado peruano "<<name<<" con la camiseta "<<num<<endl;
    if(agresividad>5)
        cout<<"Esta bravo, se pone bocon contra el referee"<<endl;
    else
        cout<<"Esta calmado no se palabrea con el arbitro"<<endl;
    }
