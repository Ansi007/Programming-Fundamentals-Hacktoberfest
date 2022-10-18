//Program to calculate the amount of pay that will be contributed to a retirement play if 5%,7% and 10% of monthly pay is withheld
#include <iostream>
using namespace std;
int main()
{
	//variable to show the monthly pay and the amount of contribution
	//variable declaration and initiation
double	monthly_pay = 6000.0 , contribution;


//calculate and display 5% contrition
contribution = monthly_pay * 0.05;
cout<<" 5 percent  contribution is  :" <<contribution;
cout<<" $ per month.\n ";
 
 //calculate and display 7% contribution
 contribution = monthly_pay * 0.07;
 cout<<"7 percent contribution is : " <<contribution<< " $  per month"<<endl;
 
 //calculate and display 7% contribution
 contribution = monthly_pay * 0.1 ;
 cout<<"10 percent contribution is : "<<contribution<< " $ per month " <<endl;
  
  return 0;
 
}
