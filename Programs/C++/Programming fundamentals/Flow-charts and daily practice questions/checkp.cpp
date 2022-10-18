//checkpoint
#include <iostream>
using namespace std;
int main()
{
//	int funny=7;
//	int serious=15;
//	funny=serious % 2;
//	if (funny!=1)
//
//{
//	funny= 0;
//serious=0;
//	
//}
//else if(funny==2) {
//	funny = 10;
//	serious=10;
//}
//else{funny=1;
//serious=1;
//}
//cout<<funny<<" = funny, and   "<<serious <<" = serious."<<endl;





int books,coupons;
cout<<"How many books are being purchased?"<<endl;
cin>>books;
if (books<1)
{
coupons=0;
}
else if (books<3)
{
	coupons=1;
}

else if (books < 5)
{
	coupons = 2;
}

else
{
	coupons = 3;
	
}

cout<<"The number of coupons achieved is "<<coupons<<endl;
return 0;
}

