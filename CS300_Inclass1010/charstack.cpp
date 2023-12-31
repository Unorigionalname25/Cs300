#include "charstack.h"

CharStack::CharStack() {
    top = nullptr;
    count = 0;
}

CharStack::~CharStack() {
    clear();
}

int CharStack::size()  {
    return count;
}

bool CharStack::isEmpty()  {
    return count == 0;
}

void CharStack::clear() {
    while (top != nullptr) {
        node* temp = top;
        top = top->next;
        delete temp;
    }
    count = 0;
}

void CharStack::push(char ch) {
    top = new node(ch, top);
    count++;
}

char CharStack::pop() {
    if (isEmpty()) {

        return '\0';
    }

    node* temp = top;
    char ch = temp->data;
    top = top->next;
    delete temp;
    count--;
    return ch;
}

char CharStack::peek() {
    if (isEmpty()) {

        return '\0';
    }
    return top->data;
}
