//Task
//A level - order traversal, also known as a breadth - first search, 
//visits each level of a tree's nodes from left to right, top to bottom. 
//You are given a pointer, root, pointing to the root of a binary search tree. 
//Complete the levelOrder function provided in your editor so that it
//prints the level-order traversal of the binary search tree.
//
//Hint: You'll find a queue helpful in completing this challenge. 
//
//Function Description
//Complete the levelOrder function in the editor below.
//
//levelOrder has the following parameter :
//-Node pointer root : a reference to the root of the tree
//
//Prints
//- Print node.data items as space - separated line of integers.No return value is expected.
//
//Input Format
//The first line contains an integer, T(the number of test cases).
//The T subsequent lines each contain an integer, n, denoting the value of an element that must be added to the BST.
//
//Output Format
//Print the  value of each node in the tree's level-order traversal as a single line of  space-separated integers.
//
//Sample Input
//6
//3
//5
//4
//7
//2
//1
//
//Sample Output
//3 2 5 1 4 7











#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node
{
public:
    int data;
    Node* left, * right;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};



class Solution
{
public:
    Node* insert(Node* root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }
        else
        {
            Node* cur;
            if (data <= root->data)
            {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else
            {
                cur = insert(root->right, data);
                root->right = cur;
            }
            return root;
        }
    }


    void levelOrder(Node* root)
    {
        queue<Node*> queuee;
        queuee.push(root);

        while (queuee.size() != 0)
        {
            Node* curr = queuee.front();
            queuee.pop();

            cout << curr->data << " ";

            if (curr->left)
            {
                queuee.push(curr->left);
            }
            if (curr->right)
            {
                queuee.push(curr->right);
            }
        }
    }

};//End of Solution



int main()
{
    Solution myTree;
    Node* root = NULL;
    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.levelOrder(root);
    return 0;
}