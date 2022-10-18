//use of getline(for printing the string data)
#include <iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	string city;
	cout<<"Input name and city"<<endl;
	getline(cin,name);
	getline(cin,city);
	
	cout<<"name : "<<name<<endl;
	cout<<"city : "<<city<<endl;
	return 0;
	
}

