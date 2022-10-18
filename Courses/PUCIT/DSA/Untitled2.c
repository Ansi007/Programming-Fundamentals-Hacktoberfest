#include <stdio.h>

int main()
{
    int n, i;
    printf("enter lenth:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int s = 0, j, b = 1, k;
    for (i = 0; i < n; i++)
    {
        s = 0;
        for (j = i; j < n; j++)
        {
            s = s + a[j];
            if (s >= 100)
            {
                printf("%d) ", b);
                for (k = i; k <= j; k++)
                {
                    printf("%d ", a[k]);
                }
                b++;
                printf("\n");
            }
        }
    }
    printf("total sub array:%d", (b - 1));
    return 0;
}
