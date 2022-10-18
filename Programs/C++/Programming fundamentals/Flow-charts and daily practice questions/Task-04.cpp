//programm  for  finding  the widgets stacked on pallet.
#include <iostream>
using namespace std;
int main()
{
	//constant named variable
	const double IND_WIDGETS_WT = 9.2;
	
	//varriable declaration
	double totalweight,
	palletweight,
	widgets;
	
	
	//Ask for the pallet wieght from user.
	cout<<"How much the Pallet weighs ? "<<endl;
	cin>>palletweight;
	
	
	//Ask for the total weight (pallet weight + widget wieght)
	cout<<"How much the total weight including both, pallet and widgets ? " <<endl;
	cin>>totalweight;
	
	//Calculate number of widgets from total weight.
	widgets= (totalweight - palletweight)/IND_WIDGETS_WT;
	cout<<endl<<endl;
	
	
	
    //Display number of widgets from total weight. and result will be a double form data.!!
	cout<<"The number of widgets calculated from total weight are : "<<widgets<<endl;
	cout<<endl<<endl;
	
	
	//End of program( the programm is terminated successfully.)
	return 0;
	
	
	
}
	

	       
	       
	
	

