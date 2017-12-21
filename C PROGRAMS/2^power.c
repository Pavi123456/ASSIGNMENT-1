#include <stdio.h>

int main() {
	int n,x=1,p=2;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    x=p*x;
	}
	if(n==x)
	{
	   printf("yes"); 
	}
	else
	    printf("no");
	
	return 0;
}
