
//count number of digits in a number
#include <iostream>
using namespace std;
int main()
{
	long long int x;
	int r, sum = 0, count = 0;
	cout << "Enter number =";
	while (!(cin >> x))
	{
		cout << "ERROR! Number is invalid.\nEnter a number again.";
		cin.clear();
		cin.ignore(123, '\n');
	}
	while (x != 0)
	{
		x = x / 10;
		count = count + 1;

	}
	cout <<"Number of digits=" <<count;
}