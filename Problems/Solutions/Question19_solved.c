//C progrom to calculate simple interest

#include<iostream>
using namespace std;

int main()
{
  float p,r,t;
  printf("Enter principle,rate and time:\n");
  scanf("%f%f%f",&p,&r,&t);
  float si = (p*r*t)/100;
  printf("Simple interest is %f",si);
  return 0;
}
