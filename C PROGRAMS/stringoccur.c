#include <stdio.h>
#include<string.h>
int main() {
	char str[20];
	gets(str);
	int count=1,n;
	n=strlen(str);
	int i,j;
	for(i=0;i<n;i++)
	{
	    count=1;
	    for(j=i+1;j<n;j++)
	    {
	         if(str[i]==str[j])
	         {
	             count++;
	         }
	    }
	    	 printf("%c-%d\t",str[i],count);
	 }
	 //for(i=0;i<n;i++){

	// }
	return 0;
}
