#include <stdio.h> 
int main()
{
    int n,k,i,len;
    scanf("%d%d",&n,&k);
    if(n>k)
    {
        len=n;
    }
    else
        len=k;
    for(i=len;i>=2;i--)
    {
        if(n%i==0 &&  k%i==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
