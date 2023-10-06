#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Topmost element -> " << s.top() << endl;
    s.pop();
    cout << "Topmost after pop -> " << s.top() << endl;
    return 0;
}