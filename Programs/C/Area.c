#include<stdio.h>
int main()
{
int a1,a3,a4,a5,a,b,c,d,e,f,g,h,i,j,k;
//float a2;
printf("Which shape of area you want 1)Parallelogram,2)Trapezoid,3)Rhombus,4)Sphere,5)Ellipse;");
scanf("%d",&a);
if(a==1)
{printf("Enter base and Height");
scanf("%d %d",&b,&c);
a1=b*c;
printf("Area is %d",a1);
}
else if(a==2)
{printf("Enter Height,Long base,Short base:");
scanf("%d %d %d",&d,&e,&f);
//a2=d*(e+f)*0.5;
printf("Area is %f",d*(e+f)*0.5);
}
else if(a==3)
{printf("Enter Height,side:");
scanf("%d %d", &g,&h);
a3=g*h;
printf("Area is %d",a3);
}
else if(a==4)
{printf("Enter Radius of Circle");
scanf("%d", &i);
a4=3.14*i*i;
printf("Area is %d",a4);
}
else if(a==5)
{printf("Enter Major and Minor radius:");
scanf("%d %d",&j,&k);
a5=3.14*j*k;
printf("Area is %d",a5);
}
else
{printf("ERROR 404");}
return 0;
}
