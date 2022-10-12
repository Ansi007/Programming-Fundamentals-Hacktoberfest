#ifndef SLLIST
#define SLLIST

#include <iostream>


using namespace std;

template <class T>
class Node{
public:
    T data;
    Node* next;
    Node()
    {
        next = nullptr;
    }
};

template <class T>
class LinkedList{
    Node<T> *head, *tail;
    
public:
    LinkedList()
    {
        head = tail = nullptr;
    }

    Node<T>* getHead()
    {
        return this->head;
    }

    void setHead(Node<T>* head)
    {
        this->head = head;
    }

    void InsertAtTail(T x)
    {
        Node<T> *temp = new Node<T>;
        temp->data = x;
        temp->next = nullptr;
        if(tail == nullptr && head == nullptr)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }        
    }

    int Count()
    {
        Node<T> *p = new Node<T>;
        p = head;
        int c = 0;
        if(head == nullptr)
            return 0;
        else
        {
            while(p!=nullptr)
            {
                c++;
                p = p->next;
            }
        }   
        return c; 
    }

    void Display()
    {
        int i;
        Node<T> *p;
        for (p = head; p!=nullptr; p = p->next)
        {
            cout << p->data << '\n';
        }
        cout << '\n';
    }
   
    Node<T>* findMid(Node<T>* head) 
    {
        Node<T>* slow = head;
        Node<T>* fast = head -> next;
        
        while(fast != NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next; 
        }
        return slow;
    }

    Node<T>* merge(Node<T>* left, Node<T>* right) {

        if(left == NULL)
            return right;

        if(right == NULL)
            return left;

        Node<T>* ans = new Node<T>;
        Node<T>* temp = ans;

        //merge 2 sorted Linked List
        while(left != NULL && right != NULL) {
            if(left -> data < right -> data ) {
                temp -> next = left;
                temp = left;
                left = left -> next;
            }
            else
            {
                temp -> next = right;
                temp = right;
                right = right -> next;
            }
        }

        while(left != NULL) {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }

        while(right != NULL) {
            temp -> next = right;
            temp = right;
            right = right -> next;
        }

        ans = ans -> next;
        return ans;

    }

    Node<T>* mergeSort(Node<T> *head) {
        //base case
        if( head == NULL || head -> next == NULL ) {
            return head;
        }
        
        // break linked list into 2 halvs, after finding mid
        Node<T>* mid = findMid(head);
        
        Node<T>* left = head;
        Node<T>* right = mid->next;
        mid -> next = NULL;
        
        //recursive calls to sort both halves
        left = mergeSort(left);
        right = mergeSort(right);
        
        //merge both left and right halves
        Node<T>* result = merge(left, right);
        
        return result;
    }

    void mergeSort()
    {
        this->head = mergeSort(this->head);
    }

    bool searchUser(int id)
    {
        Node<T> *p = new Node<T>;
        if(head == nullptr)
            return false;
        else
        {
            p = head;
            while(p)
            {
                if(p->data.getId() == id)
                    return true;
                p = p->next;
            }
        }
        return false;
    }
};


#endif