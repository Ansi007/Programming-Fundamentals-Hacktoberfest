#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int range_of_no,no_of_digit,k,count_of_output=0;
    cout<<"Enter the no of digits in no: ";
    cin>>no_of_digit;
    cout<<"Enter the difference of consecutive digits: ";
    cin>>k;
    range_of_no=(pow(10,no_of_digit-1))+1;
    int a;
    int b , c;
    while (range_of_no<(pow(10,no_of_digit))-1)
    {
        a = range_of_no / 100;
        b= range_of_no % 100;
        c= b / 10;
        if(abs(a-c)==k)
        {
            a = b%10;
            if(abs(a-c)==k)
            {
                cout<<range_of_no<<" ";
                count_of_output++;
            }
        }
        range_of_no++;
    }
    if(count_of_output<=0)
    {
        cout<<"No number found...."<<endl;
    }
    
    
    return 0;
}