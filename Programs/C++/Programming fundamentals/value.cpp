#include <iostream>
using namespace std;
void sum(int,int,int);
int main()

{
cout<<"Main starting"<<endl;
int value1,value2,value3;
cout<<"Input the values for three numbers"<<endl;
cin>>value1>>value2>>value3;
sum(value1,value2,value3);
return 0;
}

void sum(int num1,int num2,int num3)
{
	cout<<"Calculate sum"<<endl;
	cout<<(num1+num2+num3)<<endl;
}
