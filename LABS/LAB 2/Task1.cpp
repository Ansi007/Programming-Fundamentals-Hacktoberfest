#include <iostream>
using namespace std;

int main()
{
	int a;
	float b;
	cout << "Enter the value for a: " << endl;
	cin >> a;
	cout << "Enter the value for b: " << endl;
	cin >> b;
	cout << "Value of a: " << a << endl;
	cout << "Size of a:  " << sizeof(a) << endl;
	cout << "Address of a: " << &a << endl;
	cout << "Value of b: " << b << endl;
	cout << "Size of b: " << sizeof(b) << endl;
	cout << "Address of b: " << &b << endl;
	return 0;

}