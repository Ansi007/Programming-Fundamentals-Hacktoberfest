//sales figures
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double day1 , day2, day3,total;
	//enter the sales for each day
	cout<<"sale for day 1 "<<endl;
	cin>>day1;
		cout<<"sale for day 2 "<<endl;
		cin>>day2;
			cout<<"sale for day 3 "<<endl;
			cin>>day3;
			
			//calculate the total sales
			total = day1 + day2 + day3;
			
			// Display the sales figures. 
//			 cout << "\nSales Figures\n"; 
//             cout << "-------------\n"; 
   
   cout<<"Day 1 : "<<setw (8) <<day1<<endl;
   cout<<"Day 2 : "<<setw (8) <<day2<<endl;
   cout<<"Day 3 : "<<setw (8) <<day3<<endl;
   cout<<"total : "<<setw (8) <<total<<endl;
   return 0;



			
			
			
			
}
