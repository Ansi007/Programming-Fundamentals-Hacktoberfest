//This programm uses thetype satatic- cast to print the character data
#include <iostream>
using namespace std;
int main()
{
	//variable declarration
	int number;
	//variable initiation
	number = 65;
	//display value in variable
	cout<<number<<endl;
	
	//convert data from the  int type to the character type.
		cout<<static_cast<char>(number)<<endl;
}
