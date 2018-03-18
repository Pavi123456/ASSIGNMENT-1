#include <stdio.h>
 int main() {
         int n, a[100], i, j, temp,count=0,flag=0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
                scanf("%d", &a[i]);

        for (i = 0; i < n-1; i++) {
                for (j = i + 1; j < n; j++) {
                        if (a[i] > a[j]) {
                                temp = a[i];
                                a[i] = a[j];
                                a[j] = temp;
                        }
                }
    }
        /*for (i = n-1; i > 0; i--)
                printf("%d", a[i]);*/
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    }
                    
            }
            if(count==0)
            {
                flag=1;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(flag==1)
            {
                printf("%d",a[i]);
            }
        }

        return 0;
  }
