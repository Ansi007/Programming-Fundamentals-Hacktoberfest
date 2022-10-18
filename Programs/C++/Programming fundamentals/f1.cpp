//#include <iostream> 
//using namespace std; 
//void func1(double, int); // Function prototype
//
//int main() 
// { 
// int x = 0; 
// double y = 1.5; 
// cout << x << " " << y << endl; 
// func1(y, x); 
// cout << x << " " << y << endl; 
// return 0; 
// } 
////www.engbookspdf.com322 Chapter 6 Functions
//void func1(double a, int b) 
// { 
// cout << a << " " << b << endl; 
// a = 0.0; 
// b = 10; 
// cout << a << " " << b << endl; 
// }






#include <iostream> 
#include <iomanip>
using namespace std; 
void showDollars(double); // Function prototype 
int main() 
 { 
 double payRate, hoursWorked, wages; 
 cout << "How many hours have you worked? " <<endl;
 cin >> hoursWorked; 
 cout << "What is your hourly pay rate? "; 
 cin >> payRate; 
 wages = hoursWorked * payRate; 
 showDollars(wages); 
 return 0; 
 } 
 
  
   
  
  void showDollars(double wages)
  {
  	cout<<fixed<<setprecision(2)<<showpoint<<endl;
  	cout<<"Your wages are$"<<wages<<endl;
  }
  
  
