// stack.h
#ifndef STACK_H
#define STACK_H

class Stack {
private:
    int size;
    int capacity;
    int* data;
public:
    Stack();                // default constructor
    Stack(int cap);         // user defined constructor
    Stack(const Stack& s);  // copy constructor
    ~Stack();               // destructor

    void push(int x);       // menambahkan isi stack
    int pop();              // mengambil dan menghapus top dari stack
};

#endif
