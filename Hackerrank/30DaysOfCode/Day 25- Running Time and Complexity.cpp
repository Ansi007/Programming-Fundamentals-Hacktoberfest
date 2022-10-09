//Task
//A prime is a natural number greater than 1 that has 
//no positive divisors other than 1 and itself.Given a
//number, n, determineand print whether it is Prime or Not prime.
//
//Note: If possible, try to come up with a O(sqrt(num))  primality 
//algorithm, or see what sort of optimizations you come up with for 
//an O(num) algorithm.Be sure to check out the Editorial after submitting your code.
//
//Input Format
//The first line contains an integer, T, the number of test cases.
//Each of the T subsequent lines contains an integer, num, to be tested for primality.
//
//Output Format
//For each test case, print whether num is Prime or Not prime on a new line.
//
//Sample Input
//3
//12
//5
//7
//
//Sample Output
//Not prime
//Prime
//Prime




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void isPrime(int num)
{
    if (num == 0 || num == 1 || num < 0)
    {
        cout << "Not prime\n";
        return;
    }
    if (num == 2 || num == 3)
    {
        cout << "Prime\n";
        return;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "Not prime\n";
            return;
        }
    }
    cout << "Prime\n";
}

int main()
{
    int numberOfTestCases, num;
    cin >> numberOfTestCases;

    for (int i = 0; i < numberOfTestCases; i++)
    {
        cin >> num;
        isPrime(num);
    }
    return 0;
}
