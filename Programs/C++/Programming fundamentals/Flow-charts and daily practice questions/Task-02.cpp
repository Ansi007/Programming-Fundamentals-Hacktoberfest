
//calculate approximate n. of customers who purchased drink per week andwho prefferd citrus flavor.
#include <iostream>
using namespace std;
int main()
{
	//constant named variable
	const int NUM_SURVEYED = 12467;
	
	//variable declaration and initiation.
	float percent_1_or_more = 0.14,
     	percent_pref_citrus = 0.64,
     	
     	
     	//customers who purchased one or more in a week
     	total_1_or_more = NUM_SURVEYED * percent_1_or_more,
     	
     	//customers who purched one or more in a week and prefferd citrus flavor drinks as well.
     	total_pref_citrus =  total_1_or_more* percent_pref_citrus;
     	
     	cout<<endl<<endl;
     	
     	//Display the results 
     	cout<<"The approximate # of customers who purchased one or more energy drinks per week are :  "<<	total_1_or_more<<endl;
        cout<<"The approximate # of customers who preffered citrus-flavor energy drinks are :  "<<total_pref_citrus<<endl;
		cout<<endl<<endl;
		
		//End of  programm  	
          return 0;
}
