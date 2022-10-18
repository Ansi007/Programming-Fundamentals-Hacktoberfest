#include <stdio.h>
#include <string.h>
int main()
{ char ar[20];
  int i,n,check=0;
  printf("Enter the number:\n");
  scanf("%s",&ar);
  n=strlen(ar);
 // printf("%d",n);
  
  for(i=0;i<(n/2);i++)
   { if(ar[i]!=ar[(n-1)-i])
        check++;
   }
   if(check==0)
   {printf("%s Pallindrom\n",ar);
   }
   else
   { printf("%s NOT Pallindrom\n",ar);
   }
  return 0;
}
