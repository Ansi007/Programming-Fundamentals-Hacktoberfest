//checking if the originaal value of argument changes
#include <iostream>
using namespace std;
 void check(int);
 int main()
 {
 	int value=12;
 	cout<<"main starting "<<endl;
 	check( value);
 	cout<<"The original value is "<<value<<endl;
 	cout<<"Main ending"<<endl;
 }
 
 void check(int value)
 {
 	value=0;
 	cout<<"The value noow is : "<<value<<endl;
 	
 }
 
