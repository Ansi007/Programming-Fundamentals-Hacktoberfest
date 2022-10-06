//WAP to swap values 1)by using 3rd variable 2)by without using 3rd variable
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Swapping values\n");
printf("Enter 2 no.");
scanf("%d %d",&b,&c);
printf("Which method you want to choose for swapping 1)using 3rd variable 2)w/o using 3rd variable\n");
scanf("%d",&a);
if(a==1)
{printf("using 3rd variable\n");

d=b;
b=c;
c=d;
printf("Swapped values b=%d, c=%d",b,c);
}
else if(a==2)
{printf("w/o using 3rd variable");
b=c+b;
c=b-c;
b=b-c;
printf("a is %d,b is %d",b,c);
}
return 0;
}
