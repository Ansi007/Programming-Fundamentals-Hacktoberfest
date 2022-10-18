//Calculate the factorial of a positive integer entered by the user. 
#include <iostream>
using namespace std;
int main()
{
	
	///variable declaration
	int i,fact=1,num;

	//variable initiation
	fact=1;

//Ask for input to user
        cout<<"Input number"<<endl;
        cin>>num;
        
		//loop structure	
	for(i=1;i<=num;i++){
		
        
    	
		
		
			fact=fact*i;
		
	}
		cout<<"Display factorial is :"<< fact <<endl;
			return 0;
}
