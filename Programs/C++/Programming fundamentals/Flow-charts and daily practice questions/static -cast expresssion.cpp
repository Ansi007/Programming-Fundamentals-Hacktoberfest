#include <iostream>
using namespace std;
int main()
{
	int a =5 ,b = 12;
	double x =3.4, z = 9.1;
	double permonth;
//permonth=b / static_cast<double>(a);
//permonth= static_cast<double>(b)/a;
//permonth=static_cast<double>(b)/static_cast<double>(a);
//permonth=b / static_cast<int>(x);
//permonth=static_cast<int>(x)/static_cast<int>(z);
//permonth=static_cast<int>(x* z);
permonth= static_cast<double>(static_cast<int>(x)*static_cast<int>(z));

cout<<permonth<<endl;
return 0;

}
