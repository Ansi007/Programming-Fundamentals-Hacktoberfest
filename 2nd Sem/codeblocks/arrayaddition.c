#include <iostream>
#include<conio.h>
using namespace std;
int n,i,sum;
int main{

	cout<<"Enter the size of array:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{cin>>a[i];
	  sum=sum+a[i];
	}
	cout<<"The sum of the given arry is"<<sum;
return 0;
}

