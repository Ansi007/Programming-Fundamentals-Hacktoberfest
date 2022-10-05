//Task
//Read a string, S, and print its integer value; if S cannot be converted to an integer, print Bad String.
//
//Note: You must use the String - to - Integer and exception handling constructs built into your submission language.If you attempt to use loops / conditional statements, you will get a 0 score.
//
//
//Sample Input 0
//3
//
//Sample Output 0
//3
//
//Sample Input 1
//za
//
//Sample Output 1
//Bad String
//
//Explanation
//Sample Case 0 contains an integer, so it should not raise an exception when we attempt to convert it to an integer.Thus, we print the 3.
//Sample Case 1 does not contain any integers, so an attempt to convert it to an integer will raise an exception.Thus, our exception handler prints Bad String.




#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int i = 0;
    getline(cin, s);

    try
    {
        i = stoi(s);
        cout << i;
    }
    catch (exception e)
    {
        cout << "Bad String";
    }

    return 0;
}
