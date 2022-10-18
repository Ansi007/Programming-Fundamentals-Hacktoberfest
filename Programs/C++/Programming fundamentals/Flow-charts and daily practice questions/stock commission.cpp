
//stock commission
#include <iostream>
using namespace std;
int main(){
	double share = 750,price_pershare=35.00,commission,total,stock_alone;
	stock_alone = share * price_pershare;
	commission = stock_alone * 0.02;
	
	total = commission + stock_alone;
	cout<<"The amount paid for the stock alone is : "<<stock_alone<<endl;
	cout<<"The amount of commission is : "<<commission<<endl;
	cout<<"The total amount paid  : "<<total<<endl;
	
	return 0;
	
	
	
}
