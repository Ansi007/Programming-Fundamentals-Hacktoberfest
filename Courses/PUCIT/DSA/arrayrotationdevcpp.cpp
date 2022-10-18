#include<iostream>

using namespace std;

int i,b,j,temp,k;

int main()
{   cout<<"Enter the size of array:\n";
    cin>>b;
    int a[b];
    for(i=0;i<b;i++)
	cin>>a[i];
	cout<<"The given array is:\n";
	for(i=0;i<b;i++)
    cout<<a[i]<<" ";
	cout<<"\nEnter the position to rotate with\n";	   
    cin>>k;   
    for(i=0;i<k;i++)
    { 
	    temp=a[0];	    
	    for(j=0;j<(b-1);j++)
	    a[j]=a[j+1];				
		a[b-1]=temp;    
	}
    cout<<"The output is:\n";
    for(i=0;i<b;i++)
    cout<<a[i]<<" ";
    return 0;
}

