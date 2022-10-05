/*
Problem statement:
There is a string s of length 3, consisting of uppercase and lowercase English letters. 
Check if it is equal to "YES" (without quotes), where each letter can be in any case.
For example, "yES", "Yes", "yes" are all allowable.
*/

#include<iostream>
#include<string>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		if (toupper(s[0]) == 'Y' && toupper(s[1]) == 'E' && toupper(s[2]) == 'S')
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}