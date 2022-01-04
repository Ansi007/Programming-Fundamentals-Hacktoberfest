#include<iostream>
using namespace std;

void setValues(int* );
void AddtoMid(int*, int*);

int main() {

	int array1[100] = { 0 };

	setValues(array1);
	AddtoMid(array1,(array1+99));

	for (int i = 0; i < 100; i++) {

		cout << " => The value at the index " << i << " of the array is " << *(array1+i) << endl;

	}

	return 0;
}


void setValues(int* array1_p) {

	for (int i = 1; i < 100; i++) {

		if (i % 5 == 0) *(array1_p + i) = 1;
		if (i % 7 == 0) *(array1_p + i) = 2;

	}

}

void AddtoMid(int* pointer0, int* pointer99) {

	int* pointer49 = (pointer0 + 49);
	*pointer49 = *pointer0 + *pointer99;

}
