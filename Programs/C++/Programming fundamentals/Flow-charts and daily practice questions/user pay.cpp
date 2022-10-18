//programm to calculate the pay of user.
#include <iostream>
using namespace std;
int main()
{
	int hours,pay,rate;
	
	//Ask for the numbers you worked.
	cout<<"Enter the number of hours worked"<<endl;
	cin>>hours;
	
	//Ask for the rate (Amount of pay you get each hour)
	cout<<"Enter the rate"<<endl;
	cin>>rate;
	
	
	//Calculate the pay 
	pay = hours * rate;
	
	//Display play
	
	
	cout<<" User have earned  : " << pay<<endl; 
	return 0;
}
