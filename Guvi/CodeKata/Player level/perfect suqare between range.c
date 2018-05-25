#include <stdio.h>

int main() {
    int low,high,n,i,count=0;
    scanf("%d%d",&low,&high);
    for(i=low;i<high;i++)
    {
        n=i*i;
        if(n<=high)
        {
            count++;
        }
    }
    printf("%d",count);
	return 0;
}
