#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int len,len1,i,j,flag,u,v;
    scanf("%s",a);
    scanf("%s",b);
    len=strlen(a);
    len1=strlen(b);
    if(len==len1)
    {
        for(i=0;i<len;i++)
        {
            for(j=i+1;j<len1;j++)
            {
                u=a[i]-a[j];
                v=b[i]-b[j];
                if(u==v)
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    else
        printf("not isomorphic\n");
    if(flag==0)
    {
        printf("yes\n");
    }
    else
        printf("not isomorphic\n");
    return 0;
}
    
