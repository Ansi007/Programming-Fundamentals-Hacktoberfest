#include<iostream>
using namespace std;
int main()
{
	int year = 0;
	cout << "enter year : " << "\t";
	cin >> year;
	if (year % 4 == 0)
	{
		cout << "its is a leap year ";
	}
	else
	{
		cout << "it is not a leap year ";
	}
	return 0;
}