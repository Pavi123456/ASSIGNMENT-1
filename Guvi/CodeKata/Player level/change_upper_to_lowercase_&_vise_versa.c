#include <stdio.h>
#include<string.h>
int main() {
	int n,i;
	char str[50];
	scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",str[i]);
    }
	return 0;
}
