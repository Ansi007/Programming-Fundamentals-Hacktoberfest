
//Task
//Given a string, S, of length N that is indexed from 0 to N-1, print its even - indexed and odd - indexed characters as 2 space - separated strings on a single line(see the Sample below for more detail).

//Example
// s= adbecf
//Print abc def

//Input Format
//The first line contains an integer T, (the number of test cases).
//Each line i of the T subsequent lines contain a string, S.

//Sample Input
//2
//Hacker
//Rank


//Sample Output
//Hce akr
//Rn ak




#include<iostream>
using namespace std;
int main()
{
	int numberOfTestCases = 0;
	cin >> numberOfTestCases;
	string* arr = new string[numberOfTestCases];

	for (int i = 0; i < numberOfTestCases; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < numberOfTestCases; i++)
	{
		string s = arr[i];
		cout << s[0];
		for (int j = 1; j < s.length(); j++)
		{
			if (j % 2 == 0)
				cout << s[j];
		}
		cout << " ";
		for (int j = 1; j < s.length(); j++)
		{
			if (j % 2 == 1)
				cout << s[j];
		}
		cout << endl;
	}
	return 0;
}