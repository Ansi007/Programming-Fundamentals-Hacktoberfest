/*Write a C program to enter two numbers and find their sum.*/
#include<stdio.h>

int main()
{
    int a, b, sum;
    printf("ENTER TWO NUMBERS \n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum : %d", sum);
    return(0);

}
