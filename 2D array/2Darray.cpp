#include<iostream>
using namespace std;

int main(){
//	int arr[3][2] = {{10,20},
//					{20,40},
//					{60,30}};
//	for(int i = 0; i < 3; i++){
//		for(int j = 0; j < 2; j++){
//			cout<<arr[i][j]<<" ";
//		}
//	}

	int m = 3, n =2;
	int arr[m][n];
	for(int i = 0; i < m; i ++){
		for(int j =0; j < n; j++) arr[i][j]= i+j;
	}
	for(int i =0; i < m; i++){
		for(int j = 0; j < n; j++) cout<<arr[i][j]<<" ";
	}
return 0;
}

