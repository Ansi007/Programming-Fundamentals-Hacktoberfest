#include<iostream>
#include<fstream>
using namespace std;

void CheckPrisonerStatus(int** , int , int );

int main() {

	int rows, cols;
	cout << " => How many rows are there? : ";
	cin >> rows;
	cout << " => How many coloumns are there?  : ";
	cin >> cols;

	int** a2d = new int* [rows];
	for (int i = 0; i < rows; ++i)
		a2d[i] = new int[cols];

	CheckPrisonerStatus(a2d,rows,cols);


	for (int i = 0; i < rows; ++i)
		delete[] a2d[i];
	delete[] a2d;


	return 0;

}


void CheckPrisonerStatus(int** a2d, int rows, int cols) {


	int trapped = 0, right_position = 0, left_position = 0;
	int left_row_index = 0, left_col_index = 0;
	int right_row_index = 0, right_col_index = 0;

	ofstream out("Status.txt", ios::out | ios::trunc);

	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
			a2d[i][j] = 0;



	cout << " => Give Top Left row index of the wall : ";
	cin >> left_row_index;
	cout << " => Give Top Left col index of the wall : ";
	cin >> left_col_index;

	cout << " => Give Bottom right index of the wall : ";
	cin >> right_row_index;
	cout << " => Give Bottom right index of the wall : ";
	cin >> right_col_index;
	
	for (int i = left_row_index; i <= right_row_index; i++) {

		for (int j = left_col_index; j <= right_col_index; j++) {

			if (i == left_row_index || i == right_row_index) a2d[i][j] = 1;
			else {
				a2d[i][left_col_index] = 1;
				a2d[i][right_col_index] = 1;
			}

		}
	}

	cout << " => Where is prisoner? " << endl;
	cout << " => Give row index of prisoner : ";
	cin >> left_position;
	cout << " => Give col index of the prisoner : ";
	cin >> right_position;
	a2d[left_position][right_position] = 2;

	char breaked;
	cout << " => Is wall breakable or not? Enter Y or y if yes : ";
	cin >> breaked;

	if (breaked == 'y' || breaked == 'Y') {

		a2d[left_row_index][left_col_index] = 0;
		out << " => Wall is breakable, The prisoner is free " << endl;

	}


	else {

		for (int i = left_row_index + 1; i < right_row_index; i++) {

			for (int j = left_col_index + 1; j < right_col_index; j++) {

				if (a2d[i][j] == 2) {
					trapped = 1;
					break;
				}

				else {

					trapped = 0;

				}

			}

			if (trapped == 1) break;

		}

		if (trapped == 1) out << " => The Prisoner is trapped." << endl;
		else out << " => The Prisoner is free." << endl;


	}

	out.close();
}

