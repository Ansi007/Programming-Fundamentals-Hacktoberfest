//This search engine is developed by Muhib Arshad(muib7353)

//Libraries
#include <iostream>
#include <conio.h>
using namespace std;

//Global variables
const int row = 20;
const int col = 21;

//functions Protoptypes
void design();
int length(char arr[]);
void input(char word[][col], int row, char arr[], int x);
void functionality(char words[][col], int row);

//Main
int main()
{
    /*Add your possible searching words
    and cahnge the number of rows and columns in global according to it*/
    char words[row][col] = {
        "apply",
        "application",
        "bat",
        "batch",
        "battle",
        "compute",
        "computer",
        "compare",
        "device",
        "develop",
        "developer",
        "system",
        "systemic",
        "systole",
        "function",
        "functional",
        "fucntionality",
        "handle",
        "handler",
        "handling"};
    
    //searching functionalty function
    functionality(words, row);

    return 0;
}

//Designing function How my console look beautiful
void design()
{
    //Spacing lines
    for (int i = 0; i < 5; i++)
    {
        cout << endl;
    }

    //Introductory line
    cout << "\t\t\t\t**********WELCOME TO Muhib's SEARCH ENGINE*********" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << endl;
    }

    //Instruction 
    cout << "\t\t\t\tMAIN FEATURES:" << endl;
    cout << "\t\t\t\t  *During searching it gives you to suggestions." << endl;
    cout << "\t\t\t\t  *During searching you can press enter and search another word." << endl;
    cout << "\t\t\t\t  *During searching you can press 0 to exit the program." << endl;

    //Spacing lines
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
    }
}

//Lenghth function to calcualte the inputing length of a word
int length(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

//Input function----(heart of the code)
void input(char word[][col], int row, char arr[], int x)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            //To check every time searching column is start from zero
            if (j == 0)
            {
                //If first letter of the my searching word and suggesting word is same
                if (word[i][j] == arr[0])
                {
                    //Check next letters of searching word and suggesting words are same 
                    int count = 0;
                    for (int l = j, m = 0; m < length(arr); l++, m++)
                    {
                        if (word[i][l] == arr[m])
                        {
                            count++;
                        }
                    }

                    //if length of the searching word is equal to word suugesting equality count
                    if (count == length(arr))
                    {
                        cout << "\t\t\t\t    ";

                        //if uper condition is true display the suggesting word to the console
                        for (int k = 0; word[i][k] != '\0'; k++)
                        {
                            cout << word[i][k];
                        }
                        cout << endl;
                    }
                }
            }
        }
    }
}

//functionality function
void functionality(char words[][col], int row)
{
    bool flag = false;
    do
    {
        //calling design function
        design();
        cout << "\t\t\t\t*******Search Words here********" << endl;
        cout << "\t\t\t\t    >>";
        
        
        char arr[row] = {};
        for (int x = 0; x < col; x++)
        {
            //On every input call the design function and clear the previous screen
            arr[x] = getch();
            system("cls");
            design();
            cout << "\t\t\t\t*******Search Words here********" << endl;
            cout << "\t\t\t\t    >>";
            
            for (int i = 0; i < sizeof(arr) / sizeof(char); i++)
            {
                cout << arr[i];
            }

            //If enter is pressed than make the console refreshed
            if (arr[x] == 13)
            {
                system("cls");
                cout << "\t\t\t\t>>Enter Pressed:" << endl;
                break;
                x = 0;
            }

            //if inout is zero quitted
            if (arr[x] == '0')
            {
                cout << endl;
                cout << "Quiting.............." << endl;
                flag = true;
                break;
            }
            cout << endl;

            //call the main heart of the function to search the words
            input(words, row, arr, x);
        }
    } while (flag == false);
}