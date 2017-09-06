#include <iostream>

using namespace std;

int potencia(int n){
    int x;
    while(n!=2*x)
        x = x+1;
        if(n=2*x)
            cout<<"Es potencia de 2"<<endl;
        else
            cout<<"No es potencia"<<endl;
}
int main()
{
    int n;
    cout << "Ingrese X" << endl;
    cin >>n;
    potencia(n);
    return 0;
}
