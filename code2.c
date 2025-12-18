// find max number in an array
#include <stdio.h>
int max(int yy[],int n)
{
   int max;
   max = yy[0];
   for(int i=1;i<n;i++)
   {
      if(yy[i]>max)
      {
         max = yy[i];
      }
   }
   return max;
}
int main()
{
   int yy[5] = {23,45,67,89,12};
   int result= max(yy,5);
   printf("The maximum number is: %d\n",result);
   return 0;
}