#include <stdio.h>

int main() {
		int a[50],i,j,n,temp,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++){
	        if(a[i]>a[j])
	        {
	            temp=a[i];
	            a[i]=a[j];
	            a[j]=temp;
	        }
	    }
	}
/*	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}*/
	flag=0;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<i;j++)
	    {
	        if(a[i]==a[j])
	        {
	            break;
	        }
	        
	    }
	    if(i==j)
	    {
	        printf("%d ",a[i]);
	        flag=0;
	       
	    }
	    
	    
	}
	printf("\n");
	if(flag==0)
	{
	    printf("unique\n");
	}
	return 0;
}
