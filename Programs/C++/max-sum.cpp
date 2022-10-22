// A C++ program to find maximum sum rotation
#include<bits/stdc++.h>

using namespace std;

// Returns maximum value of i*arr[i]
int maxSum(int arr[], int n)
{
// Initialize result
int res = INT_MIN;

for (int i=0; i<n; i++)
{

	// Initialize sum of current rotation
	int curr_sum = 0;
	for (int j=0; j<n; j++)
	{
		int index = (i+j)%n;
		curr_sum += j*arr[index];
	}

	// Update result if required
	res = max(res, curr_sum);
}

return res;
}


int main()
{
	int arr[] = {7, 2, 1, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << maxSum(arr, n) << endl;
	return 0;
}
