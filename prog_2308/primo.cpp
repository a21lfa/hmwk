#include <iostream>

using namespace std;

int main()
{
    int x;
    int cont;
    int numero;
    cout << "Introduce un numero" << endl;
    cin >> numero;
    cont =0;
    for(x=0;x<numero;x=x+1){
        if(numero%x ==0){
            cont=cont+1;
            if(cont>2)
                cout<<"El numero ingresado no es par"<<endl;
            else
                cout<<"El numero ingresado si es par"<<endl;
        }
    }
    return 0;
}

