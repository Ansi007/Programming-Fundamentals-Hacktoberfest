////sum of 10 numbers taken from user
//#include <iostream>
//using namespace std;
//int main ()
//{
//	//variable declaration
//
//	int sum;
//	 int number;
//	   //vaiable initiation
//	   sum=0;
//	   cout<<"input number"<<endl;
//	
//	   for(int i=1; i<=10; i++)
//	   {
//	   	
//	   	cin>>number;
//	   	sum = sum + number;
//	   	cout<<"sum : " <<endl;
//	  cout<<"sum of 10 number taken by user"<<sum<<endl;
//	   }
//	   	
//	   	
//	    	
//	   	
//	   return 0;
//
// }
//	
//





//OR
   
   
   
   //program of taking ten numbers from user and display their sum by while loop
   
   #include <iostream>
   using namespace std;
   int main()
   {
   	int i =1,num,sum=0;
   	cout<<"Input number from user"<<endl;
   	
   	while(i<=10)
   	{
   		cin>>num;
   		sum=sum +num;
   		cout<<"Display sum"<<sum<<endl;
   		i++;
   		
	   }
   	return 0;
   }
