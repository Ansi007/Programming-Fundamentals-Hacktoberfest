#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
    int max = 1000, l = 0;

    l = cbrt(max);
    cout << "Perfect cubes below 1000" << endl;
    for (int i = 1; i < l; i++)
    {
        cout << i << " ^ 3  : " << setw(3) 
            << pow(i, 3) << endl;
    }
}