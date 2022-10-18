//Take three numbers from the user and determine the largest number. Do it using a loop.
//#include <iostream>
//using namespace std;
//int main()
//{
//	//variable declaration
//	int num1,num2,num3,i=1;
//	
//	//input value of variable
//	
//	while(i<=1)
//	{
//		cout<<"Input num1 from user"<<endl;
//	cin>>num1;
//	
//	cout<<"Input num2 from user"<<endl;
//	cin>>num2;
//	
//	cout<<"Input num3 from user"<<endl;
//	cin>>num3;
//	
//		if(num1>num2 && num1>num3)
//		{
//		    cout<<"num1 is largest number"<<endl;
//		    
//		}
//		else if(num2>num1 && num2>num3)
//		{
//			cout<<"num2 is the largest number"<<endl;
//		}
//		
//		else{
//			
//			cout<<"num3 is the largest number"<<endl;
//		}
//		i ++;
//	}
//	return 0;
//	
//	
//	
//}



//progrm to check the greatest of threee numbers
#include <iostream>
using namespace std;
int main()
{
	int i=3,largestNumber=0, value;
	
	cout<<"Input value :"<<endl;
	while(i--){
		
		cin>>value;
		if(value >largestNumber)
	 {
	 	largestNumber = value;
	 	
	  }
	
	}
	cout<<"The largest value is :"<<largestNumber<<endl;
	
	return 0;
	
}
