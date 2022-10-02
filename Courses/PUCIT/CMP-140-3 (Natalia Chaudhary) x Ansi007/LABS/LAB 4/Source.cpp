#include<iostream>
#include<iomanip>
using namespace std;
void p1() {

		int c = 0;
		for (int i = 1; i <= 6; i++) {
			int w = 1;
			for (int z = 1; z <= 6; z++)
			{
				cout << w << " ";
				w = w + c;
				w = w + 1;
			}
			c = c + 1;
			cout << endl;
		}


		
	}

void p2() {
	int j = 1;
	int k = 1;
	for (int i = 1; i <= 10; i++) {

		if (i % 2 == 1) {
			for (int q = 1; q <= k; q++)
			{
				cout << q << " ";
			}
			k = k + 2;
		}

		else if (i % 2 == 0) {
			for (int z = 1; z <= j; z++)
			{
				cout << j << " ";
			}
		}

		j = j + 1;
		cout << endl;
	}

}

void p3() {
	int k = 10;
	int j = 1;
	int p = 1;
	int m = 10;
	for (int i = 1; i <= 10; i++)
	{
		for (int z = 1; z <= k; z++) {
			cout << "  ";

		}

		if (i == 1 || i == 6) {
			for (int o = 1; o <= j; o++) {
				cout << "* ";

			}
			j = j + 5;
		}
		else {
			for (int l = 1; l <= p; l++) {
				cout << m << " ";
			}
		}
		p = p + 1;
		m = m - 1;
		k = k - 1;
		cout << endl << endl;

	}

}

void q2() {
	int binary = 0;
	int decimal = 0;
	int remainder = 0;
	int c = 0;
	int div = 0;
	cout << "WRITE THE BINARY NUNBER" << endl;
	cin >> binary;
	while (binary > 0) {

		remainder = binary % 10;
		div = remainder * pow(2, c);
		c = c + 1;
		binary = binary / 10;
		decimal = decimal + div;

	}

	cout << decimal;
}
int main() {
	p1();
	cout << "--------------------------------------------------------------------";
	cout << endl;
	p2();
	cout << "--------------------------------------------------------------------";

	cout << endl;
	p3();
	cout << "--------------------------------------------------------------------";

	cout << endl;
	q2();
	cout << endl;

	cout << "--------------------------------------------------------------------";


	return 0;
}