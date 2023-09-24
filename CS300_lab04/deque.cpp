#include <iostream>
#include "deque.h"


Deque::Deque() : frontNode(nullptr), backNode(nullptr) {

}



void Deque::setTopofStack(Node* n) {
    Deque::frontNode = n;
    
}
void Deque::setBackofStack(Node* n){
    Deque::backNode = n;

}

void Deque::push_front(int i){
  Node* newnode = new Node(i, frontNode);
  setTopofStack(newnode);

    }
void Deque::push_back(int i){
  Node* newnode = new Node(i, backNode);
  setBackofStack(newnode);
  
}
Deque::Node* Deque::getBackofStack() {
    return backNode;
}
Deque::Node* Deque::getTopofStack() {
    return frontNode;
}

int Deque::pop_front(){
    if (frontNode!=nullptr){
        int val = frontNode->val;
        Node* ptrnewtop = frontNode->nextNode;

        delete frontNode;
        setTopofStack(ptrnewtop);
        return val;

    } else {
        std::cout<<"The stack is empty"<<std::endl;
        return 0;

    }
}
int Deque::pop_back(){
    if (backNode!=nullptr){
        int val = backNode->val;
        Node* ptrnewback = backNode->nextNode;

        delete backNode;
        setTopofStack(ptrnewback);
        return val;

    }else {
        std::cout<<"The stack is empty"<<std::endl;
        return 0;
        
    }
}

int Deque::peak_front() {
    if (frontNode!=nullptr){
        return Deque::frontNode->val;

    }else {
        std::cout<<"The stack is empty"<<std::endl;      
        return 0;  
    }
}

int Deque::peak_back(){
    if (backNode!=nullptr){
        return backNode->val;

    }else {
        std::cout<<"The stack is empty"<<std::endl;
        return 0;
    } 
}
void Deque::removeAll() {
    while (frontNode!= nullptr){
        int temp = pop_front();

    }
}

Deque::~Deque() {
    removeAll();
}