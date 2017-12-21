#include<stdio.h>
#include<string.h>
int main(void)
{
char roman[10];
int a[10],i,j,sum=0;
gets(roman);
int n;
n=strlen(roman);
for(i=0;i<n;i++)
{
switch(roman[i])
{
case 'I':a[i]=1;
	 break;
case 'V':a[i]=5;
	 break;
case 'X':a[i]=10;
	 break;
case 'L':a[i]=50;
    break;
case 'C':a[i]=100;
    break;
case 'D':a[i]=500;
    break;
case 'M':a[i]=1000;
    break;
}
}
sum=a[n-1];
for(j=n-1;j>0;j--)
{
if(a[j]>a[j-1])
{
sum-=a[j-1];
}
else
{
sum+=a[j-1];
}
}
printf("The decimal value of the given roman no is:%d",sum);
return 0;
}
