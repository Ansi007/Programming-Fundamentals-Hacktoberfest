//random function
#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
int main()
{
	
	//get the system time

	unsigned seed =time(0);
	
	//seed the random generator
	srand(seed);
	//display three ubers
	cout<<rand()<<endl;
	cout<<rand()<<endl;
	cout<<rand()<<endl;
	return 0;
	
	
}
