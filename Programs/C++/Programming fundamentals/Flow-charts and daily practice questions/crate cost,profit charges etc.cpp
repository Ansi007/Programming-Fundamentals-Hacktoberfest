//crate charges,cost,volume,profit
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	const double cost_per_cubic_foot=0.23;
	const double charges_per_cubic_foot=0.50;
	
	
	
	double length,width,height,volume,cost,charges,profit;
	

cout<<setprecision(2)<<fixed;
cout<<"length"<<endl;
cin>>length;
cout<<"width"<<endl;
cin>>width;
cout<<"height"<<endl;
cin>>height;
volume = height * width * length;
cost=volume * cost_per_cubic_foot;
charges=volume * charges_per_cubic_foot;
profit = charges - cost;


cout<<"volume : "<<volume<<endl;
cout<<"charges : "<<charges<<endl;
cout<<"cost : "<<cost<<endl;

cout<<" profit: "<<profit<<endl;
return 0;


}
