

#include<iostream>
using namespace std;

int main()
{
	for (int student=1; student<=50; student++) // outer loop 50 times
	{
		cout << "Computation of Average marks for Student " << student << endl;
		cout << "===================================================="  << endl;
	
		int sum = 0;
		int avg = 0;
		
		for(int i=1; i<=5; i++) // inner loop 5 times
		{
			int marks = 0;
			cout << "Please enter marks of Subject " << i << ":" << endl;
			cin >>	marks;
			sum = sum + marks;
		}
		
		avg = sum/5;
		cout << "Average marks is : " << avg << endl;
		cout << "========================="  << endl;
	}
	
	return 0;
}
