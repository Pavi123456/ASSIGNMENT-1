#include <stdio.h>
#include<string.h>
int main() {
	int n,i;
	char str[50];
	gets(str);
	n=strlen(str);
    for(i=0;i<n;i++)
    {
       if(str[i]!=' ')
       {
          printf("%c",str[i]);
       }
       
    }
   
    
	return 0;
}
