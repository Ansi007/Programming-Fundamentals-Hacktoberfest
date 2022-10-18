#include <iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"This is a basic calculator.\n Please enter 1 for addition.\n2 Please enter 2 for subtraction.\n Please enter 3 for multiplication ."<<endl;
	cin>>choice;
	
	
	int no1, no2;
	
	
	cout<<"Please enter the value of operand1 : "<<endl;
	cin>>no1;
	
	
	cout<<"Please enter the value of operand2 : "<<endl;
	cin>>no2;
	 
	 
	 if(choice==1)
	 {
	 	int sum= no1 + no2;
	 	cout<<"The addition result is : "<< sum<<endl;
	 	

	 }
	 
	 
	else if(choice==2)
	 {
	 	int sub= no1 - no2;
	 	cout<<"The subtraction result is : "<< sub<<endl;
	 	

	 }
	 else  if (choice==3)
	 {
	 	int mult= no1 * no2;
	 	cout<<"The multiplication result is : "<< mult <<endl;
	 	

	 }
	 
	 
	 else 
	{
	 	cout<<"Please enter the value that is valid"<<endl;
	}
		  
		  return 0;
		  
}
