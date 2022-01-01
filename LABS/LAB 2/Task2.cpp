#include <iostream>
using namespace std;

int main()
{
	char var1;
	var1 = 'a';
jump:
	if (var1 <= 'g') {
		cout << var1 + 0 << endl;
		var1 = var1 + 1;
		goto jump;
	}
	
	else {
		return 0;

	}


}