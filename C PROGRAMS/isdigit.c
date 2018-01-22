#include <stdio.h>
#include<math.h>
#include<string.h>
int main() {
    char str[20],c;
    int i,count=0,count1=0;
    int n;
    n=strlen(str);
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
        c=str[i];
        if(isdigit(c))
        {
            count=count+1;
        }
        if(isalpha(c))
        {
            count1=count1+1;
        }
        
    }
    if(count==n)
    {
        printf("true");
    }
    else
        printf("false");
	return 0;
}
