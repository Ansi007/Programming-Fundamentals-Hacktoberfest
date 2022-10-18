//how the setprecision rounds a floating point value
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double quotient , number1=345 ,number2= 2345;
	quotient =number1/number2;
	cout<<quotient<<endl;
	
	//setprecision display the data with six significant digits by default
	
	cout<<setprecision(6)<<quotient<<endl;
	cout<<setprecision(5)<<quotient<<endl;
	cout<<setprecision(4)<<quotient<<endl;
	cout<<setprecision(3)<<quotient<<endl;
	cout<<setprecision(2)<<quotient<<endl;
	cout<<setprecision(1)<<quotient<<endl;
	//at 0 precision the output will be like 1
	cout<<setprecision(0)<<quotient<<endl;
	
}
