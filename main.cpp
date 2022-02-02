#include <iostream>
#include "Stack.hpp"
using namespace std;

int compareStackSize(const Stack& s1, const Stack& s2) {
    int result = 0;
    if (s1.size < s2.size) {
        result = -1;
    } else if (s1.size > s2.size) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

int main() {
    Stack s1;
    s1.push(2);
    s1.push(3);
    cout << s1.pop() << endl;
    cout << "Static: " << Stack::getNumOfStack() << endl;
    
    Stack s2(15);
    s2.push(5);
    cout << s2.pop() << endl;
    cout << "Static: " << Stack::getNumOfStack() << endl;


    Stack s3(s1);
    s3.push(1);
    cout << s3.pop() << endl;
    cout << "Static: " << Stack::getNumOfStack() << endl;

    cout << "Friend: " << compareStackSize(s1, s2) << endl;
    return 0;
}
