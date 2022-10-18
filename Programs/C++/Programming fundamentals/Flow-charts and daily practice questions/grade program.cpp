//programm to print marks
#include <iostream>
using namespace std;
int main()
{
	int marks;
	while(cin>>marks)
	{
		if(marks>=50)
		{
		cout<<"pass"<<endl;
		}
		else
		{
			cout<<"fail"<<endl;
		}
	}
}
