//find factorial of given number using recursion
#include<iostream>
using namespace std;


int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
		return n * factorial(n - 1);
}

int main()
{
	int n = 0;
	cin >> n;
	cout << factorial(n);
	return 0;
}
