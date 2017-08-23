#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"ingresa: "<<endl;
    cin >> a;
    if (a%4==0){
        if (a%100!=0||a%400=0)
            cout<<"El año es bisciesto"<<endl;
        else
            cout<<"El año no es bisciesto"<<endl;
    return 0;
}
