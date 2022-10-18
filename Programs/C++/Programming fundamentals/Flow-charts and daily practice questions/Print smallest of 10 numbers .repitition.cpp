//. Input 10 numbers, and display smallest number 
#include <iostream>
using namespace std; 
int main ()
{
	int i=1,num,smallest=0;
	cout<<"Input a number from user"<<endl;
	
	while (i<=10)
	{
		
		cin>>num;
		if(num<smallest){
			
			smallest = num;
			cout<<"smallest is :"<<num<<endl;
		}
		else {
				cout<<"smallest  number is :"<<smallest<<endl;
			smallest =smallest ;
		} 
		cout<<"Print smallest number"<<smallest<<endl;
	
	}
	   return 0;       
	
}
