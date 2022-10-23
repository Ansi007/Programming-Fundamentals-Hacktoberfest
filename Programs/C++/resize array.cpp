#include<iostream>
using namespace std;
int* resizearray(int arr[], int size) {

	int newarr[50];
	int newsize = size * 2;
	for (int i = 0; i < size; i++) 
		newarr[i] = arr[i];
		int j = 0;
		for (int i = size; i < newsize; i++) {
			newarr[i] = arr[j] * 2;
			++j;
		}
		cout << "resized array" << endl;
		for (int i = 0; i < newsize; i++) 
			cout << newarr[i];
		
		return newarr;
	
}

int main() {
	int arr[10];
	int size;
	cout << "Enter the size of the array" << endl;
	cin >> size;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	resizearray(arr, size);
}