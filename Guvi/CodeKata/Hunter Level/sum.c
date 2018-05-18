#include<stdio.h>
int main()
{
int n,a[100],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

int sum=0;
for(i=0;i<n;i++)
{
    sum=sum+a[i];
 
}
printf("%d",sum);
return 0;
}
