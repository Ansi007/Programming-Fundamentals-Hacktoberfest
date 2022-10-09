//Muhib Arshad (muhib7353)

// Libararies
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <conio.h>
using namespace std;

//global Variables
const int row = 13;
const int col = 50;

// Display the screen
void displaygeneral(char mat[][col], int row)
{
    system("cls");
    for (int i = 0; i < 7; i++)
    {
        cout << endl;
    }
    cout << "\t\t\t\t\t**********INSTRUCTIONS TO PLAY THE GAME:***********" << endl;
    cout << "\t\t\t\t\t ___________________________________________________" << endl;
    cout << "\t\t\t\t\t|                                                   |" << endl;
    cout << "\t\t\t\t\t|          ENTER \"W\" TO MOVE_UPWARD:                |" << endl;
    cout << "\t\t\t\t\t|          ENTER \"S\" TO MOVE_DOWNWARD:              |" << endl;
    cout << "\t\t\t\t\t|          ENTER \"A\" TO MOVE_LEFTWARD:              |" << endl;
    cout << "\t\t\t\t\t|          ENTER \"D\" TO MOVE_RIGHTWARD:             |" << endl;
    cout << "\t\t\t\t\t|          ENTER \"Q\" TO LEAVE THE GAME:             |" << endl;
    cout << "\t\t\t\t\t|___________________________________________________|" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        cout << "\t\t\t\t\t";
        for (int j = 0; j < col; j++)
        {

            cout << mat[i][j];
        }
        cout << endl;
    }
}

// Initiliaze the grid and mazes
void grid(char mat[][col], int row)
{
    //! firstly initlize
    // todo:1-All values with ' '
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = ' ';
        }
    }

    // todo:2-starting point
    mat[1][1] = 1;

    //! making grid sides maze
    // todo:1-left_side
    for (int i = 1; i < row; i++)
    {
        mat[i][0] = '|';
    }
    // todo:2-upper_side
    for (int i = 2; i < col - 1; i++)
    {
        mat[0][i] = '_';
    }
    // todo:2-lower_side
    cout << endl;
    for (int i = 1; i < col - 3; i++)
    {
        mat[row - 1][i] = '-';
    }
    // todo:2-right_side
    for (int i = 1; i < row; i++)
    {
        mat[i][col - 1] = '|';
    }
    //! making grid_inside maze
    // 1-
    for (int i = 1; i < 6; i++)
    {
        mat[8][i] = '-';
    }
    // 2-
    for (int i = 1; i < 6; i++)
    {
        mat[i][12] = '|';
    }
    // 3-
    for (int i = 4; i < 7; i++)
    {
        mat[3][i] = '-';
    }
    // 4-
    for (int i = 4; i < 7; i++)
    {
        mat[i][4] = '|';
    }
    // 5-
    for (int i = 4; i < 16; i++)
    {
        mat[6][i] = '-';
    }
    // 6-
    for (int i = 7; i < 8; i++)
    {
        mat[i][8] = '|';
    }
    // 7-
    for (int i = 7; i < 8; i++)
    {
        mat[i][15] = '|';
    }
    // 8-
    for (int i = 12; i < 16; i++)
    {
        mat[8][i] = '-';
    }
    // 9-
    for (int i = 8; i < 10; i++)
    {
        mat[i][11] = '|';
    }
    // 10-
    for (int i = 4; i < 12; i++)
    {
        mat[10][i] = '-';
    }
    //?next---side
    // 1-
    for (int i = 1; i < 3; i++)
    {
        mat[i][25] = '|';
    }
    // 2-
    for (int i = 17; i < 22; i++)
    {
        mat[2][i] = '-';
    }
    // 3-
    for (int i = 2; i < 4; i++)
    {
        mat[i][22] = '|';
    }
    // 4-
    for (int i = 20; i < 26; i++)
    {
        mat[4][i] = '-';
    }
    // 5-
    for (int i = 4; i < 7; i++)
    {
        mat[i][26] = '|';
    }
    // 6-
    for (int i = 26; i < 37; i++)
    {
        mat[7][i] = '-';
    }
    // 7-
    for (int i = 3; i < 7; i++)
    {
        mat[i][36] = '|';
    }
    // 8-
    for (int i = 30; i < 42; i++)
    {
        mat[2][i] = '-';
    }
    // 9-
    for (int i = 2; i < 5; i++)
    {
        mat[i][32] = '|';
    }
    // 10-
    for (int i = 8; i < 10; i++)
    {
        mat[i][32] = '|';
    }
    // 11-
    for (int i = 20; i < 33; i++)
    {
        mat[10][i] = '-';
    }
    // 12-
    for (int i = 10; i < 12; i++)
    {
        mat[i][27] = '|';
    }
    // 13-
    for (int i = 6; i < 10; i++)
    {
        mat[i][20] = '|';
    }
    // 14-
    for (int i = 6; i < 10; i++)
    {
        mat[i][20] = '|';
    }
    //?Third---side
    // 1-
    for (int i = 41; i < 49; i++)
    {
        mat[4][i] = '-';
    }
    // 2-
    for (int i = 5; i < 8; i++)
    {
        mat[i][41] = '|';
    }
    // 3-
    for (int i = 36; i < 49; i++)
    {
        mat[10][i] = '-';
    }
    displaygeneral(mat, row);
}

//moveright function
bool moveright(char mat[][col], int row, int &pos, int &down)
{
    // check on input if the next side (has | and _ )or not
    if (mat[down][pos + 1] != '|' && mat[down][pos + 1] != '_' && mat[down][pos + 1] != '-')
    {
        //if not swap the space with the emoji
        int temp;
        temp = mat[down][pos + 1];
        mat[down][pos + 1] = mat[down][pos];
        mat[down][pos] = temp;
        pos++;
        return false;
    }

    //If yes,then stop the game and return the true
    if (mat[down][pos + 1] == '|' || mat[down][pos + 1] == '_' || mat[down][pos + 1] == '-')
    {
        mat[down][pos + 1] = mat[down][pos];
        mat[down][pos] = ' ';
        pos++;
        return true;
    }
}

// moveLeft function
bool moveleft(char mat[][col], int row, int &pos, int &down)
{

    // check on input if the next side (has | and _ )or not
    if (mat[down][pos - 1] != '|' && mat[down][pos - 1] != '_' && mat[down][pos - 1] != '-')
    {
        // if not swap the space with the emoji
        int temp;
        temp = mat[down][pos - 1];
        mat[down][pos - 1] = mat[down][pos];
        mat[down][pos] = temp;
        pos--;
        return false;
    }

    // If yes,then stop the game and return the true
    if (mat[down][pos - 1] == '|' || mat[down][pos - 1] == '_' || mat[down][pos - 1] == '-')
    {
        mat[down][pos - 1] = mat[down][pos];
        mat[down][pos] = ' ';
        pos--;
        return true;
    }
}

// movedownward function
bool movedown(char mat[][col], int row, int &pos, int &down)
{
    // check on input if the next side (has | and _ )or not
    if (mat[down + 1][pos] != '|' && mat[down + 1][pos] != '_' && mat[down + 1][pos] != '-')
    {

        // if not swap the space with the emoji
        int temp;
        temp = mat[down + 1][pos];
        mat[down + 1][pos] = mat[down][pos];
        mat[down][pos] = temp;
        down++;

        //Check if the player reaches the end point of the maze without any hinderance game over and return true_
        if ((pos == col - 3 && down == row - 1) || (pos == col - 2 && down == row - 1))
        {
            return true;
        }
        else
            return false;
    }

    // If yes,then stop the game and return the true
    if (mat[down + 1][pos] == '|' || mat[down + 1][pos] == '_' || mat[down + 1][pos] == '-')
    {
        mat[down + 1][pos] = mat[down][pos];
        mat[down][pos] = ' ';
        down++;
        return true;
    }
}

// moveUpward function
bool moveup(char mat[][col], int row, int &pos, int &down)
{
    // check on input if the next side (has | and _ )or not
    if (mat[down - 1][pos] != '|' && mat[down - 1][pos] != '_' && mat[down - 1][pos] != '-')
    {
        // if not swap the space with the emoji
        int temp;
        temp = mat[down - 1][pos];
        mat[down - 1][pos] = mat[down][pos];
        mat[down][pos] = temp;
        down--;
        return false;
    }

    // If yes,then stop the game and return the true
    if (mat[down - 1][pos] == '|' || mat[down - 1][pos] == '_' || mat[down - 1][pos] == '-')
    {
        mat[down - 1][pos] = mat[down][pos];
        mat[down][pos] = ' ';
        down--;
        return true;
    }
}

//Menu function
void menu(char mat[][col], int row, int rightpos, int &downpos)
{
    bool flag = false;
    do
    {
        //local variable
        int ch;

        //space lines
        for (int i = 0; i < 3; i++)
        {
            cout << endl;
        }

        //input
        cout << "\t\t\t\t\t\tEnter the valid key:";
        ch = getch();
        ch = tolower(ch);
        //Input-validation
        while (ch != 'd' && ch != 'a' && ch != 'w' && ch != 's' && ch != 'q')
        {
            cout << endl;
            cout << "Invalid input:" << endl;
            cout << endl;
            cout << "Again Enter the word:";
            ch = getch();
        }
        ch = tolower(ch);

        //calling the funtions on the input based
        switch (ch)
        {
        case 'd':
        {
            flag = moveright(mat, row, rightpos, downpos);
            displaygeneral(mat, row);
            break;
        }
        case 'a':
        {
            flag = moveleft(mat, row, rightpos, downpos);
            displaygeneral(mat, row);
            break;
        }
        case 'w':
        {
            flag = moveup(mat, row, rightpos, downpos);
            displaygeneral(mat, row);
            break;
        }
        case 's':
        {
            flag = movedown(mat, row, rightpos, downpos);
            displaygeneral(mat, row);
            break;
        }
        case 'q':
        {
            flag = true;
            break;
        }
        }
    } while (flag == false);

    //Check player wins the game or not
    if (flag == true)
    {
        //if flag = true and position is ending point then he wins the game
        if ((rightpos == col - 3 && downpos == row - 1) || (rightpos == col - 2 && downpos == row - 1))
        {
            cout << endl;
            cout << "\t\t\t\t\t******CONGRATULATIONS*******" << endl;
            cout << "\t\t\t\t\t******YOU WIN THE GAME*******" << endl;
        }
        //else lose the game
        else
        {
            cout << "\n";
            cout << "\n";
            cout << "\t\t\t\t\t**********OPPs!YOU LOSE*********:" << endl;
            cout << endl;
            cout << "\t\t\t\t\t ************GAME OVER********:" << endl;
        }
    }
}

//starting function
void start()
{
    char start;

    //space line
    for (int i = 0; i < 10; i++)
    {
        cout << endl;
    }

    //Starting demo
    cout << "\t\t\t\t ________________________________________________" << endl;
    cout << "\t\t\t\t|                                                |" << endl;
    cout << "\t\t\t\t|                 WELCOME PLAYER!                |" << endl;
    cout << "\t\t\t\t|                        TO                      |" << endl;
    cout << "\t\t\t\t|                M_A_Z_E-----G_A_M_E             |" << endl;
    cout << "\t\t\t\t|                                                |" << endl;
    cout << "\t\t\t\t|   SIR, PLEASE ENTER \"S\" TO START THE GAME:     |" << endl;
    cout << "\t\t\t\t|________________________________________________|" << endl;

    //Input
    start = getch();
    start = tolower(start);
    //Input validation
    while (start != 's')
    {
        cout << endl;
        cout << "\t\t\t\t\tInvalid input!:" << endl;
        cout << endl;
        cout << "\t\t\t\t\tSir,please enter \'s\' to start the game:";
        start = getch();
        start = tolower(start);
    }
    system("cls");
}

//All functions of the main in one maze_game function
void maze_game()
{
    int rightpos = 1;
    int downpos = 1;
    char matrix[row][col];
    start();
    grid(matrix, row);
    menu(matrix, row, rightpos, downpos);
}

//Main functionb1njq
int main()
{
    maze_game();

    return 0;
}