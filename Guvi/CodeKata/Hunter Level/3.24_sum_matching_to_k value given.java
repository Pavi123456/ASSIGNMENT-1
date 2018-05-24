import java.util.*; 
class summatching
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i,j,k,flag=0;
        n=sc.nextInt();
        k=sc.nextInt();
        int a[]=new int[n];
        
        for(i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
           
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==k)
                {
                    System.out.println("YES");
                    flag=1;
                    break;
                }
                
                   
            }
        }
          if(flag==0)
          {
              System.out.println("NO");
          }
        
    }
}
        
