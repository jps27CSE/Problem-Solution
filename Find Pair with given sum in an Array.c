#include<stdio.h>

int findPair(int ar[],int n,int sum)
{

    int i,j;
  for(i=0;i<n-1;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(ar[i]+ar[j]==sum)
          {
              printf("Pair found at index %d and %d",i,j);
              return;
          }
      }
  }

  printf("Pair not found");

}

int main()
{
   int ar[]={8,7,2,5,3,1};

   int sum=10;

   int n=sizeof(ar)/sizeof(ar[0]);

   findPair(ar,n,sum);


}