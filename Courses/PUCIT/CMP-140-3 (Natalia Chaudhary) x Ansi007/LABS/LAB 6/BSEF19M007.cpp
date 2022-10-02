#include<iostream>

using namespace std;

void takeInput();
void meter_centi(double foot, double inches);
void giveOutput(double meter, double centi);


void takeInput()
{
	double foot, inches;

	cout << "Give  Feets (E.g A positive value 5)  : ";
	cin >> foot;
	cout << "Give  inches (E.g A positive value 7) : ";
	cin >> inches;
	if (foot < 0)	foot = -(foot);
	if (inches < 0)	inches = -(inches);
	meter_centi(foot,inches);
}


void meter_centi(double foot, double inches)

{
	double meter, centi;
	
	inches = (foot * 12) + inches;
	meter = inches * 0.0254;
	centi = meter * 100;
	giveOutput(meter, centi);
}



void giveOutput(double meter,double centi)
{
	cout << "Length in meters is : " << meter << endl;
	cout << "Length in centi-meters is : " << centi << endl;
}





int main()
{
	char con = 'y';
	while (con == 'y' || con == 'Y') {
		takeInput();
		cout << "Do you want to continue? [ Press \"y\" if yes] \n";
		cin >> con;
	}
	cout << "You ended the program\n";
	return 0;
}
