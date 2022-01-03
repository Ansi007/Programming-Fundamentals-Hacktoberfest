#include<iostream>
#include<cmath>
using namespace std;


void add(double a, double b) {

	double add_ans = 0;
	add_ans = a + b;
	cout << " => The sum is : " << add_ans << endl;
}

void sub(double a, double b) {

	double sub_ans = 0;
	sub_ans = a - b;
	cout << " => The difference is : " << sub_ans << endl;
}

void div(double a, double b) {

	double div_ans = 0;
	div_ans = a / b;
	cout << " => The division is : " << div_ans << endl;
}

void multiply(double a, double b) {

	double mul_ans = 0;
	mul_ans = a * b;
	cout << " => The Multiplication is : " << mul_ans << endl;
}

void mod(double a, double b) {

	double mod_ans = 0;
	mod_ans = int(a) % int(b);
	cout << " => The mod is : " << mod_ans << endl;
	cout << " => NOTE A THING HERE AS OF DOUBLES CAN NOT BE TAKEN THEY ARE CONVERTED INTO INTEGERS...\n";
}



void power(double a, double b) {

	double pow_ans = 0;
	pow_ans = a + b;
	cout << " => The power ( a raised to power b ) is : " << pow(a,b) << endl;
}


void sqrt(double a, double b) {

	double sqrt_ans = 0;
	double sqrt_ans1 = 0;
	sqrt_ans = sqrt(a);
	sqrt_ans1 = sqrt(b);
	cout << " => The Square root of " << a << " is : " << sqrt_ans << endl;
	cout << " => The Square root of " << b << " is : " << sqrt_ans1 << endl;

}

void sin(double a, double b) {

	double sin_ans = 0;
	sin_ans = sin(a);
	cout << " => The sin of " << a << " is : " << sin_ans << endl;
	double sin_ans1 = 0;
	sin_ans1 = sin(b);
	cout << " => The sin of " << b << " is : " << sin_ans1 << endl;
}

void cos(double a, double b) {

	double cos_ans = 0;
	cos_ans = sin(a);
	cout << " => The cos of " << a << " is : " << cos_ans << endl;
	double cos_ans1 = 0;
	cos_ans1 = cos(b);
	cout << " => The cos of " << b << " is : " << cos_ans1 << endl;
}

void tan(double a, double b) {

	double tan_ans = 0;
	tan_ans = tan(a);
	cout << " => The tan of " << a << " is : " << tan_ans << endl;
	double tan_ans1 = 0;
	tan_ans1 = tan(b);
	cout << " => The tan of " << b << " is : " << tan_ans1 << endl;
}

int main() {
	double a = 0;
	double b = 0;
	char con = 'y';
	cout << "__________________________AS PRESENTS 10 FUNCTIONED CALCULAOTOR__________________________\n" << endl;
	cout << " => Please give the two numbers first on which you want to perfrom specific functions.\n";
	cout << " => Give \"a\".\n";
	cin >> a;
	cout << " => Give \"b\".\n";
	cin >> b;
	int choice = 0;
	while (con == 'y' || con =='Y') {

		cout << " => Which function you want to perform? Please choose from one of the following.\n";
		cout << " => 1. Add ( a + b ) \n";
		cout << " => 2. Subtract ( a - b )\n";
		cout << " => 3. Divide ( a / b ) \n";
		cout << " => 4. Multiply ( a * b ) \n";
		cout << " => 5. TakeMod ( a % b or a mod b ) \n";
		cout << " => 6. TakePower ( a ^ b ) \n";
		cout << " => 7. TakeSquareRoot [ sqrt(a), sqrt(b) ] \n";
		cout << " => 8. TakeSin [ sin(a), sin(b) ]\n";
		cout << " => 9. Takecos [ cos(a), cos(b) ] \n";
		cout << " => 10. Taketan [ tan(a), tan(b) ] \n";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			add(a, b);
			break;
		}
		case 2:
		{
			sub(a, b);
			break;
		}
		case 3:
		{
			div(a, b);
			break;
		}
		case 4:
		{
			multiply(a,b);
			break;
		}
		case 5:
		{
			mod(a, b);
			break;
		}
		case 6:
		{
			power(a, b);
			break;
		}
	
		case 7:
		{
			sqrt(a, b);
			break;
		}
		case 8:
		{
			sin(a, b);
			break;
		}
		case 9:
		{
			cos(a, b);
			break;
		}
		case 10:
		{
			tan(a, b);
			break;
		}
		default: {
			cout << " => INVALID OPTION\n";
			break;

		}
		}
		cout << " => Do you still want  to continue performing fucntions? [ if yes enter \"y\" else anything. ] \n";
		cin >> con;
	}
	
	


	cout << " => YOU EXITED THE CALCULATOR, HAVE A NICE DAY!.\n";
	return 0;
}
