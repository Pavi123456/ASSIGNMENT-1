#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[100][100],i,j,n,m;
   scanf("%d",&n);
   scanf("%d",&m);
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if(arr[i][j]==arr[i+1][j])
           {
               printf("%d",arr[i][j]);
           }
       }
   }

}
