#include<iostream>
using namespace std;

int main() {

	int initial[10] = { 0 };
	int* array1[10] = {0};
	int even = 2;
	int* zero_value;
	int hub = 0;

	for (int i = 0; i < 10; i++) {

		array1[i] = &initial[i]; //initializing

	}

	zero_value = array1[0];

	for (int i = 0; i < 10; i ++) {

		if (i % 2 == 0) {

			if (i == 8) {

				array1[8] = zero_value;

			}

			else {

				array1[i] = array1[even];
				even += 2;

			}
		}

		else {

			array1[i] = &hub;

		}

		cout << " => The address of the system present at Index  " << i << " is : " << &array1[i] << endl;
		cout << " => The contents of the system present at Index " << i << " is : " << array1[i] << endl;
	}

	cout << " => The address of the Hub is " << &hub << " and the contents are " << hub << endl;
	
	return 0;

}