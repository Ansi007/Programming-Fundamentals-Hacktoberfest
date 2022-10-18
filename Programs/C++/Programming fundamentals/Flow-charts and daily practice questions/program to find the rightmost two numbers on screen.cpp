//program to calculate the rightmost two numbers
#include <iostream>
using namespace std;
int main()
{
	int num = 12345;
	int rightmost2;
	//calculate  and display te rightmost two numbers on the screee
	
	rightmost2 = num % 100;
	cout<<"The rightmost two numbers are : " <<rightmost2<<endl;
	return 0;
}
