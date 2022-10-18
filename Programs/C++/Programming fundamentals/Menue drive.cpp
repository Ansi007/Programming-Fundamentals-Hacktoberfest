//menu-driven program
#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void menu();
void fee(double,int);

int main()
{
	//to hold the menu choice
	int choice;
	
	//to hold the number of months
	int months;
	
	//constants for menue
	const int ADULT_CHOICE=1;
	const int CHILD_CHOICE=2;
	const int SENIOR_CHOICE=3;
const 	int QUIT_CHOICE=4;
	
	//constants for membership rate
	const double ADULT=40.0,CHILD=20.0,SENIOR=30.0;
	
	//setup numeric output foratting
	cout<<fixed<<showpoint<<setprecision(2);
	
	do
	{
		//Display the menue and get the user's choice
		menu();
		cin>>choice;
		
		//validate the menue selection
		while(choice <ADULT_CHOICE  || choice >QUIT_CHOICE)
		{
			cout<<"Please enter a valid menu choice "<<endl;
			cin>>choice;
		}
		
		if(choice!=QUIT_CHOICE)
		{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
			cout<<"For how many months?"<<endl;
			cin>>months;
			//Display the membership fees
			switch(choice)
			{
				case ADULT_CHOICE:
					fee(ADULT,months);
					break;
					
					
						case CHILD_CHOICE:
					fee(CHILD,months);
					break;
					
					
						case SENIOR_CHOICE:
					fee(SENIOR,months);
					break;
					
					
			}
		}
	}
	
	while(choice !=QUIT_CHOICE);
	
	return 0;
	
	
	
}

void menu()
{
	cout<<"1.Health membership Club menue\n"<<"2.Satandard Adult Membership\n"<<"3.Senior Citizen membership\n"<<"4.	Quit the programm\n\n"<<"Enter your choice"<<endl;
}



void fee(double memberRate, int months)
{
	cout<<"The total charges are $ "<<(memberRate * months)<<endl;
}


