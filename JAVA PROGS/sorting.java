import java.util.Arrays;
import java.util.Scanner;
public class sorting {
	public static void main(String[] args)
	{
		Scanner sc =new Scanner(System.in);
		int i,j,temp;
		int n=sc.nextInt();
		int a[]=new int[n];
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		
		Arrays.sort(a);
		for(i=0;i<n;i++)
		{
			System.out.println(a[i]);
		}
		
	}

}
