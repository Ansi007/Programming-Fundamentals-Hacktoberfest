#include <stdio.h>
#include <conio.h>

int main(){
	int n,i,sum;
    
	printf("Enter the size of array:\n");
	scanf( "%d", n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	
	for(i=0;i<n;i++)
	sum=sum+a[i];
	printf("The sum of the given array is %d\n",sum);
	getch();
return 0;	

}
