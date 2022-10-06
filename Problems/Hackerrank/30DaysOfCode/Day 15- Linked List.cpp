//Task
//Complete the insert function  so that it creates a new Node
// (pass data as the Node constructor argument) and inserts it at
//  the tail of the linked list referenced by the head parameter.
// Once the new node is added, return the reference to the head node.

//Note: The head  argument is null for an empty list.

//Input Format
//The first line contains T, the number of elements to insert.
//Each of the next T lines contains an integer to insert at the end of the list.

//Output Format
//Return a reference to the head node of the linked list.

//Sample Input
//4     
//2      
//3
//4
//1       
//Sample Output
//2 3 4 1
//






#include <iostream>
#include <cstddef>
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

    Node* insert(Node* head, int data)
    {
        Node* freshNode = new Node(0);

        freshNode->data = data;
        // since this will be the last node so it will point to NULL
        freshNode->next = NULL;

        //need this if there is no node present in linked list at all
        if (head == NULL)
        {
            head = freshNode;
            return head;
        }

        Node* temp = head;

        // traverse to the last node of Linked List 
        while (temp->next != NULL)
            temp = temp->next;

        // assign last node's next to this freshNode
        temp->next = freshNode;

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
    while (T-- > 0) {
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);

}