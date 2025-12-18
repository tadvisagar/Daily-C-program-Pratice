#include<stdio.h>
int main()
{
   int num;
   float ch;

   printf("1.cm to inches\n2. inch to cm\n");
   scanf("%d",&num);
   printf("Enter the number:");
   scanf("%f",&ch);
   switch (num)
   {
                 case 1:
                    printf("cm to inch %.2f\n",ch*2.54);
                    break;
                 case 2:
                    printf("inch to cm %.2f\n",ch*2.54);
                    break;  
                  default:
                    printf("Invalid choice\n");
   }
   
}