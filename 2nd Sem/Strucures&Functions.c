#include <stdio.h>

struct student
{
	int roll;
	char name[50];
};

void func2( int a, char b[])
{ printf("%d\n%s",a,b);

}

void func1( struct student s)
{    printf("Entered elements of the structure are:\n"); 
	 printf("%d\n%s\n",s.roll,s.name);
}

void func3( struct student *s)
{    printf("\nEntered elements of the structure are:\n"); 
	 printf("%d\n%s\n",s->roll,s->name); 
}

int main()
{ struct student s;
scanf("%d %s",&s.roll,&s.name);
  func1(s);
  func2(s.roll,s.name);
  func3(&s);
   return 0;
}
