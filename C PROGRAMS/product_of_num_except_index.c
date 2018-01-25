#include <stdio.h>

int main() {
	int a[50],i,n,prod=1,b[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    prod=prod*a[i];
	    
	}
	for(i=0;i<n;i++)
{
    b[i]=prod/a[i];
    printf("%d ",b[i]);
}

	return 0;
}
