//WAP to print factorial of any number
#include <stdio.h> 
int fact(int n);
int main()
{
    int n;
    printf("Enter any no.:");
    scanf("%d",&n);
    int c=fact(n);
    printf("Factorial is %d",c);
    return 0;
 }
 int fact(int n)
 {int f;
 if(n==1 || n==0)
 return 1;
 else
 {f=n*fact(n-1);
 return f;}
 }
