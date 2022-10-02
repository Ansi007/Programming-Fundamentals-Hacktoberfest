#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cout << "Type the first integer: ";
	cin >> a;
	cout << "Type the second integer: ";
	cin >> b;
	cout << "Type the third integer: ";
	cin >> c;
	cout << "Type the fourth integer: ";
	cin >> d;
	cout << "Type the fifth integer: ";
	cin >> e;

	if (a > b&& a > c&& a > d&& a > e)
	{
		cout << a << " is the largest." << endl;
	}

	if (b > a&& b > c&& b > d&& b > e)
	{
		cout << b << " is the largest." << endl;
	}

	if (c > a&& c > b&& c > d&& c > e)
	{
		cout << c << " is the largest." << endl;
	}

	if (d > a&& d > b&& d > c&& d > e)
	{
		cout << d << " is the largest." << endl;
	}

	if (e > a&& e > b&& e > c&& e > d)
	{
		cout << e << " is the largest." << endl;
	}

	if (a < b&& a < c&& a < d&& a < e)
	{
		cout << a << " is the smallest." << endl;
	}

	if (b < a && b < c && b < d && b < e)
	{
		cout << b << " is the smallest." << endl;
	}

	if (c < a && c < b && c < d && c < e)
	{
		cout << c << " is the smallest." << endl;
	}

	if (d < a && d < b && d < c && d < e)
	{
		cout << d << " is the smallest." << endl;
	}

	if (e < a && e < b && e < c && e < d)
	{
		cout << e << " is the smallest." << endl;
	}

	return 0;

}