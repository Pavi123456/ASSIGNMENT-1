#include<stdio.h>
#include<string.h>
int main(){
   char str[50];
   int i,len;
   scanf("%s",str);
   len=strlen(str);
   for(i=0;i<len;i++)
   {
       str[i]=str[i]+3;
        if((str[i]=='X') || (str[i]=='x'))
            str[i]='A';
        if((str[i]=='Y') || (str[i]=='y'))
            str[i]='B';
        if((str[i]=='Z') || (str[i]=='z'))
            str[i]='C';
   }
   printf("%s",str);
   
    
   
   return 0;
  
}
