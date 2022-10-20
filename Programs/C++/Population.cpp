#include <iostream>
using namespace std;
float pop(float, float, float);
int main()
{
	float st, br, dr, ny, p;
	do
	{
		cout << "Enter starting size of population:";
		cin >> st;
		cout << "Enter annual birth rate:";
		cin >> br;
		cout << "Enter annual death rate:";
		cin >> dr;
		cout << "Enter number of years to display:";
		cin >> ny;
	} while (!((st > 2) && (br > 0) && (dr > 0) && (ny > 1)));
	p = pop(st, br, dr) * ny;
	cout << "Population size for " << ny << " years:" << p << endl;
}
float pop(float x, float y, float z)
{
	y = y / 100; //conversion of percentage into decimal
	z = z / 100; //conversion of percentage into decimal
	return x + (y * x) - (z * x);
}
