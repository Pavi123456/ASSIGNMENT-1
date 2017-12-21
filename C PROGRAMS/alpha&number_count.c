#include <stdio.h>
#include<string.h>

int main() {
    char str[20];
    scanf("%s",str);
    int i,n,counta=0,countd=0;
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
            counta++;
         if(str[i]>='0' && str[i]<='9')
            countd++;
    
    }
    printf("Alphabets:%d\n",counta);
    printf("numbers:%d",countd);
	return 0;
}
