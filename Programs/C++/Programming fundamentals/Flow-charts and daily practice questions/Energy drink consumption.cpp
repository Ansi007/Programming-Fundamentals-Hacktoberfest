//Energy drink consumptions
#include <iostream>
using namespace std;
int main(){
	int customers = 16500;
	int purchas1ormore_per_week,preffered_citrusdrink;
	purchas1ormore_per_week = customers * 0.15;
	preffered_citrusdrink = 0.58 * 	purchas1ormore_per_week;
	

	cout<<"The number of customers who purchase one or more energy drink per week are : "<<purchas1ormore_per_week<<endl;
cout<<"The number of customers who preffered citrus fruit energy drink are : "<<	preffered_citrusdrink<<endl;
return 0;
}
