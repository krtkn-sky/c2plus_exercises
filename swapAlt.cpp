#include <iostream>
using namespace std;

void manualSwap(int arr[],int a,int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main(){
    int test[] = {1,2,3,4,5};
    for(int i=0;i<5;i+=2){
        manualSwap(test,i,i+1);
        cout << test[i] << " ";
    }
}