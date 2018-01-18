#include <stdio.h>

int main() {
	long int temp,sum=0,rem,i;
	for(i=0;i<9999;i++)
	{
	    temp=i;
	    while(temp!=0)
	    {
	        rem=temp%10;
	        sum=sum+rem;
	        temp/=10;
	    }
	    if(sum!=8)
	    {
	        printf("%ld\n",i);
	    }
	    sum=0;
	}
	    return 0;
}
