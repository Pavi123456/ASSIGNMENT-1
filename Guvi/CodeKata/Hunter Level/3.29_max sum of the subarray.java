
import java.io.*;
import java.util.*;
public class maxsubarraysum {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int n;
		int i,j,max,sum=0;
		n=sc.nextInt();
		int[] a=new int[n];
		for(i=0;i<n;i++)
		{
		    a[i]=sc.nextInt();
		}
		max=a[0];
		for(i=0;i<n;i++)
		{
		    sum=0;
		    sum=a[i];
		    for(j=i+1;j<n;j++)
		    {
		        sum=sum+a[j];
		        if(sum>max)
		            max=sum;
		    }
		    
		}
		System.out.println(max);
	}
}
