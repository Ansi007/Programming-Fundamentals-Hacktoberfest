#include<iostream>
using namespace std;
class Employee{

	public:
			int id;
	int static count;
		void setdata(void){
			cout<<"enter the id"<<endl;
			cin>>id;
			count++;
		}
		void getdata(){
			cout<<"the id of the employee number "<<count<<" "<<"is "<<id;
		}
};
int Employee::count=2;
int main(){
	Employee harry,parry,larry,sarry;
	harry.setdata();
	harry.getdata();
	cout<<endl;
	
    parry.setdata();                                  //STATIC VARIABLE
	parry.getdata();                     // har object ka aik apna count hota agar ham aik count bana ke chahte hain ka wo sare objects ka liye 
	cout<<endl;
	                                      // use ho to us ka liye aik static type ka variable banana parta ha .. us ka bad wo sare objects ka liye 
    larry.setdata();                     // use ho ga
	larry.getdata();
	cout<<endl;
	
	sarry.setdata();
	sarry.getdata();
	
}

