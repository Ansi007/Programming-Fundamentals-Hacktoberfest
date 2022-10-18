//int data type converted to char data type
#include <iostream>
using namespace std;
int main()
{
	int number = 65;
	//ask for the number from user
	cout<<number<<endl<<static_cast<char>(number)<<endl;
	return 0;
	
}
