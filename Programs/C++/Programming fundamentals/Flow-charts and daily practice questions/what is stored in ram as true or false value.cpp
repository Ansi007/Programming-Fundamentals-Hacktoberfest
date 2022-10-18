//This program displays the value of true and false states
#include <iostream>
using namespace std;
int main(){
	bool trueValue,falseValue;
	int x=5, y=10;
	trueValue=x<y;
	falseValue=x==y;
	cout<<"True value is : "<<trueValue<<endl;
	cout<<"False  value is : "<<falseValue<<endl;
	return 0;
}
