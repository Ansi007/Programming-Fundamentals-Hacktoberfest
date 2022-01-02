#include<iostream>

using namespace std;

int main() {

	const int size = 7;
	int index[7] = { -7, 1, 5, 2, -4, 3, 0 };
	int left = 0;
	int right = 0;
	int i=0;
	int x = 0;


	for (int l = 0; l < size; l++) {


		for ( i = l-1; i >= 0; i--) {

			left = left + index[i];

		}

		for (i = l + 1; i <= size - 1; i++) {

			right = right + index[i];

		}

		if (left == right) {

			cout << "Value " << index[l] <<" at Index " << l  << " is an equilibium index.\n";
			x = 1;
		}
		
		
		left = 0;
		right = 0;

	}
	
	if (x != 1)	cout << "-1\n";
	
	return 0;

}






	
