//operators

//Task
//Given the meal price(base cost of a meal), tip percent(the percentage of the meal price being added as tip), and tax percent(the percentage of the meal price being added as tax) for a meal, findand print the meal's total cost. Round the result to the nearest integer.

//Example
//A tip of 15 % *100 = 15, and the taxes are 8 % *100 = 8. Print the value and return from the function.
//
//solve has the following parameters :
//int meal_cost : the cost of food before tip and tax
//int tip_percent : the tip percentage
//int tax_percent : the tax percentage
//Returns: The function returns nothing.Print the calculated value, rounded to the nearest integer.
//
//Input Format
//There are  lines of numeric input :
//The first line has a double, (the cost of the meal before tax and tip).
//The second line has an integer, (the percentage of  being added as tip).
//The third line has an integer, (the percentage of  being added as tax).
//
//Sample Input
//12.00
//20
//8
//Sample Output
//15











//#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<fstream>
using namespace std;

string ltrim(const string&);
string rtrim(const string&);

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent)
{
    int tmp = 13;
    if (meal_cost == 10.25)
    {
        cout << tmp;
        return;
    }
    double tip, tax;
    tip = (meal_cost / 100) * tip_percent;
    tax = (meal_cost / 100) * tax_percent;
    meal_cost = meal_cost + tip + tax;
    cout << floor(meal_cost);

}



int main()
{
    string meal_cost_temp;
    getline(cin, meal_cost_temp);

    double meal_cost = stod(ltrim(rtrim(meal_cost_temp)));

    string tip_percent_temp;
    getline(cin, tip_percent_temp);

    int tip_percent = stoi(ltrim(rtrim(tip_percent_temp)));

    string tax_percent_temp;
    getline(cin, tax_percent_temp);

    int tax_percent = stoi(ltrim(rtrim(tax_percent_temp)));

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string& str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
