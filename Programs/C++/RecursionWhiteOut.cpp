#include "iostream"
#include "fstream"

using namespace std;

void eraseObjectIfOne(int **ar, int r, int c, int i, int j, char prev_index_symbol);
void setAr(int **ar, int i, int j){
	ar[i][j] = 0;
}

//complete the implementation of eraseObject function
void eraseObject (int** ar, int r, int c, int i, int j)
{
	if (ar[i][j] != 1)
		cout << "Not a index containing black colour" << endl;

	eraseObjectIfOne(ar, r, c, i, j, 'n');
}

void eraseObjectIfOne(int **ar, int r, int c, int i, int j, char prev_index_symbol) {
	
	// Recursive cases
	setAr(ar, i , j);

	// Check for the right side of the given index

 	if (j + 1 < c && ar[i][j + 1] == 1 && prev_index_symbol != 'l')
		eraseObjectIfOne(ar, r, c, i, j + 1, 'r');
	
	// Check for the left side of the given index
	if (j - 1 > 0 && ar[i][j - 1] == 1 && prev_index_symbol != 'r')
		eraseObjectIfOne(ar, r, c, i, j - 1, 'l');

	// Check for the above of the given index
	if (i - 1 >= 0 && ar[i - 1][j] == 1 && prev_index_symbol != 'b')
		eraseObjectIfOne(ar, r, c, i - 1, j, 'a');
	
	// Check for the below of the given index
	if (i + 1 < r && ar[i + 1][j] == 1 && prev_index_symbol != 'a')
		eraseObjectIfOne(ar, r, c, i + 1, j, 'b');

	// If there are no zeros in the neighbouring areas, then

	return;

}

int main(void)
{
	//opening file
	ifstream inf("input.txt");

	if(!inf)
	{
		cout << "Failed to open a file" << endl;
		exit(0);
	}

	int ROWS, COLS, p_x, p_y;
		
	inf >> ROWS >> COLS;	//rading size of image from file
	inf >> p_x >> p_y;		//reading coordinates of the pixel from file
	
	//array of pointers
	int **ar = new int*[ROWS];

	//each location has COLS size int array
	for(int i = 0; i < ROWS; i++)
	{
		ar[i] = new int[COLS];
	}

	//reading image data from file into ar
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			inf >> ar[i][j];
		}
	}

	//closing file
	inf.close();

	//making call to eraseObject function
	eraseObject (ar, ROWS, COLS, p_x, p_y);
	
	//displaying image data after processing
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			cout << ar[i][j] << " ";
		}
		cout << endl;
	}
	
	//freeing all the allocated memory
	for(int i = 0; i < ROWS; i++)
	{
		delete[] ar[i];
	}
	delete[] ar;
	
	return 0;
}