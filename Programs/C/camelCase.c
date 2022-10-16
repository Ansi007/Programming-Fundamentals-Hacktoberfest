#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000];
    int i, count = 0, len;
    printf("Enter any String : ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if ((str[i] > 64) && (str[i] < 91))
        {
            count++;
        }
    }
    printf("%d", count + 1);
    return 0;
}