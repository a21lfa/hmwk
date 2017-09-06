#include <iostream>

using namespace std;

bool year(int x){
    bool res;
    if(x%4==0){
        if (x%100!=0||x%400==0)
            res = true;
        else
            res = false;
    }
    return res;
}
int main(){
    int x;
    cout << "Ingrese el año" << endl;
    cin>>x;

    if (year(x)) {
        cout<<"El año es bisciesto"<<endl;
    }
    else
        cout<<"El año no es bisciesto"<<endl;
    return 0;
}
