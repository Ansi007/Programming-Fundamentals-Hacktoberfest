
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int x;

	ifstream input;
	input.open("person.txt");

/*
	input >> x;
	input >> y;
	input >> z;
*/	
	for(int i=1; i<=3; i++)
	{
		input >> x;
		cout << x << endl;
	}
	
	
	
	cout << "\n ANOTHER WAY USING LOOP \n";
	
	ifstream input1("person.txt");
	
	int sum=0;
	
	while(input1 >> x)
	{
		sum += x;
	}
	
	cout << "The sum of values from a file is : " << sum << endl;
	
	

	
	input.close();
	
	return 0;
}

