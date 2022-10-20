#include <iostream>
using namespace std;
int main()
{
	int num, n1 = 0, n2 = 1, nextTerm = 0;
	cout << "Enter a the number of digits of the fibonacci series: ";
	cin >> num;
	cout << "Fibonacci series: " << endl;
	for (int i = 0; i < num; i++)
	{
		if (i == 0)
		{
			cout << n1 << " ";
		}
		else if (i == 1)
		{
			cout << n2 << " ";
		}
		else
		{
			nextTerm = n1 + n2;
			n1 = n2;
			n2 = nextTerm;
			cout << nextTerm << " ";
		}
	}
	return 0;
}