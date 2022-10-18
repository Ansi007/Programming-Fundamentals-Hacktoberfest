////formatting output with setw
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	int num1=234 , num2 =3456 ,num3= 123456 ,num4=32 ,num5 = 67567834 ,num6=5 ,num7=12 ,num8=54 ,num9=367;
//	//display the numbers on screen with equal gape
//	cout<<setw(9)<<num1<<setw(9)<<num2<<setw(9)<<num3<<endl;
//	cout<<setw(9)<<num4<<setw(9)<<num5<<setw(9)<<num6<<endl;
//	cout<<setw(9)<<num7<<setw(9)<<num8<<setw(9)<<num9<<endl;
//	return 0;
//}




//// This program displays three rows of numbers. 
//  #include <iostream> 
//  #include <iomanip> // Required for setw 
//  using namespace std; 
//  
//  int main() 
//  { 
//  int num1 = 2897, num2 = 5, num3 = 837, 
//  num4 = 34, num5 = 7, num6 = 1623, 
//   num7 = 390, num8 = 3456, num9 = 12; 
//
// // Display the first row of numbers 
// cout << setw(6) << num1 << setw(6) 
// << num2 << setw(6) << num3 << endl; 
//
// // Display the second row of numbers 
// cout << setw(6) << num4 << setw(6) 
// << num5 << setw(6) << num6 << endl; 
//
// // Display the third row of numbers 
// cout << setw(6) << num7 << setw(6) 
// << num8 << setw(6) << num9 << endl; 
// return 0; 
//} 









//programm in which the setwidth is much smaller than the data
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int value=4567893456789;
	cout<<setw(6)<<value;
	return 0;
}
