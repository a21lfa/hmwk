#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"ingresa: "<<endl;
    cin >> a;
    if (a%4==0){
        if (a%100!=0||a%400=0)
            cout<<"El a�o es bisciesto"<<endl;
        else
            cout<<"El a�o no es bisciesto"<<endl;
    return 0;
}
