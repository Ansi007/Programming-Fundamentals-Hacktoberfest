
//Task
//Given an array, A, of N integers, print A's elements in reverse order as a single line of space-separated numbers.

//Sample Input
//4
//1 4 3 2



//Sample Output
//2 3 4 1


#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	return 0;
}