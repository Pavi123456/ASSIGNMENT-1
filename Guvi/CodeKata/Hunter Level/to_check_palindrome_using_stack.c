#include<stdio.h>
#include<stdlib.h>
void main()
{
int l,i;
char str[100000];
scanf("%s",str);
l=strlen(str);

char arr[l],top=-1;
i=0;
while(str[i]!='\0')
{
    top++;
    arr[top]=str[i];

    i++;
}

for(i=0;i<l;i++)
{
    if(str[i]!=arr[top])
        break;
        top--;
}
if(i==l)
    printf("YES");
else
    printf("NO");
}
