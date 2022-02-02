#include <iostream>
#include "Stack.hpp"
using namespace std;

int main() {
    Stack s1;
    s1.push(2);
    s1.push(3);
    cout << s1.pop() << endl;
    
    Stack s2(15);
    s2.push(5);
    cout << s2.pop() << endl;

    Stack s3(s1);
    s3.push(1);
    cout << s3.pop() << endl;
    cout << s3.pop() << endl;
}
