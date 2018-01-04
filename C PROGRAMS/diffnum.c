#include<stdio.h>
int main(void)
{
	int i,a[100],n,even,odd,count1=0,count2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even=a[i];
			count1=count1+1;
		}
		else
		{
			odd=a[i];
			count2=count2+1;
			
		}
	}
		if(count1==1)
		{
			printf("%d",even);
		}
			if(count2==1)
		{
			printf("%d",odd);
		}
	
	return 0;
}
