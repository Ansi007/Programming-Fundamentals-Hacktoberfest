#include <bits/stdc++.h>
using namespace std;
class Calculations{
	float sub_1, sub_2, sub_3, sub_4, sub_5;
	    char grade;
	    float total , average, percentage;
	public:
		
	    Calculations(){	
	    float total = average = percentage = 0.00;
		}
 		void inp(){
 	
		 	cout << "Enter the marks of five subjects: \n";
		    cin >> sub_1 >> sub_2 >> sub_3 >> sub_4 >> sub_5;
 }
	  int Cal_All(){
    	total = sub_1 + sub_2 + sub_3 + sub_4 + sub_5;
    	average = total / 5.0;
    	percentage = (total / 500.0) * 100;  
	    if (average >= 90)
	        grade = 'A';
	    else if (average >= 80 && average < 90)
	        grade = 'B';
	    else if (average >= 70 && average < 80)
	        grade = 'C';
	    else if (average >= 60 && average < 70)
	        grade = 'D';
	    else
	        grade = 'E';}
	        void show(){
	        	 cout << "\n Total marks   = " << total <<'\n';
			    cout << " Average marks = " << average << "\n";
			    cout << " Percentage    = " << percentage << "%\n";
			    cout << " Grade         = '" << grade << "'\n";
						}
	        
};

int main() {
    Calculations a;
    a.inp();
    a.Cal_All();
    a.show();
    return 0;
}