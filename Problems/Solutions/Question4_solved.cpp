#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    
    cout<<"Enter number of terms : ";
    cin>>num;
    
    long long sum = (num*(num+1))/2;
    
    cout<<"Sum of terms from 1 to "<<num<<" is : "<<sum;

    return 0;
}
