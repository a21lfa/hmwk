#include <iostream>

using namespace std;
bool primo(int numero){
    bool res;
    int x;
    int cont=0;
    for(x=1;x<numero;x++){
        if(numero%x ==0)
            cont=cont+1;}
    if(cont>2)
        res = true;
    else
        res = false;



    return res;
}
int main()
{
    int numero;
    cout << "Ingrese el numero" << endl;
    cin>>numero;
    if (primo(numero))
            cout<<"El numero ingresado no es primo"<<endl;
    else
        cout<<"El numero ingresado si es primo"<<endl;
    return 0;
}
