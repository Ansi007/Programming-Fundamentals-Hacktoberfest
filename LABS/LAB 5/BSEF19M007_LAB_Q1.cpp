#include<iostream>

using namespace std;

int main() {

	const int rows = 2;
	const int cols = 2;
	int identity[rows][cols] = { };
	int k = 1;
	int c = 0;

		for(int i = 0;i<2;i++){
			
			for(int a = 0;a<2;a++) {
				
				cin>>identity[i][a];
				
			}
			
		}
	
	if (rows != cols) cout << "It is  not square matrix so it can not be a identity matrix\n";

	else {


		for (int i = 0; i < 2; i++) {

			if (identity[i][i] == 1 && identity[i][k] == 0) c++;
			k--;

		}

	}
	
	if (c == 2)	cout << "IT IS AN IDENTITY MATRIX \n";
	else cout << " IT IS NOT AN IDENTITY MATRIX\n";

	return 0;
}



/* ALSO DO ABLE AS

int main() {

	const int rows = 2;
	const int cols = 2;
	int identity[rows][cols] = { {1,0},{0,1} };
	bool check=true;


	if (rows != cols) cout << "It is  not square matrix so it can not be a identity matrix\n";

	else {


	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < 2; j++) {


			if (i == j && identity[i][j] != 1)	check = false;
			if (i != j && identity[i][j] != 0)	check = false;


		}

	}

	}

	if (check == true)	cout << "IT IS AN IDENTITY MATRIX \n";
	else cout << "IT IS NOT AN IDENTITY MATRIX\n";

	return 0;
}

*/




