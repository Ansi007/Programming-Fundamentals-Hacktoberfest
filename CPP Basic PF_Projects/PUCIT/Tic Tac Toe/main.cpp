// Tic-tac-toe game by Muhib arshad

// libaraies
#include <iostream>
#include <conio.h>
using namespace std;

//main
int main()
{
    // varaibles
    const int row = 3;
    const int col = 3;
    char board[row][col];
    char start;
    bool flag = false;
    bool player1_win = false;
    bool player2_win = false;
    bool match_tie = false;

    //--Iniliaze board with *
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            board[i][j] = '*';
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << endl;
    }
    cout << "\t\t\t\t ________________________________________________" << endl;
    cout << "\t\t\t\t|                                                |" << endl;
    cout << "\t\t\t\t|                 WELCOME PLAYERS!               |" << endl;
    cout << "\t\t\t\t|                        TO                      |" << endl;
    cout << "\t\t\t\t|            TIC_TAC_TOE-----G_A_M_E             |" << endl;
    cout << "\t\t\t\t|                                                |" << endl;
    cout << "\t\t\t\t|   SIR, PLEASE PRESS \"S\" TO START THE GAME:     |" << endl;
    cout << "\t\t\t\t|________________________________________________|" << endl;
    start = getch();
    start = tolower(start);
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
    do
    {

        // loop variables
        int player1_rowNum = 0;
        int player1_colNum = 0;
        int player2_rowNum = 0;
        int player2_colNum = 0;

        // Display board contents
        for (int i = 0; i < 10; i++)
        {
            cout << endl;
        }
        for (int i = 0; i < row; i++)
        {
            cout << "\t\t\t\t\t-------------------" << endl;
            cout << "\t\t\t\t\t";
            for (int j = 0; j < col; j++)
            {
                cout << "|  ";
                cout << board[i][j] << "  ";
            }
            cout << "|";
            cout << endl;
        }
        cout << "\t\t\t\t\t-------------------" << endl;

        // for space between borad and input
        for (int i = 0; i < 3; i++)
        {
            cout << endl;
        }

        // Player-1_Turn
        cout << "\t\t\t\t\t***Player 1 turn****" << endl;
        cout << endl;
        cout << "\t\t\t\t\t=>Enter row number:";
        cin >> player1_rowNum;
        while (player1_rowNum < 1 || player1_rowNum > 3)
        {
            cout << "\t\t\t\t\tInvalid:input!" << endl;
            cout << "\t\t\t\t\tPlease Enter the valid Input!";
            cin >> player1_rowNum;
        }
        cout << "\t\t\t\t\t=>Enter column number:";
        cin >> player1_colNum;
        while (player1_colNum < 1 || player1_colNum > 3)
        {
            cout << "\t\t\t\t\tInvalid:input!" << endl;
            cout << "\t\t\t\t\tPlease Enter the valid Input!";
            cin >> player1_colNum;
        }
        
        // already used index validation
        if (board[player1_rowNum - 1][player1_colNum - 1] == '*')
        {
            board[player1_rowNum - 1][player1_colNum - 1] = 'X';
        }
        else
        {
            while (board[player1_rowNum - 1][player1_colNum - 1] != '*')
            {
                cout << "\t\t\tThis index is already used please enter the valid index:" << endl;
                cout << endl;
                cout << "\t\t\t\t\t=>Enter row number:";
                cin >> player1_rowNum;
                while (player1_rowNum < 1 || player1_rowNum > 3)
                {
                    cout << "\t\t\t\t\tInvalid:input!" << endl;
                    cout << "\t\t\t\t\tPlease Enter the valid Input!";
                    cin >> player1_rowNum;
                }
                cout << "\t\t\t\t\t=>Enter column number:";
                cin >> player1_colNum;
                while (player1_colNum < 1 || player1_colNum > 3)
                {
                    cout << "\t\t\t\t\tInvalid:input!" << endl;
                    cout << "\t\t\t\t\tPlease Enter the valid Input!";
                    cin >> player1_colNum;
                }
            }
            board[player1_rowNum - 1][player1_colNum - 1] = 'X';
        }

        // Logic-for-row-check_player_1
        for (int i = 0; i < row; i++)
        {
            if (board[i][0] == 'X')
            {
                if ((board[i][0] == board[i][1]) && (board[i][0] == board[i][2]))
                {
                    flag = true;
                    player1_win = true;
                }
            }
        }

        // Logic-for-col-check_player_1
        for (int i = 0; i < col; i++)
        {
            if (board[0][i] == 'X')
            {
                if ((board[0][i] == board[1][i]) && (board[0][i] == board[2][i]))
                {
                    flag = true;
                    player1_win = true;
                }
            }
        }

        // Logic-for-left_diagonal-check_player_1
        if (board[0][0] == 'X')
        {
            if ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]))
            {
                flag = true;
                player1_win = true;
            }
        }

        // Logic-for-Right_diagonal-check_player_1
        if (board[0][2] == 'X')
        {
            if ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]))
            {
                flag = true;
                player1_win = true;
            }
        }
        cout << endl;
        // To check match is tie or not
        int count = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (board[i][j] != '*')
                {
                    count++;
                }
            }
        }
        if (count == 9 && player1_win == false)
        {
            if (player2_win == false)
            {
                flag = true;
                match_tie = true;
            }
        }

        // If player-1 is not win the match,and match is not tie, than player 2 play
        if (player1_win == false && flag == false)
        {
            // To clear the screen on every updation
            system("cls");

            // Display board contents
            for (int i = 0; i < 10; i++)
            {
                cout << endl;
            }
            for (int i = 0; i < row; i++)
            {
                cout << "\t\t\t\t\t-------------------" << endl;
                cout << "\t\t\t\t\t";
                for (int j = 0; j < col; j++)
                {
                    cout << "|  ";
                    cout << board[i][j] << "  ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\t\t\t\t\t-------------------" << endl;

            // Player-2_Turn
            // for space between borad and input
            for (int i = 0; i < 3; i++)
            {
                cout << endl;
            }
            cout << "\t\t\t\t\t***Player 2 turn****" << endl;
            cout << endl;
            cout << "\t\t\t\t\t=>Enter row number:";
            cin >> player2_rowNum;
            while (player2_rowNum < 1 || player2_rowNum > 3)
            {
                cout << "\t\t\t\t\tInvalid:input!" << endl;
                cout << "\t\t\t\t\tPlease Enter the valid Input!";
                cin >> player2_rowNum;
            }
            cout << "\t\t\t\t\t=>Enter column number:";
            cin >> player2_colNum;
            while (player2_colNum < 1 || player2_colNum > 3)
            {
                cout << "\t\t\t\t\tInvalid:input!" << endl;
                cout << "\t\t\t\t\tPlease Enter the valid Input!";
                cin >> player2_colNum;
            }
            // already used index validation
            if (board[player2_rowNum - 1][player2_colNum - 1] == '*')
            {
                board[player2_rowNum - 1][player2_colNum - 1] = 'O';
            }
            else
            {
                while (board[player2_rowNum - 1][player2_colNum - 1] != '*')
                {
                    cout << "\t\t\tThis index is already used please enter the valid index:" << endl;
                    cout << endl;
                    cout << "\t\t\t\t\t=>Enter row number:";
                    cin >> player2_rowNum;
                    while (player2_rowNum < 1 || player2_rowNum > 3)
                    {
                        cout << "\t\t\t\t\tInvalid:input!" << endl;
                        cout << "\t\t\t\t\tPlease Enter the valid Input!";
                        cin >> player2_rowNum;
                    }
                    cout << "\t\t\t\t\t=>Enter column number:";
                    cin >> player2_colNum;
                    while (player2_colNum < 1 || player2_colNum > 3)
                    {
                        cout << "\t\t\t\t\tInvalid:input!" << endl;
                        cout << "\t\t\t\t\tPlease Enter the valid Input!";
                        cin >> player2_colNum;
                    }
                }
                board[player2_rowNum - 1][player2_colNum - 1] = 'O';
            }

            // Logic-for-row-check_player_2
            for (int i = 0; i < row; i++)
            {
                if (board[i][0] == 'O')
                {
                    if ((board[i][0] == board[i][1]) && (board[i][0] == board[i][2]))
                    {
                        flag = true;
                        player2_win = true;
                    }
                }
            }

            // Logic-for-col-check_player_2
            for (int i = 0; i < col; i++)
            {
                if (board[0][i] == 'O')
                {
                    if ((board[0][i] == board[1][i]) && (board[0][i] == board[2][i]))
                    {
                        flag = true;
                        player2_win = true;
                    }
                }
            }

            // Logic-for-left_diagonal-check_player_2
            if (board[0][0] == 'O')
            {
                if ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]))
                {
                    flag = true;
                    player2_win = true;
                }
            }

            // Logic-for-Right_diagonal-check_player_2
            if (board[0][2] == 'O')
            {
                if ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]))
                {
                    flag = true;
                    player2_win = true;
                }
            }
        }
        if (flag == false)
        {
            // To clear the screen on every updation
            system("cls");
        }

        // Display when player_1 wins or player_2 wins or tie
        if (match_tie == true || player2_win == true || player1_win == true)
        {
            // To clear the screen on every updation
            system("cls");
            // Display board contents
            for (int i = 0; i < 10; i++)
            {
                cout << endl;
            }
            for (int i = 0; i < row; i++)
            {
                cout << "\t\t\t\t\t-------------------" << endl;
                cout << "\t\t\t\t\t";
                for (int j = 0; j < col; j++)
                {
                    cout << "|  ";
                    cout << board[i][j] << "  ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\t\t\t\t\t-------------------" << endl;
        }

    } while (flag == false);

    // Player-1 wins display
    if (player1_win == true && player2_win == false)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << endl;
        }
        cout << "\t\t\t\t\t*********Congratulations Player 1 win the game***************" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << endl;
        }
    }
    // Player-2 wins display
    if (player2_win == true && player1_win == false)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << endl;
        }
        cout << "\t\t\t\t\t*********Congratulations Player 2 win the game***************" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << endl;
        }
    }

    // Match tie display
    if (match_tie == true)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << endl;
        }
        cout << "\t\t\t\t\t******Match is Tie*****" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << endl;
        }
    }
    return 0;
}