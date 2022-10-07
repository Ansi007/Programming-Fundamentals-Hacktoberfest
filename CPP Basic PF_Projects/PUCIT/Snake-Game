#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;

bool normalgame, mainmenu, snakegame;
const int width = 25,
height = 25;
//user var
int x, y, speed = 1;
//tail var
int tailX[100], tailY[100], taillength;
//tail coordinates
int fposX, fposY, sposX, sposY;
//target var
int targetX, targetY;
//game var
int score;
enum directions { Stop = 0, Up, Down, Right, Left };

directions dir;

void game_setup()
{
	snakegame = true;
	mainmenu = true;
}

void game_over()
{
	normalgame = false;
	mainmenu = true;
	taillength = 0;
	score = 0;
}
void main_menu()
{
	system("cls");
	mainmenu = true;
	cout << "-------This is the main menu--------" << endl;
	cout << "Press enter to play the game " << endl;

	if (GetAsyncKeyState(VK_RETURN))
	{
		mainmenu = false;
	}
	else if (GetAsyncKeyState(VK_LEFT) || GetAsyncKeyState('A'))
	{
		dir = Stop;
	}

	else if (GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState('D'))
	{
		dir = Stop;
	}

	else if (GetAsyncKeyState(VK_UP) || GetAsyncKeyState('W'))
	{
		dir = Stop;
	}

	else if (GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState('S'))
	{
		dir = Stop;
	}




}
void normal_setup()
{
	normalgame = true;
	dir = Stop;

	x = rand() % width;
	y = rand() % height;

	targetX = rand() % width;
	targetY = rand() % height;
	while (x == targetX && y == targetY)
	{
		x = rand() % width;
		y = rand() % height;
		targetX = rand() % width;
		targetY = rand() % height;
	}
	score = 0;

}

void game_window()
{
	system("cls");
	for (int i = 0; i < width; i++)
	{
		cout << "*";
	}
	cout << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1)
			{
				cout << "*";
			}
			else if (i == y && j == x)
			{
				cout << "$";
			}
			else if (i == targetY && j == targetX)
			{
				cout << "O";
			}
			else
			{
				bool tail = false;
				for (int k = 0; k < taillength; k++)
				{
					if (j == tailX[k] && i == tailY[k])
					{
						cout << "s";
						tail = true;
					}

				}
				if (!tail)
				{
					cout << " ";
				}
			}

		}
		cout << endl;
	}

	for (int i = 0; i < width; i++)
	{
		cout << "*";
	}
	cout << endl;
	cout << endl;
	cout << "\t\t\t:-------Your Score --------:\t" << score;


}
void user_input()
{
	if ((GetAsyncKeyState(VK_LEFT) || GetAsyncKeyState('A')) && dir != Right)
	{
		dir = Left;
	}

	else if ((GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState('D')) && dir != Left)
	{
		dir = Right;
	}

	else if ((GetAsyncKeyState(VK_UP) || GetAsyncKeyState('W')) && dir != Down)
	{
		dir = Up;
	}

	else if ((GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState('S') && dir != Up))
	{
		dir = Down;
	}

	else if (GetAsyncKeyState(VK_RETURN))
	{
		return;
	}







}
void game_program()
{
	//tail
	fposX = tailX[0];
	fposY = tailY[0];
	tailY[0] = y;
	tailX[0] = x;
	for (int i = 1; i < taillength; i++)
	{
		sposX = tailX[i];
		sposY = tailY[i];

		tailX[i] = fposX;
		tailY[i] = fposY;

		fposX = sposX;
		fposY = sposY;

		while (fposX == targetX && fposY == targetY)
		{
			targetX = rand() % width;
			targetY = rand() % height;
		}


	}


	switch (dir)
	{
	case Left:
	{
		x -= speed;
	}
	break;
	case Right:
	{
		x += speed;
	}
	break;

	case Up:
	{
		y -= speed;
	}
	break;
	case Down:
	{
		y += speed;
	}
	break;

	}
	//snake hits border
	if (x <= 0 || x >= width - 1 || y < 0 || y > height - 1)
	{
		game_over();
	}

	//snake hits target
	if (x == targetX && y == targetY)
	{
		targetX = rand() % width;
		targetY = rand() % height;
		score++;
		taillength++;
	}
	//snake hits target
	for (int i = 0; i < taillength; i++)
	{
		if (x == tailX[i] && y == tailY[i])
			game_over();
	}

}
int main()
{
	game_setup();
	while (snakegame == true)
	{
		if (mainmenu == true)
		{
			main_menu();
		}
		else if (mainmenu == false)
		{
			normal_setup();
			while (normalgame == true)
			{
				game_window();
				user_input();
				game_program();


			}
		}
	}
	return 0;
}