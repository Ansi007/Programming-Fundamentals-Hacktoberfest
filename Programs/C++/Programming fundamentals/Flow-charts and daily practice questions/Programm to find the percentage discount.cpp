//programm too calculate the sales price and regular price of an item is $59.95,thro7gh which we have to subtrct the discount amount
#include <iostream>
using namespace std;
int main()
{
	
	//vaeriiables to hold the sales price and amount of dicount and the salesprice
	double discount , regular_price = 59.95,sales_price;
	
	//calculate the discount amount by multiplying the %age discount with regular price
	
	discount = 0.2 * regular_price;
	
	//calculate and display the sales_price
	
	sales_price =regular_price -discount;
	
	//display the salesprice,discount and egular price;
	
	cout<<"Salesprice is $"<<sales_price<<endl;
	cout<<"Discount amount is : "<<discount<<endl;
	cout<<"regular price is : " <<regular_price<<endl;
	return 0;
	
	
	//
}
