#include <iostream>
using namespace std;

bool thirty(int a,int b){
return a==30 || b==30 || (a+b==30);
}

int main(){
cout << thirty(30,0) << endl;
cout << thirty(25,5) << endl;
cout << thirty(20,30) << endl;
cout << thirty(20,25) << endl;
return 0;
}
