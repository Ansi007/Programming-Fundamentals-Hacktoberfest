#include <iostream>
using namespace std;
int main()
{
	int array[20];
	int number;
	cout << "How many  numbers do you want to enter in the array: ";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		cin >> array[i];
	}
	float sum = 0;
	for (int i = 0; i < number; i++)
	{
		if (array[i] > 0)
		{
			sum = sum + array[i];
		}
	}
	cout << "The sum of positive numbers in the array is: " << sum;
	return 0;
}