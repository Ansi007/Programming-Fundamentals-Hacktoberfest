//programm for distance per tank of gas
#include <iostream>
using namespace std;
int main()
{
double	gasper_tank=20;
	double milesin_town=23.5;
	double milesin_highway=28.9;
	double distancein_town,distancein_highway;
	distancein_town = gasper_tank *  milesin_town;
	distancein_highway = gasper_tank *  milesin_highway;
	cout<<"distance covered by the car in town per tank is : "<<distancein_town<<endl;
		cout<<"distance covered by the car on highway per tank is : "<<distancein_highway<<endl;
return 0;
}




