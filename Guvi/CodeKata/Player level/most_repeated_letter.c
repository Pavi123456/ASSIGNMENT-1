#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[50],c;
    int count=0,max=1,i,j,len;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                count++;
                if(count>max)
                {
                    max=count;
                    c=str[i];
                }
            }
        }
    }
    printf("%c",c);
    return 0;
}
