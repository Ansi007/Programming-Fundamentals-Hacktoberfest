#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int A=0, B=0;
	char c;
	int result;
	int Decision;
	cout << "Give input A:  ";
	cin >> A;
	cout << "Give input B:  ";
	cin >> B;
	result = (!(A & B) ^ B);
	cout << "The result that came is : " << result << endl;
	

	if (result >= 0 && result <= 20) {
		Decision = 1;
	}

	else if (result >= 21 && result <= 50) {
		Decision = 0;
	}
	
	else {
		Decision = -1;
	}

	if (Decision == 0) {
		c = '0';

	}
	else if (Decision == 1)
	{
		c = '1';
	}
	else if (Decision == -1)
	{
		c = '*';

}
	else{}
	
	cout << "\t\t\t\t\t\t*\n";
	cout << "\t\t\t\t\t" << c << "\t" << c << "\n";
	cout << "\t\t\t\t*\t*\t*\n";
	cout << "\t\t\t" << c << "\t" << c << "\t" << c << "\t" << c << "\n";
	cout << "\t\t*\t*\t*\t*\t*\n";
	cout << "\t" << c << "\t" << c << "\t" << c << "\t" << c << "\t" << c << "\t" << c << "\n";
	cout << "*\t*\t*\t*\t*\t*\t*\n";
	cout << endl;

	return 0;

}





