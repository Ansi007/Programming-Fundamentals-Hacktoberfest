//. Input 10 numbers, and display count of Even and Odd numbers, separately, at the end. 
#include <iostream>
using namespace std;
int main ()
{
	int i = 1,num,even=0,odd=0;
	cout<<"input a number from user"<<endl;
	
	while (i <=10)
	{
	
	cin>>num;
	if(num%2==0)
	{
		even=even +1;
	}
	else  {
		odd = odd + 1;
	}
	 
	 
	 i = i +1;
}
cout<<"Print even"<<even<<endl;
	cout<<"Print odd "<<odd<<endl;
   
	
	
	return 0;
	
	
	
}
