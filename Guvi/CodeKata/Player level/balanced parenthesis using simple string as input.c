#include<stdio.h>
#include<string.h>
int main()
{
    
    char str[50];
    int n,i,count=0;
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++){
        if(str[i]=='('){
            count++;
        }
        if(str[i]==')'){
            count--;
        }
    }
    if(count==0){
        printf("yes");
    }
    else
        printf("no");
    
    return 0;
    
}
