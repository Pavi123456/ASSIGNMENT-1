import java.util.Scanner;


public class Power {
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int n,p,i,x=1;
		n=sc.nextInt();
		p=sc.nextInt();
		if(n>1&&p==0)
		{
			System.out.println("1");
		}
		else if(n>1&&p==1)
		{
			System.out.println(n);
		}
		else
		{
			for(i=1;i<=p;i++)
			{
				x=n*x;
			}
			System.out.println(x);
		}
	}
}
