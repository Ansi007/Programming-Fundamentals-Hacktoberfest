#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//const double PI=3.14159;
//double degrees, radians;
//cout<<"enter degrees: "<<endl;
//cin>>degrees;
//radians=degrees * PI/180;
//cout<<"Radians: "<<radians<<endl;
//using namespace std;
//int main()
//{
//	int qty=12,salesReps=23;
//	double unitsEach;
//	cout<<"double data type : "<<static_cast<double>(qty)/salesReps<<endl;
//	
//	return 0;
//}







//Use of the == operator and = operator
//#include <iostream>
//# include <iomanip>
//using namespace std;
//int main(){
//	int score1,score2,score3;
//	double avg;
//	//Get three test scores
//	
//	cout<<"Enter score : "<<endl;
//	cin>>score1>>score2>>score3;
//	avg=(score1 + score2 +score3)/3.0;
//	
//	cout<<"The avg is : "<<avg<<endl;
////assignment statement in if condition will always be true and all the statements inside will be executed
//if(avg=95)	{
//	cout<<"Congratulations!!! you obtained good marks.";
//	}
//	
//	return 0;
//}





//to ceck if the number id odd or even
//#include <iostream>
//using namespace std;
//int main(){
//	int number;
//	cout<<"Enter the number : "<<endl;
//	cin>>number;
//	if(number %2 == 0)
//	{
//		cout<<"The number is even "<<endl;
//		
//	}
//	else{
//		cout<<"The number is odd."<<endl;
//	}
//	return 0;
//}







//
////to check a number before division
//#include <iostream>
//using namespace std;
//int main(){
//	int num1,num2,quotient;
//	cout<<"Enter the two numbers :"<<endl;
//	cin>>num1>>num2;
//	
//
//	
//	//check if num2 is equal to zero
//	if(num2==0)
//	{
//		cout<<"Num2 is zero,kindly run the programm again!! and enter a number other than zero."<<endl;
//	}
//	
//	
//	else 
//	{
//		//calculate quotient if num2 is npt equal to zero
//	         quotient=num1/num2;
//		cout<<"The quotient of the num1 divided by num2 is : "<<quotient<<endl;
//		
//	}
//	
//	
//
//
//return 0;
//
//
//
//	}







//use of the nesed if statements
//#include <iostream>
//using namespace std;
//int main(){
//
//	char employed,recentGrad;
//	
//	cout<<"Please answer the question in Y or N form ! "<<endl;
//	cout<<"Are you an employ ?"<<endl;
//	cin>>employed;
//	
//	cout<<"Are you graduated from college? "<<endl;
//	cin>>recentGrad;
//	
//	if(employed=='Y')
//	{
//		if(recentGrad=='Y')
//		{
//			cout<<"You're qualified for the low interest rate!! "<<endl;
//		}
//	}
//return 0;
//}






//Another way of solving the program by using nested if else statement
//#include <iostream>
//using namespace std;
//int main(){
//	char employed,recentGrad;
//	
//	cout<<"Answer the  questio to in Y or N "<<endl;
//	cout<<"Are you an employed? "<<endl;
//	cin>>employed;
//	
//	
//	cout<<"Are you a recent graduated? "<<endl;
//	cin>>recentGrad;
//	
//	
//	if(employed =='Y')
//	{
//		if(recentGrad=='Y')
//		{
//			cout<<"	You are qualified for the low interest rate !!"<<endl;
//		}
//		
//		else
//		{
//			cout<<"You must be a recent graduated for getting low interest rate!!"<<endl;
//		}
//		
//	}
//	else{
//		cout<<"You must be employed to qualify!!"<<endl;
//	}
//	
//}








//input marks and print grade of a person
//#include <iostream>
//using namespace std;
//int main()
//{
//	//named constant
//	const int A_score=90;
//	const int B_score=80;
//	const int C_score=70;
//	const int D_score=60;
//	
//	int testscore;
//	
//	cout<<"Enter test score: "<<endl;
//	cin>>testscore;
//	
//	if(testscore >=  A_score)
//	{
//		cout<<"You obtained grade A"<<endl;
//	}
//	else if (testscore >=  B_score)
//	{
//		cout<<"You obtained grade B"<<endl;
//	}
//	
//	else if (testscore >=  C_score)
//	{
//		cout<<"You obtained grade C"<<endl;
//	}
//	
//	else if (testscore >=  D_score)
//	{
//		cout<<"You obtained grade D"<<endl;
//	}
//	
//	else if (testscore < D_score)
//	{
//		cout<<"You obtained grade F"<<endl;
//	}
//	
//	return 0;
//	
//}






//#include <iostream>
//using namespace std;
//int main()
//{
	//named constant
//	const int A_score=90;
//	const int B_score=80;
//	const int C_score=70;
//	const int D_score=60;
//	
//	int testscore;
//	
//	cout<<"Enter test score: "<<endl;
//	cin>>testscore;
//	
//	if(testscore >=  A_score)
//	{
//		cout<<"You obtained grade A"<<endl;
//	}
//	else
//	{
//		if(testscore>= B_score)
//		{
//			cout<<"You obtained B grade.  "<<endl;
//			
//		} 
//		else {
//			if(testscore >= C_score)
//			{
//				cout<<"You obtained C grade. "<<endl;
//			}
//			else
//			{
//				if(testscore >= D_score)
//				{
//					cout<<"You obtained D grade. "<<endl;
//				}
//				else{
//					if(testscore < D_score)
//					{
//						cout<<"You obtained F grade."<<endl;
//					}
//				}
//			}
//			
//		}
//	}
//}









#include <iostream>
using namespace std;
int main(){
	
int number; 

cout << "Enter a number: "; 
cin >> number; 
if (number > 0) 
 { 
    cout << "Zero\n"; 
 
 
    if (number > 10) 
        { 
            cout << "Ten\n"; 
        if (number > 20) 
			{ 
               cout << "Twenty\n"; 
            } 
        } 
 
	
}
}

