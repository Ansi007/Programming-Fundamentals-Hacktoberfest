#include <iostream>
using namespace std;
int main()
{
	int slimit,elimit,sum;
	cout<<"Enter slimit : " <<endl;
	cin>>slimit;
	
	cout<<"Enter elimit : " <<endl;
	cin>>elimit;
	while(slimit<=elimit)
	{
			if(slimit%2==0&&slimit%3==0&&slimit%5==0)
       	{
			sum = sum + slimit;
     	}
	slimit++;
	}
	
	cout<<sum<<endl;
	return 0;

	
	
	
}
