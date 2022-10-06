//To solve this challenge, we must first take each character in s, 
//enqueue it in a queue, and also push that same character onto 
//a stack.Once that's done, we must dequeue the first character
//from the queue and pop the top character off the stack, then 
//compare the two characters to see if they are the same; as long
//as the characters match, we continue dequeueing, popping, and 
//comparing each character until our containers are empty (a non-match means  isn't a palindrome).

//Write the following declarations and implementations:
//Two instance variables : one for your stack, and one for your queue.
//A void pushCharacter(char ch) method that pushes a character onto a stack.
//A void enqueueCharacter(char ch) method that enqueues a character in the queue instance variable.
//A char popCharacter() method that popsand returns the character at the top of the stack  instance variable.
//A char dequeueCharacter() method that dequeuesand returns the first character in the queue instance variable.


//Sample Input
//racecar

//Sample Output
//The word, racecar, is a palindrome.






#include<iostream>
#include<stack>
#include<queue>
#include <string>


using namespace std;
class Solution
{
public:
    stack<char> st;
    queue<char>qu;

    void pushCharacter(char c)
    {
        st.push(c);
    }
    void enqueueCharacter(char c)
    {
        qu.push(c);
    }
    char popCharacter()
    {
        char c = st.top();
        st.pop();
        return c;
    }
    char dequeueCharacter()
    {
        char c = qu.front();
        qu.pop();
        return c;
    }
};

int main()
{
    // read the string s.
    string s;
    getline(cin, s);

    // create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++)
    {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    }
    else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}