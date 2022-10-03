#include <bits/stdc++.h>
using namespace std;

void q1(){
	int i = 1;
	int c=1;
	
	for (int a=1;a<=6;a++)
	
	{
		for (int b =1;b<=6;b++)
		{
			cout<<i<<"\t";
			i=i+c;
		}
		i=i-c;
		c++;
		cout<<endl;
		}
}

void q2(){
	int i = 30;
	
	for (int a=1;a<=10;a++)
	
	{
		for (int b =1;b<=8;b++)
		{
			cout<<i<<"\t";
			i=i+10;
		}
		i=i-70;
		cout<<endl;
		}
}


void q3(){
	
	int i = 0;
	int c=1;
	int d=1;
	int e=0;
	
	for (int a=1;a<=10;a++)
	
	{
		for (int b =1;b<=10;b++)
		{
            i=i+c;
			cout<<i<<"\t";
	
		}
		i=i-8*(d)-e;
		c++;
		e++;
		d++;
		cout<<endl;
        i=i-c;
       
		}
}

void q4(){
		int d=1;
	int a=0;
	int b = 1;
	int n=0;
    int s =0;
	cin>>n;

	

		for (int m =1;m<=n;m++){
		
		
			d=a+b;
			b=a;
			a=d;
  cout<<d<<"\t";
        s=s+d;
		}
		cout<<endl;
   cout<<"The sum of n numbers are : "<<s; 

}



int main()
{
    cout<<"PATTERN 1\n\n\n";
q1();
cout<<"\n\n";
    cout<<"PATTERN 2\n\n\n";
q2();
cout<<"\n\n";
    cout<<"PATTERN 3 \n\n\n";
q3();
cout<<"\n\n";
    cout<<"FIBBO SERIES\n\n\n";
q4();

	return 0;

}
