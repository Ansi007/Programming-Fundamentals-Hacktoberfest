//Task
//Consider a database table, Emails, which has the 
//attributes First Name and Email ID.Given n rows of 
//data simulating the Emails table, print an
//alphabetically - ordered list of people whose email address ends in @gmail.com.
//
//Input Format
//The first line contains an integer, n, total number of rows in the table.
//Each of the n subsequent lines contains 2 space - separated strings 
//denoting a person's first name and email ID, respectively.
//
//
//Output Format
//Print an alphabetically - ordered list of first names
//for every user with a gmail account.Each name must be printed on a new line.
//
//Sample Input
//6
//riya riya@gmail.com
//julia julia@julia.me
//julia sjulia@gmail.com
//julia julia@gmail.com
//samantha samantha@gmail.com
//tanya tanya@gmail.com
//
//Sample Output
//julia
//julia
//riya
//samantha
//tanya
//
//



#include <iostream>
#include<vector>
#include<string>
#include <algorithm>
#include<regex>

using namespace std;
int main()
{
    int numberOfRows;
    cin >> numberOfRows;

    vector<string> namesOfEmailUsers(numberOfRows);
    vector<string> emailAddresses(numberOfRows);
    vector<string> extractedNamesFromAddresses;

    for (int i = 0; i < numberOfRows; i++)
    {
        cin >> namesOfEmailUsers[i] >> emailAddresses[i];
    }

    for (int i = 0; i < numberOfRows; i++)
    {
        if (regex_match(emailAddresses[i], regex("(.*)@gmail.com")))
        {
            extractedNamesFromAddresses.push_back(namesOfEmailUsers[i]);
        }
    }

    sort(extractedNamesFromAddresses.begin(), extractedNamesFromAddresses.end());
    for (int index = 0; index < extractedNamesFromAddresses.size(); index++)
    {
        cout << extractedNamesFromAddresses[index] << endl;
    }
    return 0;
}
