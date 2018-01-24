import java.util.*;
import java.lang.*;
import java.io.*;
class nearest_neighbour{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int a[]=new int[n];
        int i;
        for(i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        for(i=0;i<n;i++)
        {
            int p=a[i]-k;
            if(p<=k && p!=0)
            {
                System.out.println(a[i]+" ");
            }
        }
    }
}
