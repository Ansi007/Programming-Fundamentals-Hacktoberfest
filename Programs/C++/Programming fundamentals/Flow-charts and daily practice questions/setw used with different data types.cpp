//programm for the setw used with string object ,int and double data type
#include<iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int intValue=23;
	double doubleValue=23.3;
	string stringValue = "hello Pakistan";
	cout<<"("<<setw(16)<<intValue<<")"<<endl;
	cout<<"("<<setw(16)<<doubleValue<<")"<<endl;
	cout<<"("<<setw(16)<<stringValue<<")"<<endl;
	
}
