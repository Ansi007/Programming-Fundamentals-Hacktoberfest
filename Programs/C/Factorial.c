//WAP to print factorial of any number
#include <stdio.h> 


int main()
{
    int a;
    printf("Enter any no.:");
    scanf("%d",&a);
    int c=fact(a);
    return 0;
 }
   int fact(int n)
 {
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
     }
    printf("Factorial is %d",factorial);
    return factorial;
}
