#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    long long a, b, c, s1, s2, s3, sum;
    cout<<"Enter N(number to which sum is to be calculated): ";
    cin>>num;

    //calculate number of terms which are multiple of 3, 5 and 15
    a = num / 3;
    b = num / 5;
    c = num / 15;
    //calculate sum of multile of 3, 5 and 15
    s1 = 3*((a*(a + 1)) / 2);
    s2 = 5*((b*(b + 1)) / 2);
    s3 = 15*((c*(c + 1)) / 2);
    //add sum of multiple of 3 and 5 and also delete sum of multiples of 15(these are the numbers that occur twice i.e in multiple of 5 as well as 15)
    sum = s1 + s2 - s3;

    cout<<"Sum of terms from 1 to "<<num<<" is : "<<sum;

    return 0;
}
