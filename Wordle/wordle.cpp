#include<bits/stdc++.h>

using namespace std;

// https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal
namespace Color {
    enum Code {
        FG_RED      = 31,
        FG_GREEN    = 32,
	    FG_YELLOW   = 33,
        FG_BLUE     = 34,
        FG_DEFAULT  = 39,
        BG_RED      = 41,
        BG_GREEN    = 42,
        BG_BLUE     = 44,
        BG_DEFAULT  = 49
    };
    class Modifier {
        Code code;
    public:
        Modifier(Code pCode) : code(pCode) {}
        friend std::ostream&
        operator<<(std::ostream& os, const Modifier& mod) {
            return os << "\033[" << mod.code << "m";
        }
    };
}

// Helper Functions
void toUpperCase(string &s);
int hasCharacter(string s, char c);
void displayHint(vector<string> dict, char colors[], string secret);

int main() {
    srand(time(0));
    // Coloring objects
	Color::Modifier green(Color::BG_GREEN);
	Color::Modifier blue(Color::BG_BLUE);
	Color::Modifier def(Color::BG_DEFAULT);

	//cout << green << "green" << def << " is for correct letter and position" << endl;
	//cout << blue << "blue" << def << " is for correct letter but wrong position" << endl;

    // Variables to use
    vector<string> dictionary;                  // vector to store the dictionary
    char inputColorCodes[5];                    // stores the color codes (d -> def, g -> green, b -> blue)
    string input, secretString, copySecret;     // required strings
    int attempts, i, index, greenCount;         // required integers

    ifstream dictFile("./dict.txt");        // Opened Dictionary File
    while(dictFile >> input)                // While the valid input in coming (till End of File (EOF))
    {
        toUpperCase(input);
        dictionary.push_back(input);        // Storing words in the vector (array)
    }
    dictFile.close();                       // Close the file

    // Instructions and rules
    cout << "\n-------------------- WORDLE GAME ----------------------\n\n";
    cout << "Guess the WORDLE in six tries\nEach guess must be a valid five-letter word.\nEnter the word and Hit the enter button to submit.\nAfter each guess, the color of the tiles will change\nto show how close your guess was to the word.\n\n";
    cout << "-------------------- Color Codes ------------------------\n\n";
    cout << "Any " << green << "green" << def << " letter is in the secret word and in the correct position.\n";
    cout << "Any " << blue << "blue" << def << " letter is in the secret word but at the wrong position.\n";
    cout << "Any white letter is not included in the secret word.\n\n";
    cout <<"You can enter \"hint\" anytime in the game,\nit will show at most 10 words from the dictionary\nthat are compatible with the color codes and the letters\nyou guessed correctly\n[-Careful-] It will cost you 1 attempt from your remaining attempts";
    cout << "\n\nGame is Starting...\n";
    
    // Starter values for the Game
    attempts = 6;                           // Starting attempts from 6
    greenCount = 0;                         // Count of correctly guessed letters
    index = rand() % dictionary.size();     // random index to be picked from the dictionary
    secretString = dictionary[index];       // random word is ppicket as secret worrd
    for(i = 0; i < 5; i++ )
        inputColorCodes[i] = 'd';           // starting with all the words as default colored

    // Starting the Game
    while( attempts != 0 )                  // till attempts are ended
    {
        cout << "\nAvailable attemps: " << attempts << '\n';
        cout << "Enter any 5-letter word: ";
        cin >> input;

        toUpperCase(input);                 // convert the string to uppercase letters

        if(input == "HINT")                 // if hint is entered
        {   
            // will display the hints based on current progress
            displayHint(dictionary, inputColorCodes, secretString);
            attempts--;     // use the attempt
            continue;       // go for the next iteration
        }

        if(input.length() != 5)     // not a 5 letter word, no attempt used
        {
            cout << "Input is not a 5-letter word. Try Again!\n";
            continue;
        }

        // Checking if the word exists in the dictionary. 
        // If the count of occurences is 0 than this if will execute, no attempt used
        if( !count(dictionary.begin(), dictionary.end(), input) )
        {
            cout << "Input word is not in the dictionary. Try Again!";
            continue;
        }

        copySecret = secretString;  // copy of the string to modify
        greenCount = 0;
        cout << "Entered Word (colored): ";
        for(i=0; i<5; i++)
        {
            index = hasCharacter(copySecret, input[i]);     // does secret string contains this letter
            if( i == index )                                // letter exists at the same index -> green letter
            {
                inputColorCodes[i] = 'g';                   // Green letters have the highest prority
                copySecret[i] = 1;                          // Example if the word is "Hello" and the user enters
                greenCount++;                               // "lllll" then the 2 L's at the correct position will be green
            }                                               // all others are default, (no blue letter)
        }

        for(i=0; i<5; i++)                                  // Finding blue and default words and printing
        {
            index = hasCharacter(copySecret, input[i]);
            if(inputColorCodes[i] == 'g')                   // check if it is marked as green in the previous loop
                cout << green << input[i] << def;
            else if(index == -1)                            // Not found in the secret string, default color
                cout << def << input[i];
            else                                            // Found but at any other index -> blue color
            {
                cout << blue << input[i] << def;
                inputColorCodes[index] = 'b';
                copySecret[index] = 1;
            }
        }
        cout << def << '\n';
        if(greenCount == 5)                                 // Guessed all the 5 letters at the correct positions
        {
            cout << "\n\n------------------Congratulations---------------------\n\n"; 
            cout << "\tYou have won the game!!\n\n";
            break;                                          // Terminate the loop and game
        }
        attempts--;                                         // decrement the attempts and go for the next iteration
    }

    if(attempts == 0)                                       // all attempts are used and no correct anser
    {
        cout << "\n\tYou failed!!\n";
        cout << "Correct Word is: " << secretString << '\n' << '\n';        // display answer
    }   

    return 0;
}

void toUpperCase(string &s)
{
    int i;
    for(i=0; i<s.length(); i++)
        s[i] = s[i] & 223;              // converts lower case to upper case and already upper case letters remain unchanged
}

int hasCharacter(string s, char c)
{
    int i;
    for(i=0; i<s.length(); i++)
        if(s[i] == c)
            return i;       // found at index i
    return -1;
}

void displayHint(vector<string> dict, char colors[], string secret)
{
    int wordsCount = 0, i, j;
    bool isInvalid;
    string copy;

    cout << "\n-------------Hint Called---------------\n\n";
    cout << "Compatible words with current color code are: \n";

    for(i=0; i<dict.size(); i++)
    {
        copy = dict[i];         // Pick each word from the dictionary and check if it matches the criteria of the current scenario
        isInvalid = false;
        for(j=0; j<5; j++)
        {
            if(colors[j] == 'g')            // check all the green occurences
            {
                if(copy[j] == secret[j])        // match the corresponding word
                {
                    copy[j] = 1;
                    continue;
                }
                isInvalid = true;           // Does not matched
                break;
            }
        }
        if(isInvalid)                   // word does not match the creteria, go for the next iteration 
            continue;
        for(j=0; j<5; j++)
        {
            if(colors[j] == 'b')        // check the blue occurences
            {
                if(hasCharacter(copy, secret[j]) != -1)     // nmust be in the string at anyother location
                {
                    copy[j] = 1;
                    continue;
                }
                isInvalid = true;           // not found
                break;
            }
        }
        if(isInvalid)                   // terminate and go for the next iteration
            continue;
        
        cout << ++wordsCount << ": " << dict[i] << '\n';        // valid word (matches the criteria)
        if(wordsCount == 10)                // total words to display is 10, if 10 reached then terminate
            break;
    }
}