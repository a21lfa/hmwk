#include <iostream>

using namespace std;

int mayor(int arr[], int m){
    int mayor=arr[0];
    for(int x=0;x<m;x++){
        mayor = (arr[x] > mayor) ? arr[x] :  mayor;
    }
    return mayor;
}
int menor(int arr[],int m){
    int menor = arr[0];
    for(int j=0;j<m;j++){
        menor = (arr[j] < menor) ? arr[j] : menor;
            menor = arr[j];
    }
    return menor;
}
int suma(int arr[],int m){
    int ad = 0;
    int prom;
    for(int y=1;y<m;y++){
        ad = ad + arr[y];
    }
    prom = ad/m;
    return prom;
}
int main(){
    int m = 9;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<< mayor(arr,m) << endl;
    cout<< menor(arr,m) << endl;
    cout<< suma(arr,m)  << endl;
    return 0;
}
