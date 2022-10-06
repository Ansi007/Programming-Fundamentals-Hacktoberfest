//Task
//Given a base 10 - integer, n , convert it to binary(base -2 ). Then find and print the base -2 integer 
//denoting the maximum number of consecutive 1's in n's binary representation.

//Example
//The binary representation of 125 is 1111101. In base 10, there are 5 and 1 consecutive ones in two groups.
//Print the maximum, 5.


//Sample Input 1
//5
//
//Sample Output 1
//1
//
//Sample Input 2
//13
//
//Sample Output 2
//2


#include<iostream>
#include<stack>
using namespace std;


int main()
{
	int n = 0;
	int  remainder;
	cin >> n;
	stack<int> s;
	for (; n > 1;)
	{
		remainder = n % 2;
		n = n / 2;
		s.push(remainder);
	}
	s.push(n);

	int currentCount = 0, maxCount = 0;
	int size = s.size();
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = s.top();
		s.pop();
	}
	for (int i = 0; i < size; i++)
	{
		currentCount = 0;
		if (arr[i] == 1)
		{
			for (int j = i;; j++)
			{
				if (arr[j] == 1)
				{
					currentCount += 1;
				}
				else
				{
					break;
				}
			}
			if (currentCount > maxCount)
			{
				maxCount = currentCount;
			}
		}
		if (i == 0)
		{
			maxCount = currentCount;
		}
	}

	cout << maxCount;
	return 0;
}