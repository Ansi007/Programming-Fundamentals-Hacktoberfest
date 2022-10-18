//mixing cin with cin.get
#include <iostream>
using namespace std;
int main()
{
	char ch;
	int number;
	cout<<"Enter a number : "<<endl;
	cin>>number;
		cin.ignore();
		cout<<"Enter a character : "<<endl;

    cin.get(ch);
	cout<<"Thankyou!!!"<<endl;
	return 0;

}
