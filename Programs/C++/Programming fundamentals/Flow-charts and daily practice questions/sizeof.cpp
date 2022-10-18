#include <iostream>
using namespace std;
int main()
{
	string name ,degree,email;
	name = "MISBAH";
	degree ="BS(CS)";
	email = "misbah.aziz1057@gmail.com";
	cout<<"your name:"<<name<<endl;
	cout<<"your degree:"<<degree<<endl;
	cout<<"your email:"<<email<<endl;
	
	cout<<" size of your name:"<<sizeof(name)<<endl;
	cout<<" size of your degree:"<<sizeof(degree)<<endl;
	cout<<" size of your email:"<<sizeof(email)<<endl;
	
	
		cout<<" size of your name:"<<sizeof("MISBAH")<<endl;
	cout<<" size of your degree:"<<sizeof("BS(CS)")<<endl;
	cout<<" size of your email:"<<sizeof("misbah.aziz1057@gmail.com")<<endl;
	
	
}
