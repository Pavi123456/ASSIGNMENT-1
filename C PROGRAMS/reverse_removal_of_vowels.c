#include <stdio.h>
#include<string.h>
int main() {
    char ch[20];
    gets(ch);
    int n,i;
    n=strlen(ch);
    for(i=n-1;i>=0;i--)
    {
       
    printf("%c",ch[i]);
    }
    printf("\n");
   for(i=n-1;i>=0;i--)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            continue;
          
        }
        else
              printf("%c",ch[i]);
    }
	return 0;
}
