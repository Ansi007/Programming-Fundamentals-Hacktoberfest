//WAP tp print Nepal flag like pattern
#include<stdio.h>
int main()
{
    int i,j,r;
    printf("Enter no. of rows u want to print: ");
    scanf("%d",&r);
    for(i=1;i <= r;i++)
    {
        for(j=1;j <= i;j++)
        {
             printf(" * ");         /*printf(" %d ",j);      printf(" * ");       printf(" %d ",i);
                                        1                     *                     1 
                                        1  2                  **                    2 2
                                        1  2  3               ***                   3 3 3
                                        1  2  3  4            ****                  4 4 4 4              */

        }                                           
        printf("\n");                                
    }
    for(i=1;i <= r;i++)
    {
        for(j=1;j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");

    }
    for(i=1;i<=r+1;i++)
    {
        printf(" *");
        printf("\n");
    }
    return 0;
}
