#include <stdio.h>

int main() {
	int n,k,i,j,temp;
	int a[100];
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
	    temp=a[0];
	    for(j=0;j<n-1;j++)
	    {
	        a[j]=a[j+1];
	    }
	    a[j]=temp;
	}
	for(i=0;i<n;i++)
	{
	    printf("%d\t",a[i]);
	}
	
	
	
	return 0;
}
