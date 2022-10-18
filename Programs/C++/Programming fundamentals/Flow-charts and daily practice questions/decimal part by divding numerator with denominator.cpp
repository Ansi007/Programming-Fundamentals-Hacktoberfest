//this programm ask the denominatorand numeratiir and ask for the fraction and display decimal result.
#include <iostream>
using namespace std;
int main()
{
	double numerator,denominator;
	cout<<"This programm calculate the decimal value of a fraction."<<endl;
	cout<<"Enter numerator"<<endl;
	cin>>numerator;
	cout<<"Enter denominator"<<endl;
	cin>>denominator;
	cout<<"The dceimal value is"<<endl;
	cout<<(numerator/denominator) <<endl;
	return 0;
	
}
