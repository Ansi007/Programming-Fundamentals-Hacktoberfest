//Muhib Arshad

//libraries
#include <iostream>
#include <iomanip>
#include<conio.h>
using namespace std;

//Global Variables
const int col = 10;
const int row = 10;
const int col_w = 11;
const int row_w = 15;
const int set_default = 9;

//Function prototypes
int length(char board[][col_w], int row);
int bottom_toTop(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos);
int top_toBottom(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos);
int left_toRight(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos);
int right_toLeft(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos);
int topLeft_to_bottomRight(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos);
int bottomRight_to_topLeft(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos);
int bottomLeft_to_topright(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos);
int topright_to_bottomleft(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos);
void results(int dir, char words[row_w][col_w], char grid[col][row], int &rowPos, int &colPos);
void output(char grid[][col], int row, char words[][col_w], int row_w);

//Main Function
int main()
{
	//local Varibale
	int rowPos = 0;
	int colPos = 0;
	int dir;

	//grid
	char grid[row][col] = {
		{'T', 'N', 'E', 'M', 'N', 'G', 'I', 'S', 'S', 'A'},
		{'B', 'N', 'C', 'A', 'O', 'M', 'P', 'J', 'W', 'R'},
		{'C', 'L', 'A', 'R', 'I', 'F', 'Y', 'H', 'X', 'R'},
		{'L', 'O', 'S', 'C', 'T', 'G', 'H', 'C', 'E', 'V'},
		{'A', 'N', 'M', 'H', 'S', 'Y', 'S', 'T', 'E', 'M'},
		{'S', 'T', 'I', 'P', 'E', 'Q', 'N', 'A', 'F', 'E'},
		{'S', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 'M'},
		{'U', 'E', 'F', 'N', 'Q', 'T', 'G', 'Q', 'W', 'O'},
		{'D', 'K', 'R', 'O', 'W', 'T', 'E', 'N', 'K', 'R'},
		{'A', 'O', 'M', 'O', 'D', 'N', 'A', 'R', 'T', 'Y'},
	};

	//searching words
	char words[row_w][col_w] = {
		"COMPUTER",
		"QUESTION",
		"CLARIFY",
		"NETWORK",
		"SYSTEM",
		"CLASS",
		"SEQUENCE",
		"CATCH",
		"MEMORY",
		"RANDOM",
		"ASSIGNMENT",
		"MARCH",
		"SCANT",
		"SPEED",
		"ENTER"};
     
	//functions in the main
	output(grid, row, words, row_w);
	results(dir, words, grid, rowPos, colPos);
	return 0;
}

//Grid making 
void output(char grid[][col], int row, char words[][col_w], int row_w)
{
	for (int i = 0; i < 5; i++)
	{
		cout << endl;
	}
	cout << "\t\t\t*******************WELCOME TO WORDLE GAME********************" << endl;
	cout << endl;

	//initlizing the grid
	for (int i = 0; i < row; i++)
	{
		cout << "\t\t\t-------------------------------------------------------------" << endl;
		cout << "\t\t\t";
		for (int j = 0; j < col; j++)
		{

			cout << "|  ";
			cout << grid[i][j] << "  ";
		}
		cout << "|";
		cout << endl;
	}
	cout << "\t\t\t-------------------------------------------------------------" << endl;

	//space lines
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
	}

	//Search the words
	cout << "\t\t\t***************Words to Search*********************" << endl;
	for (int i = 0; i < row_w; i++)
	{
		cout << "\t\t\t";
		for (int j = 0; j < col_w; j++)
		{
			cout << words[i][j];
		}
		cout << endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;

	//Instructions 
	cout<<"\t\t\t*********************Instructions About Directions***************************"<<endl;
	cout<<"\t\t\tDirectio 0 means BOTTOM TO TOP"<<endl;
	cout<<"\t\t\tDirectio 1 means BOTTOM_LEFT TO TOP_RIGHT"<<endl;
	cout<<"\t\t\tDirectio 2 means LEFT TO RIGHT"<<endl;
	cout<<"\t\t\tDirectio 3 means TOP LEFT TO BOTTOM RIGHT"<<endl;
	cout<<"\t\t\tDirectio 4 means TOP TO BOTTOM"<<endl;
	cout<<"\t\t\tDirectio 5 means TOP_RIGHT TO BOTTOM_LEFT"<<endl;
	cout<<"\t\t\tDirectio 6 means RIGHT TO LEFT"<<endl;
	cout<<"\t\t\tDirectio 7 means BOTTOM_RIGHT TO TOP_LEFT"<<endl;
}

//results
void results(int dir, char words[row_w][col_w], char grid[col][row], int &rowPos, int &colPos)
{
	char ch;
	int n;
	cout << right;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t************************Searched Words*****************************" << endl;
	cout<<"\t\t\tEnter a to seached all the words:"<<endl;
	cout<<"\t\t\tEnter s to search the specific word:";

	//input
	ch=getch();
	ch=tolower(ch);
	//Inout validation
	while (ch != 's' && ch != 'a')
	{
		cout<<"\t\t\t Invalid Input:Please Enter the valid input:";
		ch=getch();
		ch = tolower(ch);
	}

	//to search the specific words
	if(ch=='s')
	{
		cout<<"\t\t\tEnter the index of the word to be searched from the list:";
		cin>>n;
		while(n<0 || n>7)
		{
			cout << "\t\t\t Invalid Input:Please Enter the valid input:";
			cin>>n;
		}
	}

	//Search the words in every row_w in all dirctions
	for (int i = 0; i < row_w; i++)
	{
		for (int index = i; index < row_w; index++)
		{
			if(ch=='s')
			{
			index=n;
			}
			dir = bottom_toTop(grid, row, words, index, col_w, rowPos, colPos);
			if (dir == 0)
			{
				cout << "\t\t\t";
				for (int i = 0; words[index][i] != '\0'; i++)
				{
					cout << words[index][i];
				}
				cout << " found at:" << setw(20) << "( " << rowPos << " , " << colPos << " )" << setw(20) << "Direction  " << dir << endl;
				break;
			}
			dir = bottomLeft_to_topright(grid, row, words, index, col_w, rowPos, colPos);
			if (dir == 1)
			{
				cout << "\t\t\t";
				for (int i = 0; words[index][i] != '\0'; i++)
				{
					cout << words[index][i];
				}
				cout << " found at:" << setw(20) << "( " << rowPos << " , " << colPos << " )" << setw(20) << "Direction  " << dir << endl;
				break;
			}
			dir = left_toRight(grid, row, words, index, col_w, rowPos, colPos);
			if (dir == 2)
			{
				cout << "\t\t\t";
				for (int i = 0; words[index][i] != '\0'; i++)
				{
					cout << words[index][i];
				}
				cout << " found at:" << setw(21) << "( " << rowPos << " , " << colPos << " )" << setw(20) << "Direction  " << dir << endl;
				break;
			}
			dir = top_toBottom(grid, row, words, index, col_w, rowPos, colPos);
			if (dir == 4)
			{
				cout << "\t\t\t";
				for (int i = 0; words[index][i] != '\0'; i++)
				{
					cout << words[index][i];
				}
				cout << " found at:" << setw(19) << "( " << rowPos << " , " << colPos << " )" << setw(20) << "Direction  " << dir << endl;
				break;
			}

			dir = right_toLeft(grid, row, words, index, col_w, rowPos, colPos);
			if (dir == 6)
			{
				cout << "\t\t\t";
				for (int i = 0; words[index][i] != '\0'; i++)
				{
					cout << words[index][i];
				}
				cout << " found at:" << setw(15) << "( " << rowPos << " , " << colPos << " )" << setw(20) << "Direction  " << dir << endl;
				break;
			}
			dir = topright_to_bottomleft(grid, row, words, index, col_w, rowPos, colPos);
			if (dir == 5)
			{
				cout << "\t\t\t";
				for (int i = 0; words[index][i] != '\0'; i++)
				{
					cout << words[index][i];
				}
				cout << " found at:" << setw(20) << "( " << rowPos << " , " << colPos << " )" << setw(20) << "Direction  " << dir << endl;
				break;
			}
			dir = bottomRight_to_topLeft(grid, row, words, index, col_w, rowPos, colPos);
			if (dir == 7)
			{
				cout << "\t\t\t";
				for (int i = 0; words[index][i] != '\0'; i++)
				{
					cout << words[index][i];
				}
				cout << " found at:" << setw(20) << "( " << rowPos << " , " << colPos << " )" << setw(20) << "Direction  " << dir << endl;
				break;
			}
			dir = topLeft_to_bottomRight(grid, row, words, index, col_w, rowPos, colPos);
			if (dir == 3)
			{
				cout << "\t\t\t";
				for (int i = 0; words[index][i] != '\0'; i++)
				{
					cout << words[index][i];
				}
				cout << " found at:" << setw(20) << "( " << rowPos << " , " << colPos << " )" << setw(20) << "Direction  " << dir << endl;
				break;
			}
		}
		if(ch=='s')
		{
			break;
		}
	}
}

//calculate the lenghth of the searching word
int length(char board[][col_w], int row)
{
	int count = 0;
	int i = 0;
	while (board[row][i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}

//Bottom to Top searching in every row and column
int bottom_toTop(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos)
{
	rowPos = 0;
	colPos = 0;
	bool flag = false;
	for (int i = 0; i < col && flag == false; i++)
	{
		for (int j = row - 1; j >= 0 && flag == false; j--)
		{
			//If first word of the searching and the grid is same
			if (board[j][i] == word[row_w][0])
			{
				//count beacome 1
				int count = 1;
				//Now calualte the count of words matching to the searching word and grid word in bottom to Top direction
				for (int k = j - 1, l = 1; k >= 0; k--, l++)
				{
					if (board[k][i] == word[row_w][l])
					{
						count++;
					}

					//if length become equals to the word search lenghth
					if (count == length(word, rowWord))
					{
						//flag become true means we search it
						flag = true;
					}
				}
			}
			//gives the row numberof searched word
			rowPos = j;
		}
		//Gives the column number of the search word
		colPos = i;
	}

	//Check stop searching or not
	if (flag == true)
	{
		return 0;
	}
	else
	{
		return set_default;
	}
}

// Top to bottom searching in every row and column
int top_toBottom(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos)
{
	rowPos = 0;
	colPos = 0;
	bool flag = false;
	for (int i = 0; i < col && flag == false; i++)
	{
		for (int j = 0; j < row && flag == false; j++)
		{
			// If first word of the searching and the grid is same
			if (board[j][i] == word[row_w][0])
			{
				// count beacome 1
				int count = 1;

				// Now calualte the count of words matching to the searching word and grid word in bottom to Top direction
				for (int k = j + 1, l = 1; k < row; k++, l++)
				{
					if (board[k][i] == word[row_w][l])
					{
						count++;
					}
					// if length become equals to the word search lenghth
					if (count == length(word, rowWord))
					{
						// flag become true means we search it
						flag = true;
					}
				}
			}
			// gives the row numberof searched word
			rowPos = j;
		}
		// Gives the column number of the search word
		colPos = i;
	}
	// Check stop searching or not
	if (flag == true)
	{
		return 4;
	}
	else
	{
		return set_default;
	}
}

// left_to_Right searching in every row and column
int left_toRight(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos)
{
	rowPos = 0;
	colPos = 0;
	bool flag = false;
	for (int i = 0; i < row && flag == false; i++)
	{
		for (int j = 0; j < col && flag == false; j++)
		{
			// If first word of the searching and the grid is same
			if (board[i][j] == word[row_w][0])
			{
				// count beacome 1
				int count = 1;

				// Now calualte the count of words matching to the searching word and grid word in bottom to Top direction
				for (int k = j + 1, l = 1; k < col; k++, l++)
				{
					if (board[i][k] == word[row_w][l])
					{
						count++;
					}

					// if length become equals to the word search lenghth
					if (count == length(word, rowWord))
					{
						// flag become true means we search it
						flag = true;
					}
				}
			}

			// Gives the column number of the search word
			colPos = j;
		}

		// gives the row numberof searched word
		rowPos = i;
	}

	// Check stop searching or not
	if (flag == true)
	{
		return 2;
	}
	else
	{
		return set_default;
	}
}

// right to Left searching in every row and column
int right_toLeft(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos)
{
	rowPos = 0;
	colPos = 0;
	bool flag = false;
	for (int i = 0; i < row && flag == false; i++)
	{
		for (int j = col - 1; j >= 0 && flag == false; j--)
		{
			// If first word of the searching and the grid is same
			if (board[i][j] == word[row_w][0])
			{
				// count beacome 1
				int count = 1;
				for (int k = j - 1, l = 1; k >= 0; k--, l++)
				{
					// Now calualte the count of words matching to the searching word and grid word in bottom to Top direction
					if (board[i][k] == word[row_w][l])
					{
						count++;
					}

					// if length become equals to the word search lenghth
					if (count == length(word, rowWord))
					{
						// flag become true means we search it
						flag = true;
					}
				}
			}
			// Gives the column number of the search word
			colPos = j;
		}
		// gives the row numberof searched word
		rowPos = i;
	}

	// Check stop searching or not
	if (flag == true)
	{
		return 6;
	}
	else
	{
		return set_default;
	}
}

// Top Left to Bottom right searching in every row and column
int topLeft_to_bottomRight(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos)
{
	rowPos = 0;
	colPos = 0;
	bool flag = false;
	for (int x = 0; x < row && flag == false; x++)
	{
		for (int j = 0; j < col && flag == false; j++)
		{
			// If first word of the searching and the grid is same
			if (board[x][j] == word[row_w][0])
			{
				// count beacome 1
				int count = 1;
				for (int k = j + 1, m = x + 1, l = 1; k < row; k++, l++, m++)
				{
					// Now calualte the count of words matching to the searching word and grid word in bottom to Top direction
					if (board[m][k] == word[row_w][l])
					{
						count++;
					}

					// if length become equals to the word search lenghth
					if (count == length(word, rowWord))
					{
						// flag become true means we search it
						flag = true;
					}
				}
			}
			// Gives the column number of the search word
			colPos = j;
		}
		// gives the row numberof searched word
		rowPos = x;
	}

	// Check stop searching or not
	if (flag == true)
	{
		return 3;
	}
	else
	{
		return set_default;
	}
}

// Bottom Right to Top Left searching in every row and column
int bottomRight_to_topLeft(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos)
{
	rowPos = 0;
	colPos = 0;
	bool flag = false;
	for (int x = 0; x < row && flag == false; x++)
	{
		for (int j = 0; j < col && flag == false; j++)
		{
			// If first word of the searching and the grid is same
			if (board[x][j] == word[row_w][0])
			{
				// count beacome 1
				int count = 1;
				for (int k = j - 1, m = x - 1, l = 1; k >= 0; k--, l++, m--)
				{
					if (board[m][k] == word[row_w][l])
					{
						count++;
					}

					// if length become equals to the word search lenghth
					if (count == length(word, rowWord))
					{
						// flag become true means we search it
						flag = true;
					}
				}
			}
			// Gives the column number of the search word
			colPos = j;
		}
		// gives the row numberof searched word
		rowPos = x;
	}

	// Check stop searching or not
	if (flag == true)
	{
		return 7;
	}
	else
	{
		return set_default;
	}
}

// Bottom_Left to Top_Right searching in every row and column
int bottomLeft_to_topright(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos)
{
	rowPos = 0;
	colPos = 0;
	bool flag = false;
	for (int x = 0; x < row && flag == false; x++)
	{
		for (int j = 0; j < col && flag == false; j++)
		{
			// If first word of the searching and the grid is same
			if (board[x][j] == word[row_w][0])
			{
				// count beacome 1
				int count = 1;
				for (int k = j + 1, m = x - 1, l = 1; k < row; k++, l++, m--)
				{
					if (board[m][k] == word[row_w][l])
					{
						count++;
					}

					// if length become equals to the word search lenghth
					if (count == length(word, rowWord))
					{
						// flag become true means we search it
						flag = true;
					}
				}
			}
			// Gives the column number of the search word
			colPos = j;
		}
		// gives the row numberof searched word
		rowPos = x;
	}

	// Check stop searching or not
	if (flag == true)
	{
		return 1;
	}
	else
	{
		return set_default;
	}
}

// Top_Right to Bottom_Left searching in every row and column
int topright_to_bottomleft(char board[][10], int row, char word[1][col_w], int row_w, int rowWord, int &rowPos, int &colPos)
{
	rowPos = 0;
	colPos = 0;
	bool flag = false;
	for (int x = 0; x < row && flag == false; x++)
	{
		for (int j = 0; j < col && flag == false; j++)
		{
			// If first word of the searching and the grid is same
			if (board[x][j] == word[row_w][0])
			{
				// count beacome 1
				int count = 1;
				for (int k = j - 1, m = x + 1, l = 1; k >= 0; k--, l++, m++)
				{
					if (board[m][k] == word[row_w][l])
					{
						count++;
					}

					// if length become equals to the word search lenghth
					if (count == length(word, rowWord))
					{
						// flag become true means we search it
						flag = true;
					}
				}
			}
			// Gives the column number of the search word
			colPos = j;
		}
		// gives the row numberof searched word
		rowPos = x;
	}

	// Check stop searching or not
	if (flag == true)
	{
		return 5;
	}
	else
	{
		return set_default;
	}
}