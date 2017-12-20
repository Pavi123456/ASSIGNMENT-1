#include<stdio.h>
#include<string.h>
int main()
{
char str[30],temp;
gets(str);
int n=strlen(str);
int i;
for(i=0;i<n;i+=2)
{
	temp=str[i];
	str[i]=str[i+1];
	str[i+1]=temp;
}
if((n%2)!=0)
{
printf("%s%c",str,temp);
}
else
printf("%s",str);
return 0;
}


