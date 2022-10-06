//Task
//Write a Calculator class with a single method : int power(int, int).
//The power method takes two integers, n and p, as parameters and 
//returns the integer result of n power p.If either n or p is negative, then the 
//method must throw an exception with the message : n and p should be non - negative.

//Sample Input
//4
//3 5
//2 4
//- 1 - 2
//- 1 3

//Sample Output
//243
//16
//n and p should be non - negative
//n and p should be non - negative




#include <cmath>
#pragma warning(disable : 4996)
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class Calculator
{
public:
    int power(int n, int p)
    {
        if (n < 0 || p < 0)
            throw invalid_argument("n and p should be non-negative");
        return (int)pow(n, p);
    }
};

int main()
{
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;
    while (T-- > 0) {
        if (scanf("%d %d", &n, &p) == 2) {
            try {
                int ans = myCalculator.power(n, p);
                cout << ans << endl;
            }
            catch (exception& e) {
                cout << e.what() << endl;
            }
        }
    }

}