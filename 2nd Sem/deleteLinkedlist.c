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

void del()
{   int loc,i;
    struct node *ptr,*temp;
	printf("Enter the position to delete: \n");
	scanf("%d",&loc);
	if(loc==1)
	{ ptr=head;
	  head=head->next;
	  free(ptr);
	}
	else{
		temp=head;
		for(i=0;i<loc-2;i++)
		{ temp=temp->next;
		  
//		  if(temp=NULL)
//		  {printf("Cant Delete\n");
//		  return;
//		  }
		}
		ptr=temp->next;
		temp->next=temp->next->next;
		free(ptr);
		
	}	
}

int main()
{   int x;
    printf("Enter the no. of nodes of linked list: \n");
    scanf("%d", &x);
    create(x);
    display();
    del();
    display();
	return 0;
}
