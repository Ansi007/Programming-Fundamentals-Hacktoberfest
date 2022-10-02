#include<windows.h> 
#include<iostream>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void draw(int width) {

	CursorPosition.X = 0;
	CursorPosition.Y = 0;
	SetConsoleCursorPosition(console, CursorPosition);
	
	for (int i = 1; i <= width; i++) {

		cout << "*";

	}

}


void draw(int length, int width2,int posX) {

	posX += 5;
	int posY = 0;
	CursorPosition.X = posX;
	CursorPosition.Y = posY++;
	SetConsoleCursorPosition(console, CursorPosition);

	for (int a = 1; a <= length; a++) {

		for (int k = 1; k <= width2; k++) {

			cout << "*";

		}

		CursorPosition.X = posX;
		CursorPosition.Y = posY++;
		SetConsoleCursorPosition(console, CursorPosition);


	}
	
}


int main() {

	int width = 6;
	int width2 = 6, length = 6;

	
	draw(width);
	draw(length,width2,width);
	
	return 0;
}

