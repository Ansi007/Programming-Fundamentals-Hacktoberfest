#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *add(int data)
{
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", *root);
        inorder(root->right);
    }
    else
        return;
}
int main()
{
    struct node *n1 = add(10);
    struct node *n2 = add(8);
    struct node *n3 = add(12);
    struct node *n4 = add(7);
    struct node *n5 = add(9);
    struct node *n6 = add(11);
    struct node *n7 = add(20);
    struct node *n8 = add(15);
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;
    n7->left = n8;
    inorder(n1);

    return 0;
}