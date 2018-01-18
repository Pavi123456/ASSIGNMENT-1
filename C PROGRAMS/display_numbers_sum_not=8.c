#include <stdio.h>

int main() {
	int a[99998],i,rem,sum,n;
	for(i=0;i<9999;i++)
	{
	    a[i]=i;
	}
/*	for(i=0;i<9999;i++)
	{
	    printf("%d\t",a[i]);
	}*/
	for(i=0;i<9999;i++)
	{
	    n=a[i];
	    sum=0;
	    while(n>0)
	    {
	        rem=n%10;
	        sum=sum+rem;
	        n/=10;
	    }
	    if(sum!=8)
	    {
	        printf("%d\n",a[i]);
	    }
	}
	
	return 0;
}
