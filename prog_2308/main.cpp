#include <iostream>

using namespace std;

int main(){
    int fahr, celsius;
    int step, lower, upper;
    lower=0;
    upper=30;
    step=20;
    fahr=lower;
    while(fahr<=upper){
        celsius =5*(fahr-32)/9;
        cout << fahr<<"\t"<<celsius<<endl;
        fahr = fahr+step;
    }
    return 0;
}
