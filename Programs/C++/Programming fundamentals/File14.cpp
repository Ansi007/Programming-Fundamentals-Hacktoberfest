//using of breaks in nested loop
#include <iostream>
using namespace std;
int main()
{
	for(int row=0;row<5;row++)
	{
		for(int star=0;star<20;star++)
		{
				cout<<"*";
		            if(star==10)
		
		           	break;
		
		            
		}
		cout<<endl;
	
	}
return 0;	
}
