//C++ Program to Find Compound Interest
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float P, T, R, CompoundInterest;
	
	cout << "Enter the value of P: ";
	cin >> P;
	while (P < 0)
	{
		cout << "Enter Valid Input" << endl;
		cin >> P;
	}
	
	cout << "Enter the value of T: ";
	cin >> T;
	while (T < 0)
	{
		cout << "Enter Valid Input" << endl;
		cin >> T;
	}
	
	cout << "Enter the value of R: ";
	cin >> R;
	while (R < 0)
	{
		cout << "Enter Valid Input" << endl;
		cin >> R;
	}
	
	CompoundInterest = P * (pow((1 + R / 100), T));
	cout << "The compound interest is: $ " << CompoundInterest << endl;
	return 0;
}