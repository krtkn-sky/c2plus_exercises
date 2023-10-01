#include <iostream>
using namespace std;

int sumOrTriple(int x,int y){
    return x == y ? (x+y)*3 : x+y;
}

int main(){
    cout << sumOrTriple(1,2) << endl;
    cout << sumOrTriple(3,2) << endl;
    cout << sumOrTriple(2,2) << endl;
}