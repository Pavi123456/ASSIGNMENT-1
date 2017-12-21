#include <stdio.h>

int main() {
    char ch[20];
    gets(ch);
    int count[10];
    int i,j,n,a=0;
    n=strlen(ch);
    for(i=0;i<n;i++)
    {
        count[i]=1;
    }
  
    for(i=0;i<n-1;i++)
    {
          if(ch[i]=='+')
    {
        continue;
    }
        for(j=i+1;j<n;j++)
        {
            if(ch[i]==ch[j])
            {
                count[i]=count[i]+1;
                ch[j]='+';
            }
        }
           //printf("%d",count[i]);
           a++;
    }
  
   // printf("%d",a);
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(count[i]>count[j])
        {
            printf("%c",ch[i]);
          break;
        }
    }
   
}
	return 0;
}
