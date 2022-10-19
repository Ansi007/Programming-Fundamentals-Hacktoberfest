#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int u = 0;
		int size;
		cin >> size;
		int array[size];
		for (int i = 0; i < size; i++)
		{
			cin >> array[i];
		}

		int count = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = 1; j <= 7; j++)
			{
				if (array[i] == j)
				{
					count++;

				}
				if (count == 7)
				{
					cout << i + 1 << endl;
					u++;
					break;
				}
			}
			if (u > 0)
				break;

		}
	}
	return 0;
}
