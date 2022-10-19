#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size of array:";
	cin>>size;
	
  int*ar=new int[size];  
	int*sum=new int[size];
	
	cout << "Enter numbers in array:" << endl;
	for (int x = 0; x < size; x++)
	{
		cin >> ar[x];
	}
	
	for (int x = 0; x < size; x++)
	{
		sum[x] = ar[x];
	}
	

	for (int x = 1; x < size; x++)
	{
		sum[x] = sum[x] + sum[x - 1];
	}
	
	cout << "Original array:" << endl;
	for (int x = 0; x < size; x++)
	{
			cout << ar[x] << "  ";
	}
	cout << endl << "Cumulative sum array:" << endl;
	for (int x = 0; x < size; x++)
	{
		cout << sum[x] << "  ";
	}
}
