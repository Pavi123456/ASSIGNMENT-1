import java.util.*;
public class delete{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int x=sc.nextInt();
        int flag=0,loc=0;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                loc=i;
                flag=1;
                break;
            }
            else
                flag=0;
            
        }
        if(flag==1){
            for(int i=loc+1;i<n;i++){
                a[i-1]=a[i];
            }
        }
        for(int i=0;i<n-1;i++){
            System.out.println(a[i]+" ");
        }
        
        
        
    }
}
