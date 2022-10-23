#include <iostream>
using namespace std;
int main()
{
	int year;
	cout << "Enter the year:";
	cin >> year;
	if (year % 400 == 0)
	{
		cout << "It is leap year\n";
	}
	else if (year % 100==0)
	{
		cout << "It is not a leap year\n";
	}
	else if (year % 4 == 0)
	{
		cout << "It is leap year\n";

	}
	else
	{
		cout << "It is not a leap year\n";
	}
}
