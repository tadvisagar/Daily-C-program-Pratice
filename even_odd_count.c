/* even count odd count number and print even odd count*/
#include <stdio.h>
int main()
{
   int arr[5];
   int i, evencount = 0, oddcount = 0;

   printf("enter the number:");
   for (i = 0; i < 5; i++)
   {
      scanf("%d", &arr[i]);
   }
   for (i = 0; i < 5; i++)
   {
      if (arr[i] % 2 == 0)
      {
         printf("%d is even:\n", arr[i]);
         evencount++;
      }
      else
      {
         printf("%d is odd:\n", arr[i]);
         oddcount++;
      }
   }
   printf("even:%d\n", evencount);
   printf("odd:%d\n", oddcount);
}