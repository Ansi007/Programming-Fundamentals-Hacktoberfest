#include<stdio.h>
int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n,i,sum=0;
    printf("Enter no. of elements until which u want to print: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("%d\n",fib(i));
      sum+=fib(i);
    }
    printf("Sum is %d",sum);
    return 0;
}
