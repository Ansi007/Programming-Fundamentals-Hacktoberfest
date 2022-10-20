#include <iostream>
using namespace std;
char board[3][3] = { {'1', '2', '3'} ,{'4','5','6'} ,{'7','8','9'} };

void printBoard()
{
	cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
	cout << "----------" << endl;
	cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
	cout << "----------" << endl;
	cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

bool findWinner()
{
	if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') || (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') || (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') || (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') || (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') || (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') || (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'))
	{
		cout << "Player wins";
		return true;
	}
	else if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') || (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') || (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') || (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') || (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') || (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') || (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') || (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'))
	{
		cout << "Computer wins";
		return true;
	}
	else {
		return false;
	}
}
bool isBoardCompleted()
{
	int complete = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == 'X' || board[i][j] == 'O')
			{
				complete += 1;
			}
		}
	}
	if (complete == 9)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool takeTurn(string user)
{
	int digit;
	if (user == "player")
	{
		cin >> digit;
	}
	else if (user == "computer")
	{
		srand(time(NULL));
		digit = 1 + (rand() % 9);
	}
	switch (digit)
	{
	case 1:
		if (board[0][0] != 'X' && board[0][0] != 'O')
		{
			if (user == "player")
			{
				board[0][0] = 'X';
			}
			else if (user == "computer")
			{
				board[0][0] = 'O';
			}
			printBoard();
			return true;
		}
		else {
			return false;
		}
	case 2:
		if (board[0][1] != 'X' && board[0][1] != 'O')
		{
			if (user == "player")
			{
				board[0][1] = 'X';
				printBoard();
				return true;
			}
			else if (user == "computer")
			{
				board[0][1] = 'O';
				printBoard();
				return true;
			}
		}
		else {
			return false;
		}
	case 3:
		if (board[0][2] != 'X' && board[0][2] != 'O')
		{
			if (user == "player")
			{
				board[0][2] = 'X';
				printBoard();
				return true;
			}
			else if (user == "computer")
			{
				board[0][2] = 'O';
				printBoard();
				return true;
			}
		}
		else {
			return false;
		}
	case 4:
		if (board[1][0] != 'X' && board[1][0] != 'O')
		{
			if (user == "player")
			{
				board[1][0] = 'X';
				printBoard();
				return true;
			}
			else if (user == "computer")
			{
				board[1][0] = 'O';
				printBoard();
				return true;
			}
		}
		else {
			return false;
		}
	case 5:
		if (board[1][1] != 'X' && board[1][1] != 'O')
		{
			if (user == "player")
			{
				board[1][1] = 'X';
				printBoard();
				return true;
			}
			else if (user == "computer")
			{
				board[1][1] = 'O';
				printBoard();
				return true;
			}
		}
		else {
			return false;
		}
	case 6:
		if (board[1][2] != 'X' && board[1][2] != 'O')
		{
			if (user == "player")
			{
				board[1][2] = 'X';
				printBoard();
				return true;
			}
			else if (user == "computer")
			{
				board[1][2] = 'O';
				printBoard();
				return true;
			}
		}
		else {
			return false;
		}
	case 7:
		if (board[2][0] != 'X' && board[2][0] != 'O')
		{
			if (user == "player")
			{
				board[2][0] = 'X';
				printBoard();
				return true;
			}
			else if (user == "computer")
			{
				board[2][0] = 'O';
				printBoard();
				return true;
			}
		}
		else {
			return false;
		}
	case 8:
		if (board[2][1] != 'X' && board[2][1] != 'O')
		{
			if (user == "player")
			{
				board[2][1] = 'X';
				printBoard();
				return true;
			}
			else if (user == "computer")
			{
				board[2][1] = 'O';
				printBoard();
				return true;
			}
		}
		else {
			return false;
		}
	case 9:
		if (board[2][2] != 'X' && board[2][2] != 'O')
		{
			if (user == "player")
			{
				board[2][2] = 'X';
				printBoard();
				return true;
			}
			else if (user == "computer")
			{
				board[2][2] = 'O';
				printBoard();
				return true;
			}
		}
		else {
			return false;
		}
	}
}

void functionOne()
{

	cout << "Player is 'X' and computer is 'O' " << endl;
	printBoard();
}

void functionTwo()
{
	string user = "player";
	while (findWinner() == false && isBoardCompleted() == false)
	{
		bool turn = takeTurn(user);
		if (turn == true)
		{
			if (user == "player")
			{
				user = "computer";
			}
			else if (user == "computer")
			{
				user = "player";
			}
		}
	}

}
int main()
{
	functionOne();
	functionTwo();

}