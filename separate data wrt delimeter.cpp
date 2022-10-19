#include <iostream>
using namespace std;
void myTokenizer(char** list, char* data, char delimeter, int rows, int cols)
{
	int x = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (data[x] == delimeter)
			{
				list[i][j] = '\0';
				goto here;
			}
			list[i][j] = data[x];
			x++;
		}
	here:
		x++;
	}
}
int main()
{
	char data[20], delimeter;
	cout << "Input: ";
	cin >> data;
	cout << "Delimeter: ";
	cin >> delimeter;
	int length = 0;
	for (; data[length] != '\0'; length++);
	int rows = 1;
	for (int i = 0; data[i] != '\0'; i++)
	{
		if (data[i] == delimeter)
			rows++;
	}
	int coloumn = 0, temp = 0;
	for (int i = 0; data[i] != '\0'; i++)
	{
		if (data[i] == delimeter)
		{
			if (coloumn < temp)
				coloumn = temp;
			temp = 0;
		}
		else
			temp++;
	}
	if (coloumn < temp)
		coloumn = temp;
	coloumn++;
	char** list;
	list = new char* [rows];
	for (int i = 0; i < rows; i++)
		list[i] = new char[coloumn];
	myTokenizer(list, data, delimeter, rows, coloumn);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloumn; j++)
		{
			if (list[i][j] == '\0')
				break;
			cout << list[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++)
	{
		delete[] list[i];
		list[i] = nullptr;
	}
	delete[] list;
	return 0;
}