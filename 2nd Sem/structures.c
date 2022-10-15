#include <stdio.h>

struct student
{
	int roll;
	char name[50];
	char branch[5];
};

int main ()
{ int n,i,e,j;
  struct student stud[n]; 
  printf("Enter the number of sudents in class:\n");
  scanf("%d",&n);
  
 for(i=0;i<n;i++)
 { printf("Enter the details of student %d:\n",i+1);
   printf("Enter the roll number of student %d:\n",i+1);
   scanf("%d",&stud[i].roll);
   printf("Enter the name of student %d:\n",i+1);
   scanf("%s",&stud[i].name);
   printf("Enter the branch of student %d:\n",i+1);
   scanf("%s",&stud[i].branch);
 }
  printf("Entered student details are:\n");
  for(i=0;i<n;i++)
 { printf("Roll Number:%d\nName:%s\nBranch:%s",stud[i].roll,stud[i].name,stud[i].branch);
 }

  printf("\nEnter the index to edit:\n");
   scanf("%d",&e);
   printf("Enter the roll number of student %d:\n",e);
   scanf("%d",&stud[e].roll);
   printf("Enter the name of student %d:\n",e);
   scanf("%s",&stud[e].name);
   printf("Enter the branch of student %d:\n",i+1);
   scanf("%s",&stud[e].branch);
   printf("Updated student details are:\n");
   printf("Roll Number:%d\nName:%s\nBranch:%s\n",stud[e].roll,stud[e].name,stud[e].branch);
 
 return 0;
}
