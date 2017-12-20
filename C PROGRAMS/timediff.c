#include<stdio.h>
#include<time.h>
int main()
{
int hr[50],min[50],i,k,tmin[50],diff,totmin,tothr;
for(i=0;i<2;i++)
{
	scanf("%d",&hr[i]);
	scanf("%d",&min[i]);
}
for(k=0;k<2;k++)
{
tmin[k]=(hr[k]*60)+min[k];
}
for(i=0;i<1;i++)
{
	if(tmin[i]<tmin[i+1])
	{
		diff=tmin[i+1]-tmin[i];
	}
	else
		diff=tmin[i]-tmin[i+1];
}
	printf("%d\n",diff);
tothr=diff/60;
totmin=diff%60;
printf("%d:%d",tothr,totmin);
return 0;
}

