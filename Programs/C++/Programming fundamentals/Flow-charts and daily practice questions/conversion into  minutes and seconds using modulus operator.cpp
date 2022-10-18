//program to convert the seconds into minutes and seconds
#include <iostream>
using namespace std;
int main()
{
	//totle seconds 125
	int totle_seconds = 125;
	
	//variable declaration for minutes and seconds
	 int minutes,seconds;
	 
	 //find the number of minutes
	 //1 minute = 60 seconds
	 //1 seccond = 1/60 minutes
	 
	 minutes = totle_seconds /60;
	 seconds = totle_seconds % 60;
	 
	 
	 //display the big division of 125 sec
	  cout<<"125 sec are equal to: " <<minutes<<" minutes and "<<seconds<<" seconds"<<endl;
	  return 0;
}
