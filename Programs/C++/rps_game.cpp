#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(NULL));   //random number every single time
	int user = 0;
	int cpu = 0;
	cout<<"\t\t\t\t\t=================================="<<endl;
    cout<<"\t\t\t\t\tROCK PAPER SCISSORS LIZARD SPOCK!"<<endl;
    cout<<"\t\t\t\t\t=================================="<<endl;
	cout<<"Enter your option"<<endl;
	cout<<"1) Rock"<<endl;	
	cout<<"2) Paper"<<endl;
	cout<<"3) Scissors"<<endl;
	cin>>user;
	if(user==1)
	{
		cout<<"-You choose Rock-"<<endl;
	}
	else if(user==2)
	{
		cout<<"-You choose Paper-"<<endl;
	}
	else{
		cout<<"-You choose Scissors-"<<endl;
	}
	
	cpu = rand()%3+1;
	if(cpu==1)
	{
		cout<<"-CPU chooses Rock-"<<endl;
	}
	else if(cpu==2)
	{
		cout<<"-CPU chooses Paper-"<<endl;
	}
	else{
		cout<<"-CPU chooses Scissors-"<<endl;
	}

	//match
	if(user==cpu)
	{
		cout<<"Ladies and Gentlemen!"<<endl;
		cout<<"We have a tie!"<<endl;
	}
	
	//user chooses rock
	else if(user==1)
	{
		if(cpu==2)
		{
			cout<<"You Lose!"<<endl;
			cout<<"Paper covers Rock!"<<endl;
		}
		if(cpu==3)
		{
			cout<<"You Win!"<<endl;
			cout<<"Rock smashes Scissors!"<<endl;
		}
		
	}
	
	//user chooses paper
	else if(user==2)
	{
		if(cpu==1)
		{
			cout<<"You Win!"<<endl;
			cout<<"Paper covers Rock!"<<endl;
		}
		if(cpu==3)
		{
			cout<<"You Lose!"<<endl;
			cout<<"Scissors cuts Paper!"<<endl;
			
		}
		
	}
	
	//user chooses scissors
	else if(user==3)
	{
		if(cpu==1)
		{
			cout<<"You Lose!"<<endl;
			cout<<"Rock smashes Scissors!"<<endl;
		}
		if(cpu==2)
		{
			cout<<"You Win!"<<endl;
			cout<<"Scissors cuts Paper!"<<endl;
		}
	}
	
	
	return 0;
}