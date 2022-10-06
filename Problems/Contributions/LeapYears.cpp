#include <iostream>
using namespace std;

void printNext20LeapYears(int year)
{
      int count = 0;
      while (count < 20)
      {
         if (year % 4 == 0)
         {
               cout << year << endl;
               count++;
         }
         year++;
      }
}

int main()
{
      int year;
      cout << "Enter a year: ";
      cin >> year;
      printNext20LeapYears(year);
      return 0;
}

