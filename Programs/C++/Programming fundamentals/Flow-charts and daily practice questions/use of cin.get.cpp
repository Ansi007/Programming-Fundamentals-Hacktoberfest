//cin.get use
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"This programm has paused, press enter key to continue " <<endl;
	cin.ignore();
cin.get(ch);

	cout<<"This programm has paused 2nd time, press enter key to continue" <<endl;
		cin.ignore();
		cin.get(ch);

	cout<<"This programm has paused 3rd time, press enter key to continue" <<endl;
		cin.ignore();
cin.get(ch);
cout<<"Thank you"<<endl;
return 0;


}
