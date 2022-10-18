#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* head=NULL;

void create(int n)
{
	int i;
	head=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value of first node\n");
	scanf("%d",&head->data);
	head->next=NULL;
	struct node *current, *temp;
	current=head;
	printf("Enter the rest elements of the list\n");
	for(i=1;i<n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&temp->data);
		temp->next=NULL;
		current->next=temp;
		current=temp;
	}	
}

void display()
{   struct node* p=head;
	printf("The link list is:\n");
	while(p!=NULL)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	printf("NULL\n");
}
void insertAtBegin()
{
	if(head==NULL)
	{ printf("lThe inked list is empty\n");
	}
	else{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value to be inserted at the beginning\n");
	scanf("%d",&temp->data);
	temp->next=head;
	head=temp;	
	}
}
void insertAtEnd()
{
	struct node *p,*temp;
	p=head;
	while(p->next!=NULL)
	p=p->next;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("Enter the value to be inserted at the end of the list\n");
	scanf("%d",&temp->data);
	p->next=temp;	
}
void insertAtAny(int n)
{   if(head!=NULL)
   {   int i;
       struct node* p;
       struct node* temp=(struct node*)malloc(sizeof(struct node));
       printf("Enter the value of the node to be inserted\n");
       scanf("%d",&temp->data);
       p=head;
       for(i=1;i<n-1;i++)
	   { p=p->next;
       }
	   temp->next=p->next;
	   p->next=temp;
   }
}
void del()
{   int n;
    if(head!=NULL)
   {   printf("Enter the pos to delete\n");
       scanf("%d",&n); 
       int i;
       struct node *p,*temp;
       p=head;
       for(i=1;i<n-1;i++)
	   { p=p->next;
       }
       temp=p->next;
	   p->next=p->next->next;
	   free(temp);
   }
}
void reverse()
{
	struct node *prev, *current, *nxt;
	prev=NULL;
	current=head;
	nxt=head->next;
	while(nxt!=NULL)
	{  current->next=prev;
	   prev=current;
	   current=nxt;
	   nxt=nxt->next;
	}
	current->next=prev;
	head=current;
}
int main()
{   printf("Enter the size of the linked list\n");
    int n;
    scanf("%d",&n);
    create(n);
//    insertAtBegin();
//    insertAtEnd();
//    insertAtAny(3);
    display();
    reverse();
    display();
	return 0;
}
