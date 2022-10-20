#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int computer = 1 + (rand() % 3);
    cout << "\t" << "==================" << endl;
    cout << "\t" << "ROCK PAPER SCISSOR" << endl;
    cout << "\t" << "==================" << endl;
    cout << "Enter 1 for rock" << endl << "Enter 2 for paper" << endl << "Enter 3 for scissor" << endl;
    int user;
    cout << "Enter a number: " << endl;
    cin >> user;
    switch (user)
    {
    case 1:
        cout << "rock" << endl;
        break;
    case 2:
        cout << "paper" << endl;
        break;
    case 3:
        cout << "scissor" << endl;
        break;
    default:
        cout << "Invalid option" << endl;
        break;
    }
    switch (computer)
    {
    case 1:
        cout << "rock" << endl;
        break;
    case 2:
        cout << "paper" << endl;
        break;
    case 3:
        cout << "scissor" << endl;
        break;
    default:
        cout << "Invalid option" << endl;
        break;
    }
    if (user == computer)
    {
        cout << "Tie";
    }
    else if (user == 1 && computer == 2)
    {
        cout << "computer wins";
    }
    else if (user == 1 && computer == 3)
    {
        cout << "User wins";
    }
    else if (user == 2 && computer == 1)
    {
        cout << "User wins";
    }
    else if (user == 2 && computer == 3)
    {
        cout << "Computer wins";
    }
    else if (user == 3 && computer == 1)
    {
        cout << "Computer wins";
    }
    else if (user == 3 && computer == 2)
    {
        cout << "User wins";
    }
    return 0;
}
