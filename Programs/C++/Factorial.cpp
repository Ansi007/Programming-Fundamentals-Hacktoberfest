// Optimized Approach using Recursion
#include<iostream>
using namespace std;

int fact_optimized(int x){
	
	if(x==0) return 1;
	if(x==1) return 1;
	return x * fact_optimized(x-1);
}
int main()
{
	int x;
	cout << "Enter number :";
	cin >> x;
	cout<<"Factorial of "<<x<<" :"<<fact_optimized(x)<<endl;
	return 0;	
}

// Direct Approach
#include<iostream>
using namespace std;
int main()
{
	double x;
	cout << "Enter number :";
	cin >> x;
	if (x == 0)
	{
		x=1;
	}
	else
	{
		for (int i = x - 1; i >= 1; i--)
		{
			x = x * i;
		}
	}
	cout <<"Its factorial is :"<< x;
}
