#include <stdio.h>

void sort(int *arr, int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int arr2[max + 1];
    for (int i = 0; i < max + 1; i++)
        arr2[i] = 0;

    for (int i = 0; i < size; i++)
    {
        arr2[arr[i]]++;
    }
    int count = 0;
    for (int i = 0; i < max + 1; i++)
    {
        while (arr2[i] > 0)
        {
            arr[count] = i;
            arr2[i]--;
            count++;
        }
    }
}

int main()
{

    int arr[] = {5, 4, 3, 2, 1};

    sort(arr, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", *(arr + i));

    return 0;
}