//This programm used to avoid the integer division.

#include <iostream>
using namespace std;
int main()
{
	int books;
	int months;
	double permonth;
	
	cout<<"How many books u planned to read?"<<endl;
	cin>>books;
	cout<<"How many months do you have to read the books"<<endl;
	cin>>months;
	permonth = static_cast <double>(books)/months;
	cout<<"The bookss per month red are : "<<permonth<<endl;
	
}
