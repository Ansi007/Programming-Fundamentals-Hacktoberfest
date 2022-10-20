#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct drinkmachine
{
	string name = "";
	double cost = 0.0;
	int num_of_drinks = 0;
};
void show_menu()
{
	cout << "\n   ----------------------------\t" << endl;
	cout << "\tChoose your drink";
	cout << "\n   ----------------------------\t" << endl;
	cout << "\t1. Cola\n";
	cout << "\t2. Root Beer\n";
	cout << "\t3. Lemon Lime\n";
	cout << "\t4. Grape Soda\n";
	cout << "\t5. Cream Soda\n";
	cout << "\t6. Exit program\n";
	cout << "   ----------------------------\t" << endl;
	cout << "\tEnter [ 1 - 6 ]" << endl;
}
int validate_input(int& choice, const int& mini, const int& max)
{
	while (choice > max || choice < mini)
	{
		cout << "Error: invalid choice\n";
		cout<<left<<setw(20) << "Choose again: ";
		cin >> choice;
		cout << endl;
	}
	return choice;
}
double check_amount(double& amount, const double& mini, const double& max)
{
	cout << setprecision(2) << fixed << showpoint;
	while (amount > max || amount < mini)
	{
		if (amount > max)
		{
		    cout << "\n-------------------------------------------\t" << endl;
			cout << "You cannot enter amount greater than $1.00" << endl;
			cout << "--------------------------------------------\t" << endl;
			cout << "Enter amount again: ";
			cin >> amount;
			cout << endl;
		}
		else if (amount < mini)
		{
			cout << "\n------------------------------------------------\t" << endl;
			cout << "Opps! amount entered is less than the products cost" << endl;
			cout << "The price of this drink is $" << mini << endl;
			cout << "--------------------------------------------------\t" << endl;
			cout << "Enter amount again: ";
			cin >> amount;
			cout << endl;
		}
	}
	return amount;
}
bool check_soft_drinks(int& num_of_drinks)
{
	if(num_of_drinks == 0)
	{
		char ch;
		cout << "Oops! sold out" << endl;
		cout << "You may choose another drink\n";
		//cout << "thanks for using our services\n";
		cout << "Press any key to make selection again" << endl;
		cin.ignore();
		cin.get(ch);
		return true;
	}
	return false;
}
int main()
{
	drinkmachine drinks[5];
	drinks[0] = { "Cola",0.75,20 };
	drinks[1] = { "Root Beer",0.75,20};
	drinks[2] = { "Lemon Lime",0.75,20 };
	drinks[3] = { "Grape Soda",0.80,20 };
	drinks[4] = { "Cream Soda",0.80,20 };

	//declaration of variables
	int choice;
	double amount, total_amount = 0,remaining_amount=0;
	do
	{
		
		show_menu();
		cin >> choice;
		choice = validate_input(choice, 1, 6);
		if (choice != 6)
		{
			int flag = 0;
			flag = check_soft_drinks((drinks[choice - 1]).num_of_drinks);
			if (flag)
			{
				continue;
			}
			cout << "Note: Amount must be greater than 0$ and less than $1" << endl;
			cout << "Enter the amount to be inserted in Machine: ";
			cin >> amount;
			amount = check_amount(amount, (drinks[choice-1]).cost, 1);
			remaining_amount = amount - (drinks[choice - 1]).cost;
			cout<<left<<setw(15) << "Your remaining amount is: " <<"$"<< remaining_amount << endl;
			(drinks[choice - 1]).num_of_drinks -= 1;
			total_amount += (drinks[choice - 1]).cost;
			cout << "Press any key to continue........" << endl;
			cin.ignore();
			cin.get();
		}
		else
		{
			cout<<setprecision(2)<<fixed<<showpoint << endl;
			cout << "Total amount earned by machine is $" << total_amount<<endl;
			cout << "Thanks for using our services" << endl;
		}
		

	}while (choice != 6);
}