#include<stdio.h>
int main(void)
{
	int n,a[100],i,j,c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
	
			printf("(%d,%d)",a[i],a[j]);
	

}
