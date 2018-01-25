#include <stdio.h>
#include<string.h>
int main() {
	char str[50],i,n,str1[50],k=0;
	scanf("%s",str);
	n=strlen(str);
	printf("%d",n);
	for(i=0;i<n;i++)
	{
	    if(i%2!=0)
	    {
	        str1[k]=str[i];
	        k++;
	    }
	 
	}
	printf("\n");
	for(i=strlen(str1)-1;i>=0;i--)
	{
	    if(i==(strlen(str1)-1))
	    {
	        str1[i]=str1[i]-32;
	        printf("%c",str1[i]);
	    }
	    else
	    {
	        printf("%c",str1[i]);
	    }
	}
	return 0;
}
