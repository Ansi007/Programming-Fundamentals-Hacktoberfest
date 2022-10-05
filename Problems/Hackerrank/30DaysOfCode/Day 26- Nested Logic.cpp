//Task
//Your local library needs your help!Given the expectedand 
//actual return dates for a library book, create a program
//that calculates the fine(if any).The fee structure is as follows :
//
//1- If the book is returned on or before the expected 
//return date, no fine will be charged(i.e.: fine=0)
//
//  2-  If the book is returned after the expected 
//    return day but still within the same calendar 
//    month and year as the expected return date, 
//    fine= 15 * (number of days late).
//
// 3- If the book is returned after the expected 
//    return month but still within the same calendar
//    year as the expected return date, the fine= 500* (number of months late).
//
//   4- If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000.
//
//
//    Sample Input 
//    9 6 2015    day = 9, month = 6, year = 2015 (date returned)
//    6 6 2015    day = 6, month = 6, year = 2015 (date due)
//
//    Sample Output
//    45


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int dateReturned[] = { 1,2,3 };
    int dateDue[] = { 4,5,6 };
    int fine;

    cin >> dateReturned[0] >> dateReturned[1] >> dateReturned[2];
    cin >> dateDue[0] >> dateDue[1] >> dateDue[2];


    if (dateReturned[2] < dateDue[2])
    {
        fine = 0;
    }
    else if (dateReturned[2] == dateDue[2])
    {
        if (dateReturned[1] <= dateDue[1])
        {
            if (dateReturned[0] <= dateDue[0])
            {
                fine = 0;
            }
            else
            {
                fine = 15 * (dateReturned[0] - dateDue[0]);
            }
        }
        else
        {
            fine = 500 * (dateReturned[1] - dateDue[1]);
        }
    }
    else
    {
        fine = 10000;
    }

    cout << fine;
    return 0;
}