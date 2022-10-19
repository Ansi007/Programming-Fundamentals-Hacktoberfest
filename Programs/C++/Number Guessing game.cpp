#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;
int main()
{
    char playAgain;
  
    do {
        const int MIN_VALUE = 1, MAX_VALUE = 100;

        int random_num, count = 0, user_num;

        unsigned seed = time(0);

        srand(seed);

        random_num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

        cout << "Guess a number between 1 and 100." << endl;
        cin >> user_num;
        count++;
        system("cls");
        while (user_num != random_num)
        {
            cout << "Your number is " << (user_num < random_num ? "lower." : "higher.");
            cout << "Try again: ";

            cin >> user_num;
            count++;
            system("cls");
        }
        system("cls");
        cout << "\nCorrect! " << endl;
        cout << "Random number = " << random_num << endl;
        cout << "Your guess    = " << user_num << endl;
        cout << "You guessed in " << count << " turns.\n";
        if (count <= 8)
            cout << "YOU WON!";
        else
            cout << "Better Luck Next Time.Try to guess in 8 attempts.";

        cout << endl;
        cout << "Do you want to play again.Enter (y/Y) to continue and any other key to quit.";
        cin >> playAgain;
    } while (playAgain=='y'||playAgain=='Y');
    
    return 0;
}