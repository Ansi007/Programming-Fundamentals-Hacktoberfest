#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() 
{
	char a[9] = "Pakistan";
	cout << a;
	a[8] = '\0';
	
	int i = 2022;
	float f = 2.22;

	ofstream oof("bin1.txt");
	oof.write((const char *)&a,strlen(a));
	oof.write((const char *)&i,sizeof(i));
	oof.write((const char *)&f,sizeof(f));
	oof.close();
	
   return 0;
}