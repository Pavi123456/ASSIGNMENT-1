import java.util.*; 
class productexcept
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i,j,pro=1;
        n=sc.nextInt();
        int a[]=new int[n];
          int b[]=new int[n];
        for(i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
            b[i]=a[i];
        }
        for(i=0;i<n;i++)
        {
            pro=pro*b[i];
        }
        for(i=0;i<n;i++)
        {
            b[i]=pro/b[i];
            System.out.print(b[i]+" ");
        }
        
    }
}
