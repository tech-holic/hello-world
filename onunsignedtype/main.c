#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[300];
   int i;
   for(i=0; i<300; i++)
   {
      a[i] = -1-i;
      printf("%c\t",a[i]);
      if(i%10==9)
        printf("\n");
   }
   printf("%d\n",strlen(a));

   i = -20;
   unsigned int j = 10;
   printf("%dHello world!\n",i+j);

   for (j=9;j>0;j--)//这里就要注意无符号数是不可能小于0的
{
   printf("%u\n",j);
}

   return 0;
}
