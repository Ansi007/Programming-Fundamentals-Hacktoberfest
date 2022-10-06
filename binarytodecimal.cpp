//WAP to convert  binary(2 bit) number to decimal(10 bit)
#include<iostream>
using namespace std;
 int binarytodecimal(int n)
{
    int a=0;
    int x=1;
    int y;
    while(n>0)
    {
        y=n%10;
        a=a+x*y;
        x=x*2;
        n=n/10;
    }
    return a;
    }
 int main()
 {
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    int binarytodecimal(int n);
    cout<<binarytodecimal(n)<<endl;
    return 0;
}
