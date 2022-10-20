//program for printing the next 20 leap years.
#include<iostream>
void isLeap(int year);
int count=0;
int main() {
    int n,m;
    cout<<"enter the number:"<<endl;
        cin>>n;
    cout<<"enter the number 2:"<<endl;
        cin>>m;
for(int i=n;i<m;i++)
{
    
    isLeap(i);
    if(count==20)
    {
        return 0;
    }
}

void isLeap(int year)
{
    
    

    if (year % 400 != 0)
    {
        if (year % 4 != 0 || year % 100 == 0)
        {
            
        }
        else
        {
            cout<<year<<endl;
    
            count++;
        }

    }
