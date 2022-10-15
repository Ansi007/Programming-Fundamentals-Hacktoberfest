#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,ar[n],i1,i2,m1,m2,max=INT_MIN,min=INT_MAX;
	
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	
     printf("Entered elements of array are:\n");
	for(i=0;i<n;i++)
	printf("%d ",ar[i]);
	
	for(i=0;i<n;i++)
	{
		if(ar[i]>=max)
		{ max=ar[i];
			i1=i;
		}
		if(ar[i]<min)
		{ 
			min=ar[i];
			m1=i;
		}
		
	}

	    max=INT_MIN,min=INT_MAX;
     	for(i=0;i<n;i++)
	{   
	     if(i!=i1)
	  {
		if(ar[i]>max)
		{	
			max=ar[i];
			i2=i;
		}
	  }
	      if(i!=m1)
	  {
		if(ar[i]<min)
		{
			min=ar[i];
			m2=i;
		}
	  }
	}

	ar[i2]=min;
	ar[m2]=max;
    printf("\nThe updated array is:\n");
	for(i=0;i<n;i++)
	printf("%d ",ar[i]);
	
	
  return 0;	
}
