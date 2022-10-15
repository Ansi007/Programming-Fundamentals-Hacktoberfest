#include<stdio.h>

int main()
{ int i,j,k,n,sum=0,count=1;
     
     printf("Enter the size of array:\n");
     scanf("%d",&n);
     int ar[n];
     for(i=0;i<n;i++)
     scanf("%d",&ar[i]);
     
     for(i=0;i<n;i++)
     printf("%d ",ar[i]);
     
     for(i=0;i<n;i++)
     {   sum=0;
     	for(j=i;j<n;j++)
     	{ 
     	  sum=sum+ar[j];
		  if(sum>=100)
		  {
		   printf("\n%d\n",count);
		   for(k=i;k<=j;k++){
		   printf("%d ",ar[k]);}
           count++; 		   
		  }	
		}
	 }
      printf("\nTotal Subarray are: %d",count-1);
    return 0;
}
