#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>

using namespace std;

class Jugador
{
    public:
        string name, pos;
        int num, agresividad;
        Jugador();
        Jugador(string x, string y,int z, int w);
        void setNombre(string nam);
        void setPosicion(string plc);
        void setAgresividad(int agr);
        void setNumero(int numbr);
        void print();

};

#endif
