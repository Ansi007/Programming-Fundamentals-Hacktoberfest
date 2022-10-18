#include <iostream>
using namespace std;
int main()
{
	int books;  //no. of books to read
	int month;  //no. of months required to read
	double perMonth;      //Average number of books per month
	cout<<"books : "<<endl;
	cin>> books;
	cout<<"month : "<<endl;
	cin>> month;
	perMonth = static_cast <double>(books)/month;
	cout<<"This is "<<perMonth<<"books plan to read "<<endl;
	return 0;
	
	
	
	
	
	
	
	
	
}

