#include <iostream>
using namespace std;
int* resizeArray(int* arr, int size);
int main()
{
	int size;
	cout << "Enter size of the array: ";
	cin >> size;
	int* arr = new int[size];
	cout << "Elements of the original array are: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "The resized array is: " << endl;
	int* a = resizeArray(arr, size);
	for (int i = 0; i < (size + size); i++)
	{
		cout << *(a + i) << " ";
	}
}
int* resizeArray(int* arr, int size)
{
	int newSize = size + size;
	int* arrNew = new int[newSize];
	for (int i = 0; i < (size + size); i++)
	{
		if (i >= size)
		{

			arrNew[i] = (arr[i - size] + arr[i - size]);
		}
		else
		{
			arrNew[i] = arr[i];
		}
	}
	return arrNew;
}