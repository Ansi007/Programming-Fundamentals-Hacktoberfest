#include<stdio.h>
#include<stdlib.h>

struct list{
   int value;
   struct list *next;
   		
};

struct list *head;

void beginInsert()

{
	struct list *temp,*ptr;
	int data;
	ptr=(struct list*)malloc(sizeof(struct list));
	printf("Enter the value to be stored in node:\n");
	scanf("%d",&data);
	ptr->value=data;
	
	if(head==NULL)
	{
     printf("OVERFLOW\n");
	}
	else
	{   ptr->value=data;
		ptr->next=head;
		head=ptr;
		printf("Node Inserted\n");
		
	}
}

int main()
{ struct list *first;
first->value=9;
first->next=NULL;
head=first;
  beginInsert();
  return 0;
}
