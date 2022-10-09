//This game is developed by the author @muhib7353
#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

void spaces();
string firstScreen();
void paragraph(string);
int UI(char &, string);
int timePassedAway(int &);
void userStatus(int, int, int, string);
void Calcualting_completeSentence(char *&, const char, int &, int &);
void displayingSentences(char &, char *&, int &, int &, string);

int main()
{
    int totalLetters = 1;
    char *str = new char[totalLetters]{'\0'};
    char currentLetter;

    string userName = firstScreen();
    int startTime = UI(currentLetter, userName);

    displayingSentences(currentLetter, str, totalLetters, startTime, userName);

    delete[] str;
    str = nullptr;

    return 0;
}

void spaces() { cout << "\n\n\n"; }
string firstScreen()
{
    char ch = 1;
    string name;
    spaces();
    cout << "\t\t\t\t    WELCOME TO THE SALIK TYPING SPEED TEST\n";
    spaces();
    cout << "\t\t\t--------------------------------------------------------------------\n";
    cout << "\t\t\t|   Impress the programmers with your Typing speed " << ch << "               |\n";
    cout << "\t\t\t|   Enter you first name and start typing test :                   |\n";
    cout << "\t\t\t--------------------------------------------------------------------\n\t\t\t\t\t\t";
    cin >> name;
    system("cls");
    return name;
}
void paragraph(string name)
{
    cout << "\n\t\t\t\t\t\t\t\t   WELCOME " << name << "\n";
    spaces();
    cout << "\t\t\t\t\t\t\t\tSALIK TYPING SPEED TEST\n";
    spaces();
    cout << "Being human makes us susceptible to the onset of feelings. The role of these emotions varies. Some of them are useful while others may be harmful. The use of social media for self-expression has reached a point that it makes us feel we can say anything. This begins when we see people expressing anything and everything that come to mind. When we see everyone else voicing their likes and dislikes, their irritations and desires we tend to imitate what they do. And because many engage in this, we think that it is normal and healthy. However, when we get used to unbridled self-expression, we come to believe that all feelings are valid. We become convinced that in real life, we should also act on our emotions and our impulses. Using social media this way erodes our ability to regulate our actions and reactions. To illustrate, when something small irritates us we think that it's okay to feel this way. But isn't it better to foster one's patience and resilience instead of immediately complaining? Or when we develop an attraction to someone despite that person being in a relationship, and because social media has conditioned us that all feelings can be expressed, we tend to think that acting on this attraction is okay. Not all feelings deserve expression. We find ourselves creating our own problems when we let our present emotions control our actions.\n";
    spaces();
}

void userStatus(int totalWords, int totalLetters, int seconds, string name)
{
    system("cls");
    paragraph(name);
    cout << "\n\t\t\t\t\t\t\t\t   " << name << " STATS "
         << "\n\n";
    cout << "\t\t\t\t\t\t\t\tTOTAL WORDS   : " << totalWords << "\n";
    cout << "\t\t\t\t\t\t\t\tTOTAL LETTERS : " << totalLetters << "\n";
    cout << "\t\t\t\t\t\t\t\tTOTAL TIME    : " << seconds / 60 << ":" << seconds % 60 << "\n";
    cout << "\t\t\t\t\t\t\t\tWords/minute  : " << (totalWords / (seconds / 60)) << "\n\n\n";
}

int UI(char &currentLetter, string userName)
{
    paragraph(userName);
    cout << "To start the Test, press enter \'S-key\' \n";
    currentLetter = getch();
    currentLetter = tolower(currentLetter);
    while (currentLetter != 's')
    {
        cout << "Please press the valid key : \n";
        currentLetter = getch();
    }
    cout << "\t\t\t YOUR TEST STARTS, start typing \n\n\n";
    return time(0);
}

int timePassedAway(int &startTime)
{
    int currentTime = time(0);
    int sec = currentTime - startTime;
    static int min;
    if (sec > 59)
    {
        min++;
        startTime = time(0);
    }
    cout << "Time passed  : " << min << " : " << sec << "\n";
    return (min * 60) + sec;
}

void Calcualting_completeSentence(char *&str, const char currentLetter, int &totalLetters, int &totalWords)
{
    if (currentLetter != 8)
    {
        char *temp = new char[totalLetters + 1];
        for (int i = 0; str[i] != '\0'; i++)
        {
            temp[i] = str[i];
        }
        temp[totalLetters - 1] = currentLetter;
        temp[totalLetters] = '\0';
        delete[] str;
        str = temp;
        totalLetters++;
    }
    if (currentLetter == 8 && totalLetters != 0)
    {
        char *temp = new char[totalLetters - 1];
        for (int i = 0; i < totalLetters - 1; i++)
        {
            temp[i] = str[i];
        }
        temp[totalLetters - 2] = '\0';
        delete[] str;
        str = temp;
        totalLetters--;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i - 1] != 32 && str[i] == 32)
        {
            totalWords++;
        }
    }
}

void displayingSentences(char &currentLetter, char *&str, int &totalLetters, int &startTime, string userName)
{
    do
    {
        int totalWords = 0;
        currentLetter = getch();
        if ((currentLetter >= 32 && currentLetter <= 126) || currentLetter == 13 || currentLetter == 8)
        {
            Calcualting_completeSentence(str, currentLetter, totalLetters, totalWords);
            system("cls");
            int currentTime = time(0);
            paragraph(userName);
            cout << "\n\nTotal Letters = " << totalLetters - 1 << "\n";
            cout << "\n\nTotal Words = " << totalWords << "\n";
            timePassedAway(startTime);
            spaces();
            for (int i = 0; str[i] != '\0'; i++)
            {
                cout << str[i];
            }
            spaces();
            spaces();
            cout << "To END : PRESS ENTER-KEY\n";
        }
        else
        {
            currentLetter = getch();
        }
        if (currentLetter == 13)
        {
            userStatus(totalWords, totalLetters, timePassedAway(startTime), userName);
        }
    } while (currentLetter != 13);
}

// error voice
// completion colors
// accuracy rate
// incorrect words