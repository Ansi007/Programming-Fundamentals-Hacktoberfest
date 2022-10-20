#include <iostream>

using namespace std;
void swap(string s1, string s2);
int main()
{
	string s1, s2;
	cout << "Enter string 1: ";
	cin >> s1;
	cout << "Enter string 2: ";
	cin >> s2;
	swap(s1, s2);


	return 0;
}
void swap(string s1, string s2)
{
	string temp;
	temp = s1;
	s1 = s2;
	s2 = temp;
	cout << " After swapping : ";
	cout << s1 << " , " << s2;

}

