//12. Input numbers till user inputs a zero, and display the smallest number
#include <iostream>
using namespace std;
int main()
{
	 int num,largestNo=0;
	cout<<"Input number The number"<<endl;
	      while(num!=0)
	{
		
		cin>>num;
		if(num > largestNo)
		{
			largestNo=num;
			cout<<"largest is :"<<num<<endl;
		}
		else 
		{
			
			largestNo = largestNo;
				cout<<"largest is :"<<largestNo<<endl;
		
		}
		                   
		
		
	
	}
		return 0;
}
