#ifndef COMPLEJO_H
#define COMPLEJO_H
using namespace std;

class Complejo
{
    public:
        int r;
        int i;

        Complejo();
        Complejo(int,int);
        Complejo Suma(Complejo j);
        Complejo Resta(Complejo k);
        Complejo Mult(Complejo m);
        void Escalado(int n);
        bool Igualdad(Complejo j);
        void print();
        };

#endif // COMPLEJO_H
