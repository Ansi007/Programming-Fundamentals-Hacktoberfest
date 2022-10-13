//WAP to program to print Total days in year,month and day
//Taking 30 days in 1 month and 365 days in 1 year
#include<stdio.h>
int main()
{
int a,y,d,m;
printf("Enter no. of days:");
scanf("%d",&a);
y=a%365;
printf("Year(s)=%d  ",(a-y)/365);
m=y%(30);

printf("Month(s)=%d  ",(y-m)/30);
printf("day(s)=%d",m);
return 0;
}
