import java.util.Scanner;
public class Swapping {
	public static void main(String[] args)
	{
	Scanner sc=new Scanner(System.in);
	int x=sc.nextInt();
	int y=sc.nextInt();
	int temp;
	temp=x;
	x=y;
	y=temp;
	System.out.println(x);
	System.out.println(y);

}}
