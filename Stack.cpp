#include "Stack.hpp"
#include <iostream>

int Stack::n_stack = 0;

Stack::Stack() : capacity(10) {
    this->size = 0;
    this->data = new int[this->capacity];
    n_stack += 1;
}

Stack::Stack(int cap) : capacity(cap) {
    this->size = 0;
    this->data = new int[this->capacity];
    n_stack += 1;
}

Stack::Stack(const Stack& s) : capacity(s.capacity) {
    this->size = s.size;
    this->data = new int[s.capacity];
    for (int i = 0; i < this->capacity; i++) {
        this->data[i] = s.data[i];
    }
    n_stack += 1;
}

Stack::~Stack() {
    delete[] this->data;
}

void Stack::push(int x) {
    if (this->size < this->capacity) {
        this->data[this->size] = x;
        this->size++;
    }
}

int Stack::pop() {
    int top = 0;
    if (this->size > 0) {
        this->size--;
        top = this->data[this->size];
    }
    return top;
}

int Stack::getNumOfStack() {
    return n_stack;
}

int Stack::top() const {
    int top = 0;
    if (this->size > 0) {
        top = this->data[this->size - 1];
    }
    return top;
}
