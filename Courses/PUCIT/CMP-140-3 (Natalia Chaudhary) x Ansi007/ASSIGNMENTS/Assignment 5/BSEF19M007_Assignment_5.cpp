#include<iostream>

using namespace std;

int main() {

	int square[6][6] = { };
	int query[3][3] = { {2,3,6},{8,0,1},{0,1,3} };
	int sorted[4] = {};
	unsigned int seedx;
	unsigned int seedy;
	unsigned int dimension = 0;
	int Directional_1_sum = 0;
	int Directional_2_sum = 0;
	int Directional_3_sum = 0;
	int Directional_4_sum = 0;
	int s4 = 2;


	for (int a = 0; a < 6; a++ )
	{
		cout << "Enter " << a+1 << "th row : ( 6 elements and press enter )\n";
		for (int b = 0; b < 6; b++) {


			cin >> square[a][b];



		}



	}
	
	cout << "GIVE SEED ROW INDEX [ From 0 to 5] : ";
	cin >> seedy;
	cout << "GIVE SEED COLUMN INDEX [ From 0 to 5] : ";
	cin >> seedx;
	cout << "GIVE DIMENSION [ From 1 to 6] : ";
	cin >> dimension;

	cout << endl << endl;
	cout << "\t\t\tSQUARE\n";
	cout << endl << endl;

	for (int i = 0; i < 6; i++) {

		cout << "\t\t\t";
		for (int j = 0; j < 6; j++) {

			cout << square[i][j] << " ";

		}

		cout << endl;

	}

	cout << "\n\t\t\tQuery Rectangle\n";
	cout << endl << endl;

	for (int i = seedy; i < seedy+dimension; i++) {

		cout << "\t\t\t";

		for (int j = seedx; j < seedx+dimension; j++) {

			if (i > 5 || j > 5) break;
			cout << square[i][j] << " ";

		}

		if (i > 5) break;
		cout << endl;
	}


	

	cout << "\n\n__________________BONUS PART____________\n\n";

	cout << "\nThe matrix is : \n";
	cout << "2 3 6\n";
	cout << "8 0 1\n";
	cout << "0 1 3\n";
	cout << "The Directional sums are :\n\n";

	for (int j = 0; j < 3; j++) {
		/*
		
		10+11+12
		01+11+21
		00+11+22
		02+11+20

		
		
		*/
		Directional_1_sum = Directional_1_sum + query[1][j];
		Directional_2_sum = Directional_2_sum + query[j][1];
		Directional_3_sum = Directional_3_sum + query[j][j];
		Directional_4_sum = Directional_4_sum + query[j][s4];
		s4--;
	}



		sorted[0] = Directional_1_sum;
		sorted[1] = Directional_2_sum;
		sorted[2] = Directional_3_sum;
		sorted[3] = Directional_4_sum;

		

	

	int  temp;
	
	for (int i = 0; i < (4 - 1); i++)
	{
		for (int j = 0; j < (4 - i - 1); j++)
		{
			if (sorted[j] > sorted[j + 1])
			{
				temp = sorted[j];
				sorted[j] = sorted[j + 1];
				sorted[j + 1] = temp;
			}
		}
	}



	cout << "Smallest sum is : " << sorted[0] << endl;
	cout << "2nd smallest sum is : " << sorted[1] << endl;
	cout << "3rd smallest sum  is : " << sorted[2] << endl;
	cout << "largest sum  is : " << sorted[3] << endl;


	return 0;
}















/*

00 01 02
10 11 12
20 21 22



*/