#include <iostream>
using namespace std;
char** AllocateMemory(int&, int&);
void inputMatrix(char**, const int, const int);
void displayMatrix(char**, const int&, const int&);
int main()
{
	int r, c;
	cout << "enter nuymber of rows of matrix : ";
	cin >> r;
	cout << "enter number of coloumns of matrix : ";
	cin >> c;
	char** matrix = AllocateMemory(r, c);
	inputMatrix(matrix, r, c);
	displayMatrix(matrix, r, c);
	int alphabetSize = 0, numberSize = 0, specialSize = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (matrix[i][j] >= 48 && matrix[i][j] <= 57)
				numberSize++;
			else if ((matrix[i][j] >= 65 && matrix[i][j] <= 90) || (matrix[i][j] >= 97 && matrix[i][j] <= 122))
				alphabetSize++;
			else
				specialSize++;
		}
	}
	char* number = new char[numberSize];
	char* alphabet = new char[alphabetSize];
	char* special = new char[specialSize];
	int n = 0, a = 0, s = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (matrix[i][j] >= 48 && matrix[i][j] <= 57)
			{
				number[n] = matrix[i][j];
				n++;
			}
			else if ((matrix[i][j] >= 65 && matrix[i][j] <= 90) || (matrix[i][j] >= 97 && matrix[i][j] <= 122))
			{
				alphabet[a] = matrix[i][j];
				a++;
			}
			else
			{
				special[s] = matrix[i][j];
				s++;
			}
		}
	}
	cout << "alphabets are = ";
	for (int i = 0; i < alphabetSize; i++)
		cout << alphabet[i] << " ";
	cout << endl << "numbers are = ";
	for (int i = 0; i < numberSize; i++)
		cout << number[i] << " ";
	cout << endl << "special charachters are = ";
	for (int i = 0; i < specialSize; i++)
		cout << special[i] << " ";
	cout << endl;
	delete[] alphabet, special, number;
	for (int i = 0; i < r; i++)
		delete[] matrix[i];
	delete[] matrix;
	return 0;
}

char** AllocateMemory(int& rows, int& coloumns)
{
	char** matrix = new char* [rows];
	for (int i = 0; i < coloumns; i++)
		matrix[i] = new char[coloumns];
	return matrix;
}
void inputMatrix(char** matrix, const int rows, const int coloumns)
{
	cout << "start entering charachters : " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloumns; j++)
			cin >> matrix[i][j];
	}

}
void displayMatrix(char** matrix, const int& rows, const int& coloumns)
{
	cout << "Matrix is " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloumns; j++)
			cout << matrix[i][j] << "\t";
		cout << endl;
	}
}

