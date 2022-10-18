//stadium seating ,seats cost and number of tickets sold
 
 #include <iostream>
using namespace std;
int main()
{
	//constant named variable
 int const CLASS_A_TICKETS_COST =15;
 int const CLASS_B_TICKETS_COST =12;
 int const CLASS_C_TICKETS_COST =9;
 //variable declaration
 int numof_ClassAtickets;
 int numof_ClassBtickets;
 int numof_ClassCtickets;
 int Total;
 
 //read the instruction given .
 cout<<"Enter the number of Class A tickets sold :  "<<endl;
 //input numer of class A tickets from user.
 cin>>numof_ClassAtickets;
 
  //read the instruction given .
 cout<<"Enter the number of Class B tickets sold :  "<<endl;
 //input numer of class B tickets from user.
 cin>>numof_ClassBtickets;
 
  //read the instruction given .
 cout<<"Enter the number of Class C tickets sold :  "<<endl;
 //input numer of class C tickets from user.
 cin>>numof_ClassCtickets;
 
 // the total amount of income generated from ticket sales
 	Total = (CLASS_A_TICKETS_COST * numof_ClassAtickets) + 
 	        (CLASS_B_TICKETS_COST * numof_ClassBtickets) +
 	        (CLASS_C_TICKETS_COST * numof_ClassCtickets);
 	    
 	    //Dispkay total amount genertated from ticket sales
 	    cout<<" The  total amount of income generated from ticket sales is :  "<<Total<<endl;
 	    
 	    
 	    //End of the programm
		 return 0;
 	}
