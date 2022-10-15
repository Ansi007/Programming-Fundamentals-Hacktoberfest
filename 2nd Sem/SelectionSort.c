#include<stdio.h>
#include<stdlib.h>

void display(int a[],int size)
{ int i;
  printf("The given array is\n");
  for(i=0;i<size;i++)
  printf("%d ",a[i]);
  
  printf("\n");
  
}

void SSort(int a[],int size)
{ 
int i,j,n=size-1,temp;
	for(i=0;i<size;i++)
	{  
		for(j=i;j<=n;j++)
		{
			if(a[i]>a[j])
			{   temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}
int main()
{ int size,i,key;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  int a[size];
  printf("Enter the elements of the array\n");
  for(i=0;i<size;i++)
  scanf("%d",&a[i]);
  display(a,size);
  SSort(a,size);
  display(a,size);
  return 0;
  	
}
