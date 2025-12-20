#include <stdio.h>
int main()
{
   int arr[5];
   int i;

   for (i = 0; i < 5; i++)
   {
      printf("enter the number:");
      scanf("%d", &arr[i]);
      if (arr[i] % 2 == 0)
      {
         printf("even\n");
      }
      else
      {
         printf("odd\n");
      }
   }
}
// This program takes 5 integers as input from the user and checks each number to determine if it is even or odd, printing the result accordingly.
