#include "Equipo.h"
#include "Jugador.h"

Equipo::Equipo()
{
    cout<<"EMPTY TEAM"<<endl;
}

Equipo::Equipo(string name, Jugador numero[11])
{
    IngresarNombre(name);
    Jugadores(numero);
}
void Equipo::IngresarNombre(string name)
{
    nombre = name;
}
void Equipo::Jugadores(Jugador num[11])
{
    string Nom, Pos;
    int numer, agresiv;
    for(int i = 0;i<=11;i++){
        cout<<"Nombre?"<<endl;
        cin >>Nom;
        cout<<"Camiseta?"<<endl;
        cin>>numer;
        cout<<"Posicion?"<<endl;
        cin>>Pos;
        cout<<"Agr?"<<endl;
        cin>>agresiv;

        num[i];
        }
}

void Equipo::print()
{
    cout<<"Equipo"<<nombre<<endl;
}
