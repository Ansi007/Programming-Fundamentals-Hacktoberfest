////Total purchase
//#include <iostream>
//using namespace std;
//int main()
//{
//	//variable declaration and initiation
//	
//	double item1=15.95,item2=24.95,item3=6.95,item4=12.95,item5=3.95,subtotal,sales_tax,total;
//	
//	//Display output
//	cout<<"item 1 price is : "<<item1<<endl;
//		cout<<"item 2 price is : "<<item2<<endl;
//			cout<<"item 3 price is : "<<item3<<endl;
//				cout<<"item 4 price is : "<<item4<<endl;
//					cout<<"item 5 price is : "<<item5<<endl<<endl;
//					
//					
//					//calculate subtotal by adding the amount of the items
//					subtotal = item1+item2+item3+item4+item5;
//					cout<<"The subtotal of sale is : "<<subtotal<<endl;
//					
//					//7% of the tax in total sales price
//					
//					sales_tax = subtotal *0.07;
//					cout<<"The amount of sales tax is : "<<sales_tax<<endl;
//					
//					
//					//total = subtotal + amount of sales_tax
//					total = subtotal + sales_tax;
//					
//					cout<<"total purchase is : "<<total<<endl;
//					
//					
//					
//					
//					
//					return 0;
//}





#include <iostream>

int main()
{
    double item1Price = 15.95; //declare item1Price and initialize it to 15.95
    double item2Price = 24.95; //declare item2Price and initialize it to 24.95
    double item3Price = 6.95;  //declare item3Price and initialize it to 6.95
    double item4Price = 12.95; //declare item4Price and initialize it to 12.95
    double item5Price = 3.95;  //declare item5Price and initialize it to 3.95
    
    double subTotal;                 //declare variable subTotal
    subTotal = item1Price + item2Price + item3Price + item4Price + item5Price;
    
    double tax;                      //declare variable tax
    tax = subTotal * 0.07;           //evaluate tax
    
    double total;                    //declare variable total
    total = subTotal + tax;          //evaluate total
    
    //display each item's price
    std::cout << "Price of item 1 is: $" << item1Price << ".\n";
    std::cout << "Price of item 2 is: $" << item2Price << ".\n";
    std::cout << "Price of item 3 is: $" << item3Price << ".\n";
    std::cout << "Price of item 4 is: $" << item4Price << ".\n";
    std::cout << "Price of item 5 is: $" << item5Price << ".\n\n"; 
    
    //display subtotal price
    std::cout << "Subtotal price is: $" << subTotal << ".\n\n";
    
    //display tax amount
    std::cout << "Tax is: $" << tax << ".\n\n";
    
    //display total amount
    std::cout << "Total is: $" << total << " .\n";
    return 0;
}
