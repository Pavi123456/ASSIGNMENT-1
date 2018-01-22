#include<stdio.h>
int main()
{
    int a[70],count[70],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count[i]=1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count[i]=count[i]+1;
                a[j]='*';
                printf("%d ",a[i]);
                break;
                
            }
        }
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        if(count[i]==1)
            c=c+1;
        
    }
    if(c==n)
    {
        printf("unique");
    }
    return 0;
}
