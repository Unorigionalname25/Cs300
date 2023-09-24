#ifndef _deque_h
#define _deque_h
#include <iostream>
#include <vector>

class Deque {
    private:
    struct Node{
        int val;
        Node* nextNode;

        Node(int ci, Node* n){
            val = ci;
            nextNode = n;
        }
    };
    Node* frontNode;
    Node* backNode;
    public:
    Deque();
    ~Deque();
    void stack();

    Node* getTopofStack();
    Node* getBackofStack();


    void setTopofStack(Node* n);

    void setBackofStack(Node* n);

    void push_front(int i);

    void push_back(int i);


    int pop_front();
    int pop_back();


    int peak_front();
    int peak_back();


    void removeAll();






};







#endif