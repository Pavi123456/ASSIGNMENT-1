#include <stdio.h>
#include<string.h>
int main() {
	char str[20],str1[20];
	int i,j=0,n;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
	    if((str[i]=='a')||(str[i]=='A')||(str[i]=='e')||(str[i]=='E')||(str[i]=='i')||(str[i]=='I')||(str[i]=='o')||(str[i]=='O')||(str[i]=='u')||(str[i]=='U'))
	    {
	          str[i]=" ";
	       
	    }
	    else{
	        str1[j]=str[i];
	        j++;
	    }
	       
	}
//	str1[j]='\0';
//	printf("%s",str1);
	int n1=strlen(str1);
	for(i=n1-1;i>=0;i--)
	{
	    printf("%c",str1[i]);
	}
	
	return 0;
}
