//Funcy=tion all with different argumenteach time
#include <iostream>
using namespace std;
void display(int);
int main()

{
	cout<<"Main starting"<<endl;
	cout<<"I'm passing different values to the argument"<<endl;
	display(5);
display(15);
display(20);
display(50);
cout<<"Main ending"<<endl;
return 0;
}

void display(int num)
{
	cout<<"The value is"<<num<<endl;
}
