#include<stdio.h>
#include<stdlib.h>


struct node
{
    int val;
    struct node* next;
};

typedef struct node nd;

struct node* head = NULL;

void create(int n){
    int x,i;
    printf("Enter the first value: \n");
    scanf("%d", &x);
    head = (nd *)malloc(sizeof(nd));
    nd* current = head;
    head->val=x;
    head->next=NULL;
    printf("Enter the rest of the values: \n");
    for(i = 1; i<n; i++){
        nd* temp = (nd *)malloc(sizeof(nd));
        scanf("%d", &x);
        temp->val = x;
        temp->next = NULL;
        current->next = temp;
        current = temp;
    }
}

void reverse()
{ nd* ptr,ptr2,temp;

}

int main()
{
	return 0;
}
