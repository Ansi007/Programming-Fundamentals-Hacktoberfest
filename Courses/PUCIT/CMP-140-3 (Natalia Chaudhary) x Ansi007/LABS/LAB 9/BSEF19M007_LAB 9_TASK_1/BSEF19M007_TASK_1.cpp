#include <iostream>
using namespace std;

int main()
{
	int var1 = 10, var2 = 5;
	int* p1, * q1, * r1;
	int** g;
	int var3;
	var3 = ++var2;
	p1 = &var1;
	q1 = &var2;
	r1 = &var3;
	 g = &r1;
	*p1 = var3++;
	*q1 = ++var1;


	cout << " => Address of variable var1 : " << p1 << endl; // or &var1
	cout << " => Address of variable var2 : " << q1 << endl; // or &var2
	cout << " => Address of variable var3 : " << r1 << endl; // or &var3
	cout << " => Address of pointer variable p1 : " << &p1 << endl; 
	cout << " => Address of pointer variable q1 : " << &q1 << endl;
	cout << " => Address of pointer variable r1 : " << &r1 << endl;
	cout << " => Value at location pointed by variable p1 : " << *p1 << endl; // or var1
	cout << " => Value at location pointed by variable q1 : " << *q1 << endl; // or var2
	cout << " => Value at location pointed by variable r1 : " << *r1 << endl; // or var3
	cout << " => Value at location pointed by variable g : "  <<  *g << endl; // or r1
	cout << " => Value at location pointed by the pointer that is pointed by g : " << **g << endl; // or var3, *r1
	cout << " => Address of location pointed by the pointer that is pointed by g : " << *g << endl; // or &var3
	cout << " => Address of pointer variable g : " << &g << endl;


	return 0;

}