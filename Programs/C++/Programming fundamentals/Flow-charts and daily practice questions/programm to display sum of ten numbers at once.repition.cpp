//programm taking 10 numbers from user at once and display their sum
#include <iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"input 10 numbers from user : "<<endl;
	for(int i =1;i <=10;i++)
	{
		cin>>num;
		sum = sum + num;
	}
	cout<<"display sum of ten numbers."<<sum<<endl;
	
	return 0;
	
}

