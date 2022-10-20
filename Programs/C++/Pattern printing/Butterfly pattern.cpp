#include <iostream>
using namespace std;
int main()
{
	int k;
	cout<<"enter the number of rows:";
	cin>>k; 
	for(int i=1;i<k;i++){
		int empty_space=2*k-2*i;
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(int j=1;j<=empty_space;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=k;i>=1;i--){
		int empty_space=2*k-2*i;
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(int j=1;j<=empty_space;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}


