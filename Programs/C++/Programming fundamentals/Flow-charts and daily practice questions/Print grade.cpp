
#include <iostream>
using namespace std;
int main()
{
	//variable declaration
	int marks,sum,avg,marks1,marks2,marks3,marks4,marks5;
	
	
	
	//marks initialization 
	marks = 0; 
	
	
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
	//Ask the user to enter the marks of subject 1
		cout<<"Enter the marks of subject 1"<<endl;
	cin>>marks1;
	
	
	//Ask the user to enter the marks of subject 
	cout<<"Enter the marks of subject 2"<<endl;
	cin>>marks2 ;
	
	
	//Ask the user to enter the marks of subject 3
	cout<<"Enter the marks of subject 3"<<endl;
	cin>>marks3;
	
	
	//Ask the user to enter the marks of subject 4
	cout<<"Enter the marks of subject 4"<<endl;
    cin>> marks4;
    
    
    
    //Ask the user to enter the marks of subject 5
	cout<<"Enter the marks of subject 5"<<endl;
	cin>>marks5;
	
	
	
	
	//sum marks of 5 subject
	sum = marks1 + marks2 + marks3 + marks4 + marks5;
	
	
	
	//Display marks
	cout<<"Display sum : "<<sum<<endl;
	
	
	
	//Calculate avg
	//avg = sum of marks / no. of subjects
	avg = sum / 5;
	
	
	
	//Display average
	cout<<"Display average : "<<avg<<endl;
	
	
	
	//Apply condition to check the grade on the behalf of avg marks
	if(avg > 85)
	{
		cout<<"Grade A"<<endl;
	}
   else if(avg >= 70 )
	{
		cout<<"	Grade B"<<endl;
	}
   else	if(avg >= 60 )
	{
		cout<<"	Grade C"<<endl;
	}
	
	
	
	//If the avg marks does not belong to the above mentioned grade,then the statement below will be executed.
	else
	{
		cout<<"	Grade F"<<endl;
	}
	
	
	
	
	//terminate programm
return 0;
}
	    







