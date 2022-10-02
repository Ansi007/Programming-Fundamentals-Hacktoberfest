#include <iostream>
using namespace std;

int main()
{
	char input;

	cout << "Type any character: ";
	cin >> input;

	if (input >='a' && input <='z')
	{
		cout << "The given character is lower case" << endl;
	
	}

	else if (input >= 'A' && input <= 'Z')
	{
		cout << "The given character is upper case" << endl;

	}

	else
	{
		cout << "The given character not a alphabet" << endl;
	}
	return 0;
}