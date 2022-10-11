//
// Created by alam on 10/10/22.
//

//" Write a guessing game where the user has to guess a secret number.
// After every guess the program tells the user whether their number was too large
// or too small. At the end the number of tries needed should be printed.
// It counts only as one try if they input the same number multiple times consecutively."

#include <iostream>

using namespace std;

int main() {

    srand(time(NULL));
    int r = rand() % 100;
    int c, count = 0;

    cout << "Guess the number!";

    do {
        cout << endl << "Enter your guess: ";
        cin >> c;

        if (c > r) {
            cout << "The entered number is larger.";
        } else if (c < r) {
            cout << "The entered number is smaller.";
        } else if (c == r) {
            cout << "Congratulations, you've found the number! The number was " << r << "! ";
        }

        count++;
        cout << "\nTries: " << count << endl;
    } while (c != r);

    return 0;
}