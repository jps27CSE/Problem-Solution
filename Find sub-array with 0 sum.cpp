#include<iostream>
using namespace std;

void subArray(int array[],int n)
{
    int i;
    int j;
    
    for(i=0;i<n;i++)
    {
        int sum=0;

        for(j=i;j<n;j++)
        {
            sum+=array[j];

            if(sum==0)
            {
               cout << "Subarray [" << i << ".." << j << "]\n";
            }

        }
    }

}


int main()
{
    int array[]={3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int n=sizeof(array)/sizeof(array[0]);

    subArray(array,n);

}