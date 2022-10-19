/* LAB 3 TASK NO 3 

PROBLEM:
    There are three seating categories at a stadium. For a softball game, Class A seats cost 15, Class B seats cost 12, and Class C seats cost 9. Write a program that asks how many tickets for each class of seats were sold, then displays the amount of income generated from ticket sales. */
    
#include <iostream>
    
const int class_A=15;
const int class_B=12;
const int class_C=9;
    
void getData(int&,int&,int&);
int calculateIncome(const int&,const int&,const int&);
    
int main()
{
    int ticket_A=0;
    int ticket_B=0;
    int ticket_C=0;
    
    getData(ticket_A,ticket_B,ticket_C);
    std::cout<<"INCOME GENERATED FROM TICKET SALES : "<<calculateIncome(ticket_A,ticket_B,ticket_C);
    
        
        
        
        
        
}

void getData(int&a,int&b,int&c)
{
    std::cout<<"SEATS SOLD FOR CLASS A : ";
    std::cin>>a;
    std::cout<<"SEATS SOLD FOR CLASS B : ";
    std::cin>>b;
    std::cout<<"SEATS SOLD FOR CLASS C : ";
    std::cin>>c;
    
}
int calculateIncome(const int&a,const int&b,const int&c)
{
    int result=0;
    result=(a*class_A)+(b*class_B)+(c*class_C);
    
    return result;
}