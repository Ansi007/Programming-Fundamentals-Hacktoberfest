// average calculation
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int score1,score2,score3,avg;
	const int HIGH_SCORE=95;
	
	
	//Ask for entering the score
	 cout<<"Enter Score1,score2 and score3 : "<<endl;
	 cin>>score1>>score2>>score3;
	 
	 //calculate the average
	 avg = (score1 + score2 + score3)/3.0;
	 
	 cout<<showpoint<<setprecision(1)<<fixed;
	 cout<<"your average is : "<<avg<<endl;
	 
	//check condition
	 if (avg > HIGH_SCORE)
	 {
	 	cout<< "Congratulations!!! you obtained good marks!!!"<<endl;
	 }
	 	
	 
	 
	 
	 	return 0;
	 
}
