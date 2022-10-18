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
void display(){
    nd* p = head;
    printf("The linked list is: \n");
    while(p!=NULL){
        printf("%d -> ", p->val);
        p = p->next;
    }
    printf("NULL \n");
}
void insertAny(){
    int x,i;
    printf("Enter the value to be inserted: \n");
    scanf("%d", &x);
    int pos;
    printf("Enter the position: \n");
    scanf("%d", &pos);
    nd * p = head;
    for( i = 1; i<pos-1; i++){
        p = p->next;
    }
    nd * temp = (nd *)malloc(sizeof(nd));
    temp->val = x;
    temp->next = p->next;
    p->next = temp;
}
int main(){
    int x;
    printf("Enter the no. of nodes of linked list: \n");
    scanf("%d", &x);
    create(x);
    display();
    insertAny();
    display();

    return 0;
}
