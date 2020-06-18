#include<stdio.h>

int fact(int n)
{
   int i,f=1;

   for(i=1;i<=n;i++)
   {
       f=f*i;
   }
   return f;
  
}

int main()
{
    int num;

    printf("Enter Factorial Number: ");
    scanf("%d",&num);

    printf("%d",fact(num));



}