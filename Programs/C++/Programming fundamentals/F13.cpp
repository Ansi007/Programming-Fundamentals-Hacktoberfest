#Include <iostream>
#include <cmath>
#include <string>
using namespace std;

void timesTen(string);

int main()
{
	string number = "number";
	cout<<"Main stating "<<endl;
	timesTen(number);
	cout<<"Main ending"<<endl;
}



void timesTen(string number)
{
	
	cout<<"product of numbers  time ten"<<pow(number,10)<<endl;
}

