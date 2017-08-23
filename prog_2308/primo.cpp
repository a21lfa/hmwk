#include <iostream>

using namespace std;

int main()
{
    int x;
    int cont=0;
    int numero;
    cout << "Introduce un numero" << endl;
    cin >> numero;
    for(x=1;x<numero;x++){
        if(numero%x ==0)
            cont=cont+1;}
    if(cont>2)
        cout<<"El numero ingresado no es primo"<<endl;
    else
        cout<<"El numero ingresado si es primo"<<endl;


    return 0;
}

