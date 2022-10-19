#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	while (testcase < 1 || testcase >30)
	{
		cin >> testcase;
	}
	int count = 0;
	while (count < testcase)
	{
		int minutes;
		cin >> minutes;
		while (minutes < 1 || minutes >30)
		{
			cin >> minutes;
		}
		cout << ((minutes * 60)) / 30 << endl;
		count++;
	}
	return 0;
}