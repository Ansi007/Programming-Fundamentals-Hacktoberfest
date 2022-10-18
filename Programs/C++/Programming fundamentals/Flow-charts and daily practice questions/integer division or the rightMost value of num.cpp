//programm to find the right most number and the integer division
#include <iostream>
using namespace std;
int main ()
{
	int num = 12345;
	int rightMost;
	//find the rightmost number in the number
	
	rightMost=num % 10;
	 cout<<"The rightMost value in the number "<< "is : "<<rightMost<<endl;
	 return 0;
}
