#include<stdio.h>
#include<string.h>
int main()
{
    
    int n,a[50];
    scanf("%d",&n);
    int i,item,flag=0;
    scanf("%d",&item);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++){
       if(item==a[i]){
           flag=1;
       }
   }
   if(flag==1){
       printf("yes");
   }
   else
    printf("no");
    
    
    return 0;
    
}
