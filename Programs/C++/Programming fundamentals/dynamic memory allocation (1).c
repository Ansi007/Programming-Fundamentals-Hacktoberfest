#include <stdio.h>
void main()
{
	int x[]={1,34,56,78,101,45,67,23,2,43,76,89,90,23,41,77,46,55,44,22};
	int i,j,count=0, *y;
	for(i=0;i<20;i++)
	{
		if(x[i]<50)
		{
			count++;
		}
	}
	y= (int*)malloc (count * sizeof(int) );
	
	for ( j=0;i=0;i<=count;i++)
	
		if(x[i]<50)
		
		x[j++]=x[i];
	
	
		for ( j=0;i=0;i<20;i++)
	
	printf("%d\n",x[j++]);
	
	
	
	return 0;
}

