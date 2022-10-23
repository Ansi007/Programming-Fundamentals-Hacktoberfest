#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "enter size of array : ";
	cin >> n;
	int* a = new int[n];
	cout << "start entering data : " << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int* b = new int[n];
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = i+1; j < n; j++)
		{
			if (a[j] == a[i])
				flag = false;
		}
		if (flag)
		{
			b[k] = a[i];
			k++;
		}
	}
	int* c = new int[k];
	for (int i = 0; i < k; i++)
	{
		c[i] = b[i];
	}
	delete[] a;
	a = nullptr;
	delete[] b;
	b = nullptr;
	cout << "new array : {";
	for (int i = 0; i < k; i++)
		cout << c[i] << ",";
	cout << "\b}";
	delete[] c;
	c = nullptr;
	return 0;
}