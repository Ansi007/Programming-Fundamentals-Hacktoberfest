//Finding the sum of n numbers taken from the user, where n is taken from the user as well.
#include <iostream>
using namespace std;
int main()
{
	int num,sum=0 ,n;
	cout<<"input n from user"<<endl;
	cin>>n;
	cout<<"input  number from user"<<endl;
	for(int i=1;i<=n;i++)
	{
		cin>>num;
		sum = sum + num;
	}
	cout<<"Display sum on screen"<<sum<<endl;
	return 0;
}


                      //OR
                      
                      
    //Finding the sum of n numbers taken from the user, where n is taken from the user as well.
	#include <iostream>
	using namespace std;
	int main()
	{
		int num,sum =0;
		cout<<"input n from user :"<<endl;
			cin>>n;
		cout<<"Input numbers from user:"<<endl;
		for(int i = 1; i<=n; i++)
		{
		cin>>num;
		cout<<"Print sum"	<<endl;
		cout<<sum<<endl;
		
			
		}
					 }                 
