/*
Problem statement:
You are playing a very popular computer game. The next level consists of n consecutive locations, numbered from 1 to n, each of them containing either land or water.
It is known that the first and last locations contain land, and for completing the level you have to move from the first location to the last. 
Also, if you become inside a location with water, you will die, so you can only move between locations with land.
You can jump between adjacent locations for free, as well as no more than once jump from any location with land i to any location with land i+x, spending x coins (x≥0).
Your task is to spend the minimum possible number of coins to move from the first location to the last one.
Note that this is always possible since both the first and last locations are the land locations.
*/


#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		int x=0, y=0;
		for (int i = 0; i < n; i++) {
			if (v[i] == 0)
			{
				x = i - 1;
				break;
			}	
		}
		for (int i = n-1; i >= 0; i--) {
			if (v[i] == 0)
			{
				y = i + 1;
				break;
			}
		}
		cout << y - x << endl;
	}

	return 0;
}