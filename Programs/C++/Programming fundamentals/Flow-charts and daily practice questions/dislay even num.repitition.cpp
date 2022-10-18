//. Input SLimit and ELimit from user, and display Even numbers between range, with both limits included
#include <iostream>
using namespace std;
int main()
{
	int slimit,elimit,even;
	cout<<"Input starting limit"<<endl;
	cin>>slimit;
	
	cout<<"Input ending limit"<<endl;
	cin>>elimit;
	while (slimit <=elimit){
	if(slimit % 2==0)
	
	
	{
		cout<<"number is : " <<slimit<<endl;
		slimit = slimit +2;
	}
	else {
		slimit = slimit + 1;
		cout<<"number is :"<<slimit<<endl;
		slimit = slimit + 2;
	}
	

}
return 0;
}

