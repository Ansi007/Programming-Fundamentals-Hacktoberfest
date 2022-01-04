#include<iostream>
using namespace std;

int main() {

	int** array1[4] = {0};  // null pointing
	int* array2[4] = {0}; // null pointing
	int even = 1, odd = 0;

	for (int i = 0; i < 4; i++) {

		cout << " => Address of location of cell " << i << " of array1 is : " << &array1[i] << endl;
		cout << " => Address of location of cell " << i << " of array2 is : " << &array2[i] << endl;


		if (i % 2 == 0) {
			array1[i] = &array2[even];
			even += 2;
		}

		else {
			array1[i] = &array2[odd];
			odd += 2;
		}

	}

	
	for (int i = 0; i < 4; i++) {

		cout << " => Array1 has " << array1[i] << " in cell " << i << endl;
		cout << " => Array2 has " << array2[i] << " in cell " << i << endl;

	}


	return 0;
}