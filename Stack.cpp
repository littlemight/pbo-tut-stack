#include "Stack.hpp"
#include <iostream>

Stack::Stack() {
    this->capacity = 10;
    this->size = 0;
    this->data = new int[this->capacity];
}

Stack::Stack(int cap) {
    this->capacity = cap;
    this->size = 0;
    this->data = new int[this->capacity];
}

Stack::Stack(const Stack& s) {
    this->capacity = s.capacity;
    this->size = s.size;
    this->data = new int[s.capacity];
    for (int i = 0; i < this->capacity; i++) {
        this->data[i] = s.data[i];
    }
}


Stack::~Stack() {
    delete[] this->data;
}

void Stack::push(int x) {
}

int Stack::pop() {
    return 2210;
}