//programm for entering char and getting ascii code
#include <iostream>
using namespace std;
int main()
{
	char letter;
	cout<<"Enter char data in letter : "<<endl;
	cin>>letter;
	cout<<static_cast<int>(letter)<<endl;
	return 0;
}
