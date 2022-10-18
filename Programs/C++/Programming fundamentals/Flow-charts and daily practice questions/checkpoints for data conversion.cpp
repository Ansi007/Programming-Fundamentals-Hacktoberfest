//checkpoint for data conversion
#include <iostream>
using namespace std;
int main()
{
	int a= 5,b = 12;
	double x = 3.4,z=9.1;
//	cout<<b/a<<endl;
//cout<<x*a<<endl;
//cout<<static_cast<double>(b/a);
//cout<<static_cast<double>(b)/a;
//cout<<b/ static_cast<double> (a);
//cout<<static_cast <double>(b)/static_cast <double> (a);
//cout<<b/static_cast <double>(x);
//cout<<b / static_cast <int>(x);
//cout<<static_cast<int>(x)*static_cast<int>(z);
//cout<<static_cast<int>(x * z);
cout<<static_cast<double>(static_cast<int>(x) * static_cast<int>(z));
//only the expression inside the static_cast double was printed





	return 0;
	
}

