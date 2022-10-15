#include<stdio.h>

int main(){
	int r, c;
	printf("Enter the number of rows\n");
	scanf("%d",&r);
	printf("Enter the number of columns\n");
	scanf("%d",&c);
	int arr[r][c];
	printf("Enter the elements of array\n");
	int i, j;
	int sum = 0;
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			sum += arr[i][j];
		}
	}
	printf("The sum of the array is %d", sum);
	return 0;
}

