#include "Complejo.h"
#include<iostream>


Complejo::Complejo(){
    r = 0;
    i = 0;
}

Complejo::Complejo(int a, int b){
    r = a;
    i = b;
}
Complejo Complejo::Suma(Complejo j)
{
    return Complejo(r+j.r,i+j.i);
}
Complejo Complejo::Resta(Complejo k)
{
    return Complejo(r-k.r,i-k.i);
}
void Complejo::Escalado(int n)
{
    r=r*n;
    i=i*n;
}
Complejo Complejo::Mult(Complejo m)
{
    return Complejo(r*m.r-i*m.i,r*m.i+i*m.r);
}
bool Complejo::Igualdad(Complejo s)
{
    if((r=s.r)&&(i=s.i))
        return true;
    else
        return false;
}
void Complejo::print()
{
    cout<<"("<<r<<","<<i<<")"<<endl;
}
