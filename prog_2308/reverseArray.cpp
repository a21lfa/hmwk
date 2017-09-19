#include <iostream>

using namespace std;

void inverse(int arr[],int n){

        int x,y;
        for(int i=0;i<n;i++,n--){
            x=arr[n-1];
            y=arr[i];
            arr[n-1]=y;
            arr[i]=x;
        }
        //return arr;
}



int main()
{

    int arr[5]={1,2,3,4,5};
    inverse(arr,5);
    for(int i=0;i<5;i++){
         cout << arr[i] << endl;
    }
    return 0;
}