//to fix the range of rand()
//formula is :
//y=(rand%(maxValue - minValue + 1)) +minValue;

#include <iostream>
#include <ctime>       //for time function
#include <cstdlib>    //for rand and srand

using namespace std;
int main()
{
	
	//named constants
	const int minValue=1;
	const int maxValue=6;
	
	//variables
	int die1;
	int die2;
	
	//get the system time
	unsigned seed = time(0);
	
	
	//seed the random number generator
	srand(seed);
	
	
	cout<<"Rolling the dice..."<<endldie1 = (rand() % (maxValue - minValue + 1)) + minValue;
	die1 = (rand() % (maxValue - minValue + 1)) + minValue;
die2 = (rand() % (maxValue - minValue + 1)) + minValue;

cout<<die1 <<endl;
cout<<die2<<endl;



cout<<"Rolling the dice..."<<endl;
	die1 = (rand() % (maxValue - minValue + 1)) + minValue;
	die2 = (rand() % (maxValue - minValue + 1)) + minValue;


cout<<die1 <<endl;
cout<<die2<<endl;





cout<<"Rolling the dice..."<<endl;
	die1 = (rand() % (maxValue - minValue + 1)) + minValue;

     die2 = (rand() % (maxValue - minValue + 1)) + minValue;
cout<<die1<<endl;
cout<<die2<<endl;



return 0;	
	
	
	

}
