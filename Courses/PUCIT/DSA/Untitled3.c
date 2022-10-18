#include <stdio.h>


	int maxsubarray(int ar[],int n){
		int sum=ar[0],i;
		int current=0;
		
		for( i=0;i<n;i++){
			current+=ar[i];
			if(current>sum)
			sum=current;
			if(current<=0)
			current = 0;
			
		}
		return sum;
	}
	
	int main(){
		
		int ar[6]={1,2,3,-1,-3,-4};
		printf("%d",maxsubarray(ar,6));
		
		return 0;
	}
