#include<iostream>
using namespace std;


int tripleRefParam(int &count) {

	int tripled; 
	tripled = count * 3;

	return tripled;
}



int tripleValueParam(int count) {

	int tripled;
	tripled = count * 3;

	return tripled;

}



int main() {

	int count;
	int tripled_ref;
	int tripled_value;

	cout << " => Give the number you want to triple : ";
	cin >> count;
	
	tripled_value = tripleValueParam(count);
	tripled_ref = tripleRefParam(count);

	cout << " => The tripled value of " << count << " in tripleRefParam is : " << tripled_ref << endl;
	cout << " => The tripled value of " << count << " in tripleValueParam is : " << tripled_value << endl;

	return 0;

}