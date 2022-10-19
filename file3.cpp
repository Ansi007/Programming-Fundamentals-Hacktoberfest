#include <iostream>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	while (cases--)
	{
		int size;
		cin >> size;
		int* array = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> array[i];
		}
		int pos;
		cin >> pos;
		int m = array[pos - 1];
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (array[i] > array[j])
				{
					int temp = array[j];
					array[j] = array[i];
					array[i] = temp;
				}
			}
		}

		for (int i = 0; i < size; i++)
		{
			if (array[i] == m)
			{
				cout << i + 1 << endl;
			}
		}
	}
	return 0;
}