#include<iostream>
using namespace std;

void search(int arr[4][4], int x){
	int i = 0, j = 3;
	while(i<4 && j>=0){
		if(arr[i][j]==x){
			cout<<i<<", "<<j;
			return;
		}
		else if(arr[i][j]>x) j--;
		else i++;
	}
	cout<<"-1";
}

int main(){
	int arr[4][4] = {{1, 2, 3, 4},
				    {5, 6, 7, 8},
				    {9, 10, 11, 12},
				    {13, 14, 15, 16}};
	search(arr,11);
return 0;
}

