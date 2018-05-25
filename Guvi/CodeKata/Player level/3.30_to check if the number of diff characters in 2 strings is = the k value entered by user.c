#include <stdio.h>

int main() {
    char a[20],b[20];
    int k,i,n1,n2,count1=0,count2=0;
    scanf("%s%s",a,b);
    scanf("%d",&k);
    n1=strlen(a);
    n2=strlen(b);
    if(n1==n2)
    {
        for(i=0;i<n1;i++)
        {
            if(a[i]==b[i])
            {
                count1++;
            }
            else
                count2++;
        }
        if(count2==k)
        {
            printf("yes");
        }
        else
            printf("no");
    }
    else
        printf("no");
	return 0;
}
