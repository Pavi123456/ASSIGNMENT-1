#include <stdio.h>

int main() {
	int num,rem,sum=0,temp;
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
	    rem=num%10;
	  sum=sum+rem*rem;
	    num/=10;
	}

	printf("%d",sum);
	
	return 0;
}
