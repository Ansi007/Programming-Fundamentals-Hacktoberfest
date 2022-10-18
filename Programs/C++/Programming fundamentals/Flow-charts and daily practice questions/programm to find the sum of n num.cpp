////Finding the sum of n numbers taken from the user, where n is taken from the user as well.
//#include <iostream>
//using namespace std;
//int main(){
//	
//	
//	//variable declaration and initiation
//	int n,num,sum = 0;
//	
//	//Ask for n from user
//	cout<<"Input n from user"<<endl;
//	cin>>n;
//	
//	//Ask for number from user
//	cout<<"Input num from user"<<endl;
//	
//	//for loop for itteration
//	for(int i=1;i<=n;i++)
//	{
//		
//		//print output
//	cin>>num;
//	sum=sum +num;
//	
//	//display sum
//	cout<<"Display sum"<<sum<<endl;
//	
//	}
//}







//OR


//program for computing the sum of n numbers
#include <iostream>
using namespace std;
int main()
{
	int i=1,n,num,sum=0;
	
	cout<<"Input n from user"<<endl;
	cin>>n;
	
	
	
	while(i<=n)
	{
		cout<<"Input num from user"<<endl;
	cin>>num;

		
		sum= sum +num;
	
			cout<<"Display sum : "<< sum <<endl;
				
	       i++;
	       
	       
	}
	return 0;
		



