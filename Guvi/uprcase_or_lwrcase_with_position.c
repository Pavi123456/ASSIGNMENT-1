#include <stdio.h> 
#include<string.h>
 
 int main() { 
 char str[20];
   int i,n,t,p,v,u;
   scanf("%s",str);
   scanf("%d",&t);
   scanf("%d",&p);
   n=strlen(str);
  
     if(t==1)
     {
       for(i=p-1;i<n;i=i+p)
       {
         u=str[i];
       if(u<97)
       {
         v=u+32;
         str[i]=v;
     }
        

       }
        printf("%s",str);
     }
     if(t==2)
     {
        for(i=p-1;i<n;i=i+p)
       {
         u=str[i];
       if(u>91)
       {
         v=u-32;
         str[i]=v;
     }
        
        }
         printf("%s",str);
     }
   
   
     
     
   
  
     
   
   
 return 0; 
}
