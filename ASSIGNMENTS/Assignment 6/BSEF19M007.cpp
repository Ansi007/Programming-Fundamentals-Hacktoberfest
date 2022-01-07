#include <iostream> 

using namespace std;

void calculateCharges(double total, double total_hours, double total_minutes, double total_seconds)
{
	total = int(total_hours + total_minutes + total_seconds);
	int charges = 0;
	charges = 25 * total;
	cout << endl;
	cout << " => Total time of usages is " << total << " hours.\n";
	cout << " => Total charges are " << charges << " Rs. \n";
}

void Convert(double total_hours, double total_minutes, double total_seconds)
{
	total_minutes = total_minutes / 60;
	total_seconds = total_seconds / 3600;
	double total_time = 0;
	calculateCharges(total_time, total_hours, total_minutes, total_seconds);
}

void Input()
{
	int hours = 0, minutes = 0, seconds = 0;
	double total_hours = 0, total_minutes = 0, total_seconds = 0;
	
	cout << "_________________________________CHARGES CALCULATOR________________________________\n\n\n";
	cout << " => Enter the time the internet was used for in each sitting (in hours, minutes and seconds).\n";
	cout << " => Enter -1 to end.\n";
	cout << " => Enter time of Sitting:\n";
	while (hours != -1) {

		cout << " => Hours   : ";
		cin >> hours;
		if (hours == -1) break;
		total_hours = total_hours + hours;
		cout << " => Minutes : ";
		cin >> minutes;
		if (minutes == -1) break;
		total_minutes = total_minutes + minutes;
		cout << " => Seconds : ";
		cin >> seconds;
		if (seconds == -1) break;
		total_seconds = total_seconds + seconds;

		cout << endl;
		cout << endl;
		cout << " => Enter time of Next Sitting:\n";
	}
	
	
	Convert(total_hours, total_minutes, total_seconds);
}

int main()
{
	Input();
	return 0;
}