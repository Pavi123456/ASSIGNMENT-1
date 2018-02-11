#include <stdio.h>
#include<string.h>
 
int main(){
    char str[100], temp[100];
    int i=0, j;
    //printf("Enter a String \n");
    gets(str);
    while(str[i] == ' '){
        i++;
    }
 
    for(j= 0;str[i] != '\0'; i++){
      if(str[i]==' ' && str[i-1]==' ')
      {
          continue;
      }
      temp[j] = str[i];
      j++;
    }
    temp[j] = '\0';
   printf("%s", temp);
 
    
    return 0;
}
