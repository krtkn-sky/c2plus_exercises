#include <iostream>
using namespace std;

bool within(int t){
return (t>=90 && t<=110) || (t>=190 && t<=210);
}

int main(){
cout << within(103) << endl;
cout << within(90) << endl;
cout << within(89) << endl;
cout << within(211) << endl;
return 0;
}
