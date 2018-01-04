#include<stdio.h>
int main(void)
{
	int n,a[20],i,j,t,c,min=0,b[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int p=0;
	min=a[0];
	for(i=0;i<(n-1);i++)
	
	{
	
		for(j=(i+1);j<n;j++)
	{

			b[p]=abs(a[i]-a[j]);

			if(b[p]<min)
			{
				min=b[p];
				t=a[i];
				c=a[j];
			
			}
			p++;
		}
			
		}
		printf("%d,%d",t,c);
	

}
