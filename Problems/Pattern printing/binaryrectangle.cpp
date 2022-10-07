//WAP to print rectangle by binary number
#include<iostream>
using namespace std;

int main()
{
    int r,c,i,j;

    cout<<"Enter rows and columns of rectangle: ";
    cin>>r>>c;
    for(i=0;i<r;i++)                 //loop for row
    {
        for(j=0;j<c;j++)            //loop for column
        {
            if(i==0 || i==r-1 || j==0 || j==c-1)
                cout<<" 0 ";
            else
                cout<<" 1 ";
        }
        cout<<"\n";
    }
    return 0;
}
