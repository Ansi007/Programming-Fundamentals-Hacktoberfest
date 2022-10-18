// Take two positive integers a and n from the user. Calculate and display a^n power operator is not 
//available.

//power = base ^ exponent

#include <iostream>
using namespace std;
int main()
{
	
	//varaiable declaration and initiation
int exponent;
float base,result=1;

//Ask for input exponent and base respectiely
cout<<"Enter base and exponent respectively :"<<endl;
cin>>base>>exponent;
//display power without using power function

cout<<base<< "^" << exponent << "=" ;


while(exponent!=0){

result *= base;
--exponent;    //decrement in exponent
}

//Display result5
cout<<result<<endl;
	return 0;

}



