#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Type the first integer : " << endl;
	cin >> a;
	cout << "Type the second integer : " << endl;
	cin >> b;

	if (a % b == 0)
	{
		cout << a << " is the multiple of " << b;
	}
	else
	{
		cout << a << " is not the multiple of " << b;
	}
	return 0;
}