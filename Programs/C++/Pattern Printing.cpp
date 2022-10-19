#include <iostream>
using namespace std;
int main()
{
	int row;
	cout << "Enter a number:";
	cin >> row;
	cout << ". . . A pattern is printed . . ." << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << "*";
		if (i < (row - 1))
		{
			if (i == (row - 2))
			{

				cout << " " << "*";

			}
			else
			{
				int j;
				for (j = row; j > i; j--)
				{
					cout << " ";
				}
				for (int k = (row - 3); k > i; k--)
				{
					cout << " ";
				}
				cout << "*";
			}
		}

		cout << endl;
	}
	for (int i = 1; i < row; i++)
	{
		for (int j = (row - 1); j > i; j--)
		{
			cout << " ";
		}
		cout << "*";
		if (i == 1)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << " " << "*";
			}
		}
		else
		{
			int j;
			for (j = 1; j <= i; j++)
			{
				cout << " ";
			}
			for (int k = 3; k <= j; k++)
			{
				cout << " ";
			}
			cout << "*";
		}


		cout << endl;
	}

	return 0;
}