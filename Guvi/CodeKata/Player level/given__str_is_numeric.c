#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int n,i,flag=0;
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]>='0' && str[i]<='9' )
        {
            flag=1;
        }
        else
            break;
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
        printf("no");
        return 0;
}
