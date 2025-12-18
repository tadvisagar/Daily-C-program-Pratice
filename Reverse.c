#include<stdio.h>
int main()
{
   int num,verse=0,em;
   printf("ente the numbe:");
   scanf("%d",&num);
   while(num!=0)
   {
     em=num%10;
     verse=verse*10+em;
      num=num/10;
   }
   printf("reversed number is:%d\n",verse);
}