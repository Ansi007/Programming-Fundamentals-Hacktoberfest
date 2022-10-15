#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int i;
int secSmall(int* arr,int n)
{
    int mx1 = INT_MAX;
    int mx2= INT_MAX;
    int index=0;
    for( i=0;i<n;i++)
    {
        if(arr[i] < mx1) {
            mx1=arr[i];
        }
    }
    for ( i = 0; i < n; i++)
    {
        if(arr[i] < mx2 && arr[i] > mx1)
        {
            mx2 = arr[i];
            index=i;
        }
    }
    return index;
    
}


int secLarge(int* arr,int n)
{
    int mx1 = INT_MIN;
    int mx2= INT_MIN;
    int index=0;
    for( i=0;i<n;i++)
    {
        if(arr[i] > mx1) {
            mx1=arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if(arr[i] > mx2 && arr[i] < mx1)
        {
            mx2 = arr[i];
            index=i;
        }
    }
    return index;
    
}

void Interchange(int* arr,int n,int x,int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}


void Print(int* arr ,int n)
{
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int indexOf2small = secSmall(arr,n);
    int indexOf2lar =  secLarge(arr,n);

    Interchange(arr,n,indexOf2lar,indexOf2small);

    Print(arr,n);

    return 0;
}
