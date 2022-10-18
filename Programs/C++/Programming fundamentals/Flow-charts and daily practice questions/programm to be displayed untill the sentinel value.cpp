//Write an algorithm to determine the sum of a variable number of positive integers taken from the user. The 
//algorithm should keep prompting the us//er for more input till the user enters the sentinel value -999.

#include <iostream>
using namespace std; 
int main()
{
	
	//variable declaratin
	int i=1,no,sum=0;
	
	//ask for input integer variable
	cout<<"Input numeric variable from user"<<endl;
	
	
	//after sentinel value,execution will stop
	while(no != -999 )
	{
		cin>>no;
		sum = sum + no;
		cout<<"Display sum on screen "<<sum<<endl;
		i ++;
		
		
	}
	
	//terminate program
	return 0;
}
