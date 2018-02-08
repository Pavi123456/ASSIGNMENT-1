#include<stdio.h>
int main()
{
    int n,i,j=0,a[20],b[20],min,count=0;
    scanf("%d",&n);
    min=a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
   /* for(i=0;i<n;i++)
    {*/
        b[j]=a[i];
        j++;
        count++;
        for(j=0;j<count;j++)
         {
            if(b[j]<min)
                min=b[j];
            printf("%d ",min);
            break;
         }
    }
    return 0;
}
    
        
   output:
   i/p:
   4
3 2 5 1

o/p:
3 2 2 1 
