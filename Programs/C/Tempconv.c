#include<stdio.h>
int main()
{
int a,t,k;
float f;
printf("Enter temp in Celsius:");
scanf("%d",&a);
printf("From which u want to convert 1)Celsius to Farenheit,2)Celsius to Kelvin:");
scanf("%d",&t);
if(t==1)
{
printf("From Celsius to Farenheit\n");
f=(a*9)/5 +32;
printf("Temp in Farenheit is: %f",f);
}
else if(t==2)
{
printf("From Celsius to kelvin\n");
k= a+273;
printf("Temp in Kelvin is: %d",k);
}
return 0;
}
