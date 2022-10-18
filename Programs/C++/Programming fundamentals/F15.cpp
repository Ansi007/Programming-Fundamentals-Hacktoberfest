#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//dvd Counter
	int dvdCount=1;
	
	//Number of DVD's
	int numDvds;
	
	//Accumulator
	double total=0.0;
	
	//current release
	char current;
	cout<<"DVDs"<<endl;
	cin>>numDvds;
	
	
	do 
	{
	if((dvdCount%3)==0)
	{
		
		cout<<"DVD # "<<dvdCount<<"Is free"<<endl;
		continue;	
	}
	cout<<"Is Dvd # "<<dvdCount<<" a current release?";
	cin>>current;
	if(current=='Y'||current=='y')
	total+=3.50;
	else
	{
		total+=2.50;
	
	}
	
	
}




	while(dvdCount++ < numDvds);

//display the total

cout<<fixed<<showpoint<<setprecision(2)<<"the total is :"<<total<<endl;
return 0;	
	
	
}
