#include<iostream>

using namespace std;

/*
	THIS IS PATTERN's 1 code 
	
	*/

void p1() {
	int o = 1;
	int c = 1;

	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++) {

			cout << o << "\t";
			o = o + c;

		}
		o = o - c;
		c = c + 1;
		cout << endl;

	}
}

/*
	THIS IS PATTERN's 2 code

	*/

void p2() {


	int oo = 30;
	int cc = 10;
	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= 8; j++)
		{
			cout << oo << "\t";
			oo = oo + cc;
		}
		oo = oo - 70;
		cout << endl;
	}


}
/*
	THIS IS PATTERN's 3 code

	*/
void p3() {


	int q = 10;
	int ad = 10;
	int p = 0;
	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= 9; j++) {

			if (j == 1) {
				q = 10;
				q = q + p;
				cout << q << "\t";
				q = 20;

			}

			else {
				cout << q << "\t";
				q = q + ad;
			}


		}
		p = p + 10;
		cout << endl;
	}
}
/*
	THIS IS PATTERN's 4 code

	*/
void p4() {


	int q4 = 1;
	int counter = 1;
	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= 10; j++) {

			cout << q4 << "\t";
			q4 = q4 + counter;
		}

		q4 = (q4 / 10) + 1;
		counter++;
		cout << endl;
	}

}
/*
	THIS IS PATTERN's 5 code

	*/
void p5() {


	int got = 1;
	int add = 1;
	int got1 = 1;
	int minus = 10;
	int gotted = 1;

	for (int i = 1; i <= 12; i++) {



		if (i % 4 == 0) {
			for (int k = 1; k <= 22; k++) {
				cout << "*";
			}
			got1 = got - minus;
			add = 1;
			gotted++;
			minus += 2;
		}


		else {
			got = got1;

			for (int j = 1; j <= 3; j++) {
				cout << got << "\t";
				got = got + add;
			}
			got1 = got1 + gotted;
			add++;
		}




		cout << endl;

	}
}
/*
	THIS IS PATTERN's 6 code

	*/
void p6(){


	int a = 6;
	int b = 0;

	for (int i = 1; i <= 11; i++)
	{

		for (int j = 1; j <= a; j++) {
			cout << "*";
		}

		for (int k = 1; k <= b; k++) {
			cout << " ";
		}


		for (int j = 1; j <= a; j++) {
			cout << "*";
		}

		if (i >= 1 && i <= 5) {
			b += 2;
			a = a - 1;
		}

		else if (i >= 6 && i <= 10) {
			b -= 2;
			a = a + 1;
		}
		cout << endl;
	}

}


int main()

{
	cout << "\t\t\tPATTERN NO 1 : \n\n";
	p1();
	cout << "\n\n\n";
	cout << "\t\t\tPATTERN NO 2 : \n\n";
	p2();
	cout << "\n\n\n";
	cout << "\t\t\tPATTERN NO 3 : \n\n";
	p3();
	cout << "\n\n\n";
	cout << "\t\t\tPATTERN NO 4 : \n\n";
	p4();
	cout << "\n\n\n";
	cout << "\t\t\tPATTERN NO 5 : \n\n";
	p5();
	cout << "\n\n\n";
	cout << "\t\t\tPATTERN NO 6 : \n\n";
	p6();
	cout << "\n\n\n";



    return 0;
}
    