#include<stdio.h>

int main()
{
	int n,i,ar[n],i1,i2,m1,m2,max=0,min=1000,temp;

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
		if(ar[i]>max)
		{ max=ar[i];
			i1=i;
		}
		if(ar[i]<min)
		{
			min=ar[i];
			m1=i;
		}

	}

	    max=ar[0],min=1000;
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

	temp=ar[i2];
	ar[i2]=ar[m2];
	ar[m2]=temp;
    printf("The updated array is:\n");
	for(i=0;i<n;i++)
	printf("%d ",ar[i]);


  return 0;
}
