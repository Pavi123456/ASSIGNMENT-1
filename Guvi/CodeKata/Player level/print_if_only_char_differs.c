#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int len,len1,i,j,count=0;
    scanf("%s",a);
    scanf("%s",b);
    len=strlen(a);
    len1=strlen(b);
    if(len==len1)
    {
        for(i=0;i<len;i++)
        {
            
                if(a[i]==b[i])
                {
                    count=0;
                }
                else
                    count=count+1;
            
        }
        if(count==1)
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    else
        printf("no\n");
return 0;
}
