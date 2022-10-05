//Task
//A Node class is provided for you in the editor.
//A Node object has an integer data field, data,
//and a Node instance pointer, next, pointing to another 
//node(i.e.: the next node in a list).
//
//A removeDuplicates function is declared in your editor, 
//which takes a pointer to the head node of a linked list as a parameter.
//Complete removeDuplicates so that it deletes any duplicate nodes
//from the listand returns the head of the updated list.
//
//Note : The head pointer may be null, indicating that the
//list is empty.Be sure to reset your next pointer when performing 
//deletions to avoid breaking the list.
//
//Input Format
//The first line contains an integer, n, the number of nodes to be inserted.
//The n subsequent lines each contain an integer describing the data value 
//of a node being inserted at the list's tail.
//
//Constraints
//The data elements of the linked list argument will always be in non - decreasing order.
//
//Output Format
//Your removeDuplicates function should return the head of the 
//updated linked list.The locked stub code in your editor will 
//print the returned list to stdout.
//
//Sample Input
//6
//1
//2
//2
//3
//3
//4
//
//Sample Output
//1 2 3 4
//



#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class Solution
{
public:

    Node* removeDuplicates(struct Node* head)
    {
        struct Node* temp1, * temp2, * duplicate;
        //duplicate: to delete duplicate nodes
        //temp1: to iterate each element of list
        //temp2: to compare each element of list with picked element
        temp1 = head;

        //this loop iterates all elements of linked list one by one
        while (temp1 != NULL && temp1->next != NULL)
        {
            temp2 = temp1;

            //compares each element of list with all other elements
            while (temp2->next != NULL) {
                /* If duplicate then delete it */
                if (temp1->data == temp2->next->data)
                {
                    duplicate = temp2->next;//duplicate= the node to be deleted
                    temp2->next = temp2->next->next;
                    delete (duplicate);
                }
                else
                {
                    temp2 = temp2->next;
                }
            }
            temp1 = temp1->next;
        }
        return head;
    }

    Node* insert(Node* head, int data)
    {
        Node* p = new Node(data);
        if (head == NULL)
        {
            head = p;

        }
        else if (head->next == NULL)
        {
            head->next = p;

        }
        else
        {
            Node* start = head;
            while (start->next != NULL)
            {
                start = start->next;
            }
            start->next = p;

        }
        return head;


    }
    void display(Node* head)
    {
        Node* start = head;
        while (start)
        {
            cout << start->data << " ";
            start = start->next;
        }
    }
};

int main()
{
    Node* head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;
        head = mylist.insert(head, data);
    }
    head = mylist.removeDuplicates(head);

    mylist.display(head);

}