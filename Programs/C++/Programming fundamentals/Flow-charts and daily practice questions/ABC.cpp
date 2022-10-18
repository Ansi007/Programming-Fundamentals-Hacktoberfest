#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const double PI = 3.1415;
	double area,radius;
	cout <<"This programm calculates the area of the circle"<<endl;
	cout<<"Provide the radius of circle? "<<endl;
	cin>>radius;
	area =PI * pow ( radius ,2.0);
	cout<<"The ara of circle is "<<area<<endl;
	return 0;
	}
