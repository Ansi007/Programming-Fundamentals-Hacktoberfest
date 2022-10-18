//programm for finding the sales tex
#include <iostream>
using namespace std;
int main()
{
//  int 	total_salestax=95;
//  double state_salestext =0.04;
//   double country_salestext =0.04;
//   double total;
//   total = (total_salestax *state_salestext ) + (total_salestax *country_salestext );
//   cout<<"The  total tax is : "<<total<<endl;
//   return 0;

//float purchase = 95;      //define float variable purchase and set it to 95
//    float stateTax, countyTax;  //define variables stateTax and countyTax
//    stateTax = 0.04 * purchase;   //evaluate state tax and store it in stateTax
//    countyTax = 0.02 * purchase;//evaluate county tax and store it in countyTax
//  cout << "State tax is: $" << stateTax << "\n";
//    cout << "County tax is: $" << countyTax << "\n";
//   cout << "Total tax is: $" << stateTax + countyTax;
//    return 0;
  
  float statetax,countrytax,purchase=95;
  statetax = 0.04 * purchase;
  countrytax = 0.02 * purchase;
  cout<<"The state tax is : $"<< statetax<<endl;
  cout<<"The country tax is : $"<<countrytax<<endl;
  cout<<"The total tax is : $"<< statetax + countrytax<<endl;
  return 0;
	
} 
