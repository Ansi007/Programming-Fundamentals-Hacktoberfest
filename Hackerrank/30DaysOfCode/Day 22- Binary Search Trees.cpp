//Task
//The height of a binary search tree is the 
// number of edges between the tree's root 
// and its furthest leaf. You are given a pointer, 
// root, pointing to the root of a binary search tree. 
// Complete the getHeight function provided in your
//  editor so that it returns the height of the binary search tree.


//Input Format
//The first line contains an integer, n , denoting the number of nodes in the tree.
//Each of the n subsequent lines contains an integer, data, denoting the value of 
// an element that must be added to the BST.


//Output Format
//height of BST


//Sample Input
//7
//3
//5
//2
//1
//4
//6
//7


//Sample Output
//3







#include <iostream>
#include <cstddef>

using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};


class Solution
{
public:
    Node* insert(Node* root, int data)
    {
        if (root == NULL) {
            return new Node(data);
        }
        else {
            Node* cur;
            if (data <= root->data) {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    int getHeight(Node* root)
    {
        return root == NULL ? -1 : 1 + max(getHeight(root->left), getHeight(root->right));
    }

}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while (t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}



