#ifndef NODE
#define NODE

#include <iostream>
using namespace std;

template <class T>

class Node{
public:
    T data;
    Node* next;
    Node()
    {
        next = NULL;
    }
};

#endif