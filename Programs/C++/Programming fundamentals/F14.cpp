#include <iostream>
using namespace std;
int main()
{
	int testValue =0;
	while(testValue++<10)
	{
		if(testValue==4)
		continue;
		cout<<testValue<<" ";
	}
}
