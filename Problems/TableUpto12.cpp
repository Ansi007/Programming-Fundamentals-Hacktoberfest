
//Problem statement :  Write a program that prints a multiplication table for numbers up to 12.

#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter number:";
	cin >> num;
	for (int i = 1; i <= 12; i++) {
		cout << num << " x " << i << " = " << num * i << "\n";
	}
	return 0;
}