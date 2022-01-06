#include<iostream>
#include<cmath>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main() 
			{

	char calloop='y';			 // Determining wether to run the calculator or not.
	cout << "\t\t\t\t\t\t\tWELCOME < 3" << endl; 
	while (calloop == 'y')	
	{
		cout << endl;
		cout << "Do you want to use the calculator? ( Type 'y' if yes ) : " ;			// Input calloop
		cin >> calloop;
		cout << endl;
		if (calloop == 'y') {


			int switches = 0;
			cout << "The calculator has the 7 following functionalities : " << endl;
			cout << "1. Can calculate (x) raised to power of (y). " << endl;
			cout << "2. Can perform Arithmetic operations (+,-,/,x,%). " << endl;
			cout << "3. Can calculate Factorial. " << endl;
			cout << "4. Can calculate Trigonometric identities: cos, sin, tan." << endl;
			cout << "5. Can graph Vertical and Horizontal Histogram of a number, " << endl;
			cout << "6. Can graph Vertical and Horizontal Double-Histogram of a number, " << endl;
			cout << "7. Can Postmortem the float.\n " << endl;
			cout << "Choose any of the following functionality you want to use ( e.g Type \"3\" for Factorial etc..) : ";
			cin >> switches;  // To choose the function
			cout << endl;
			switch (switches)
			{
			case 1:
			{
				double base = 0, power = 0, answer = 1;
				double counter = 1;   // To terminate the loop
				cout << "Write the base  : "; 
				cin >> base;							//Give base
				cout << "Write the power : ";	
				cin >> power;							 //Give power
				while (counter <= power) {
					answer = answer * base;
					counter++;
				}

				cout << base << " rasied to power " << power << " is ";
				cout << answer << endl;

				break;
			}
			case 2:
			{

				long long int num1 = 0, num2 = 0; // Integer typed because % on double is not allowed
				long long int  ans = 0;
				char operators;  // To choose the opertaion
				cout << "What operation you want to perform (+ or - or % or / or * ) " << endl; // i.e + or - or % or / or *
				cin >> operators;
				cout << "Write the first number : ";
				cin >> num1;			//Give first number
				cout << "Write the second number : ";
				cin >> num2;			//Give second number
				if (operators == '+') 
				{  
					ans = num1 + num2;		// add operation
					cout << num1 << " " << operators << " " << num2 << " is ";
					cout << ans << endl;
				}
				else if (operators == '-') 
				{ 
					ans = num1 - num2;		 // subtract operation
					cout << num1 << " " << operators << " " << num2 << " is ";
					cout << ans << endl;
				}
				else if (operators == '/')  // division operation
				{
					if (num2 == 0) {
						cout << num1 << " " << operators << " " << num2 << " is ";
						cout << "INFINITY" << endl;
					}
					else {
						ans = num1 / num2;
						cout << num1 << " " << operators << " " << num2 << " is ";
						cout << ans << endl;
					}

				}
				else if (operators == '%') // modulus operation
				{
					ans = num1 % num2;
					cout << num1 << " " << operators << " " << num2 << " is ";
					cout << ans << endl;
				}
				else if (operators == '*') // multiplication operation
				{
					ans = num1 * num2;
					cout << num1 << " " << operators << " " << num2 << " is ";
					cout << ans << endl;
				}
				else {
					cout << "Invalid operation " << endl;
				}
				break;
			}
			case 3:
			{
				long long int number = 0, factorial = 1;
				int counter1;		// To terminate the loop
				cout << "Write the number to find its factorial : ";
				cin >> number;		// Give the number
				cout << endl;
				if (number >= 0)		// For non - negative numbers
				{
					counter1 = number; 
					while (counter1 >= 1)
					{
						factorial = factorial * counter1;
						counter1--;
					}
					if (factorial < 0) {
						factorial = -factorial;
					}
				}
				else if ( number < 0)	// For negative numbers
				{
					counter1 = number;
					while (counter1 <= -1)
					{
						factorial = factorial * counter1;
						counter1++;
					}
				}
				
				cout << "The factorial of " << number << " is " << factorial << endl;

				break;
			}
			case 4:
			{
				double angle = 0, value = 0;
				int functions = 0;
				cout << "Which trignometric function you want to perform? ( Choose from options only ). " << endl << endl;
				cout << "\t1) Sine of angle  \t\t\t\t 2) Cosine of the angle" << endl;
				cout << "\t\t\t\t  3) Tangent of angle" << endl;
				cin >> functions;		// Choose the function

				cout << "Write angle in radians : ";
				cin >> angle;		// Give angle
				if (functions == 1)
				{
					value = sin(angle);   // sine of angle
					cout << "The sine of the " << angle << " is : ";
					cout << value << endl;
				}
				else if (functions == 2)
				{
					value = cos(angle);   // cosine of angle
					cout << "The cosine of the " << angle << " is : ";
					cout << value << endl;
				}
				else if (functions == 3)
				{
					value = tan(angle);   // tangent of angle
					cout << "The tangent of the " << angle << " is : ";

					cout << value << endl;
				}
				

				else
				{
					cout << "Invalid function. " << endl;
				}
				break;
			}
			case 5:
			{
				int frequencey = 0, counter2 = 1;
				cout << "\t\t\tWrite the frequency of Histogram : ";  // To Determine the ammount of "*"
				cin >> frequencey;
				cout << endl;
				cout << "\t\t\t\tVERTICAL HISTROGRAM" << endl << endl;
				while (counter2 <= frequencey)		// Vertical histogram
				{
					cout << "\t\t\t\t\t*\n";
					counter2++;
				}
				cout << "\n";
				counter2 = 1;
				cout << "\t\t\t\tHORIZONTAL HISTOGRAM" << endl << endl;
				cout << "\t\t\t\t";
				while (counter2 <= frequencey)		// Horizontal Histogram
				{
					cout << "* ";
					counter2++;
				}
				break;
			}
			case 6:
			{
				int frequencey = 0, counter2 = 1;
				cout << "\t\t\tWrite the frequency of Histogram : ";  // To Determine the ammount of *
				cin >> frequencey;
				frequencey = frequencey * 2; // doubling the frequency
				cout << endl;
				cout << "\t\t\t\tVERTICAL HISTROGRAM" << endl << endl;
				while (counter2 <= frequencey)		// Vertical histogram
				{
					cout << "\t\t\t\t\t*\n";
					counter2++;
				}
				cout << "\n";
				counter2 = 1;
				cout << "\t\t\t\tHORIZONTAL HISTOGRAM" << endl << endl;
				cout << "\t\t\t\t";
				while (counter2 <= frequencey)		// Horizontal Histogram
				{
					cout << "* ";
					counter2++;
				}
				break;
			}
			case 7:
			{
				double actNum = 0;
				double left = 0, right = 0;
				cout << "Write the decimal number : ";		// Give decimal number	
				cin >> actNum;
				if (actNum >= 0)		// For non negative decimal numbers
				{
					cout << "\n";
					left = floor(actNum);  // to get the left number
					right = actNum - left;  // to get the right decimal

					cout << "The left part of the number " << actNum << " is " << left << " and the decimal part is " << right << endl;
				}
				else	// For negative decimal numbers
				{
					left = ceil(actNum);
					right = actNum - left;
					if (right < 0)
						right = -right;

					cout << "The left part of the number " << actNum << " is " << left << " and the decimal part is " << right << endl;

				}

				break;
			}

			default:
			{
				cout << "Wrong selections :( " << endl;
			}

			}
		}
		else {
			cout << "You did not say yes. Bye, calculator closed.  Have a nice day. " << endl;
		}

	}
	return 0;
}
	
