//WAP to print hollow sphere 
#include <iostream>
using namespace std;

int main() 
{
  int i,j,s;
  cout<<"Enter size of square: ";
  cin>>s;
  for(i=0;i<s;i++) 
  {
    for(j=0;j<s;j++) 
    {
      if(i==0 || i==s-1)
       {
        cout<<"*";
       }
      else 
      {
         if(j==0 || j==s-1) 
        {
          cout<<"*";
        }
        else 
        {
          cout<<" ";
        }
      }
    }
    cout<<"\n";
  }
  return 0;
}
