#include <iostream>
using namespace std;
bool isPrime(int);
int main()
{
	int n;
	cout << "Enter number:";
	cin >> n;
	if (isPrime(n))
		cout << "Prime number";
	else
		cout << "Not prime number";
}
bool isPrime(int x)
{
	int p = 0;
	for (int i = 2; i <= x / 2; i++)
	{
		if (x % i == 0) p++;
	}
	if (p != 0) return false;
}
