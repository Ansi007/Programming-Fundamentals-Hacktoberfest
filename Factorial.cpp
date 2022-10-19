#include<iostream>
using namespace std;
int main()
{
	double x;
	cout << "Enter number :";
	cin >> x;
	if (x == 0)
	{
		x=1;
	}
	else
	{
		for (int i = x - 1; i >= 1; i--)
		{
			x = x * i;
		}
	}
	cout <<"Its factorial is :"<< x;
}