
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	
	int x = 10;
	int y= 20;
	int z = 30;
	ofstream file;
	file.open("person.txt");
	
	file << x << endl;
	file << y << endl;
	file << z << endl;
	//file << "Another line " << endl;
	//file << "Ending.....  " << endl;
	
	file.close();
	
	return 0;
}

