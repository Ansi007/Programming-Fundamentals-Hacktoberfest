#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, temp, rem1, rem2, sqroot, rev1 = 0, rev2 = 0;
    cout << "Enter a number : ";
    cin >> n;
    temp = n * n;
    while (temp != 0)
    {
        rem1 = temp % 10;
        rev1 = rev1 * 10 + rem1;
        temp = temp / 10;
    }
    sqroot = sqrt(rev1);
    while (sqroot != 0)
    {
        rem2 = sqroot % 10;
        rev2 = rev2 * 10 + rem2;
        sqroot = sqroot / 10;
    }
    if (rev2 == n)
        cout << "\n" << n << " is an Adam number.";
    else
        cout << "\n" << n << " is not an Adam number.";
    return 0;
}