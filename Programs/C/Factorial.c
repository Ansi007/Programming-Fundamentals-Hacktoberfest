//WAP to print factorial of any number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<Enter any no.:";
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
     }
    cout<< "Factorial is:"<<factorial<<endl;
    return 0;
}
