//hypotinuse calculation
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;int main()
{
	double a, b, c;
	cout<<"Enter value of a"<<endl;
	cin>>a;
	cout<<"Enter value of b:"<<endl;
	cin>>b;
	c= sqrt(pow(a ,2.0) + pow(b,2.0));
	cout<<"the hypotinuse of right triangle is: "<<c<<endl;
	return 0;
	
}
