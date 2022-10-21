#include<iostream>
using namespace std;
const int size1 = 30;
const int size2 = 40;
int length(char[]);
void concat(char[], char[]);
int main()
{
	char s1[size1];
	char s2[size2];
	int x;
	cout << "Enter data for string 1: " << endl;
	cin >> s1;
	cout << "Enter data for string 2: " << endl;
	cin >> s2;
	concat(s1, s2);
	return 0;
}
int length(char s1[])
{
	int i = 0;
	for (i = 0; s1[i] != '\0'; i++);
	return i;
}
void concat(char s1[], char s2[])
{
	int x;
	x = length(s1);
	for (int i = 0; s1[i] != '\0'; i++)
	{
		s1[x] = s2[i];
		x++;
	}

	cout << "Now the string after concatination is: " << s1 << endl;

}