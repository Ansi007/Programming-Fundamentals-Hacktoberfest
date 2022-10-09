//WAP to print kaju katli borders
#include<stdio.h>
int main()
{
 printf("Enter number of rows: ");
 int n,i,j,l=1,k;
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
   for(j=n;j>i;j--)
  {
   printf(" ");
  }
  printf("*");
  if (i>0)
 {
    for(k=1;k<=l;k++)
   {
     printf(" ");
   }
    l=l+2;
   printf("*");
 }
   printf("\n");
 }
   l=l-4;
   for(i=0;i<=n-1;i++)
 {
   for(j=0;j<=i;j++)
   {
     printf(" ");
   }
   printf("*");
   for(k=1;k<=l;k++)
   {
     printf(" ");
   }
   l=l-2;
   if(i!=n-1)
   {
     printf ("*");
   }
   printf("\n");
}
 return 0;
}
