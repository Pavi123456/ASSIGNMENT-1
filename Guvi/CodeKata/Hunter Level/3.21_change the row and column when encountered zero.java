import java.util.*;

public class changerowcol
{

	public static void main(String[] args)
	{
		int n,m,i,j,k,l,p;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		m=sc.nextInt();
		int a[][]=new int[n][m];
		for(i=0;i<n;i++)
		{
		    for(j=0;j<m;j++)
			{
				a[i][j]=sc.nextInt();
			}
	    }
	
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i][j]==0)
					{
					for(k=0;k<m;k++)
				
						a[i][k]='0';
					for(l=i+1;l<n;l++)
						a[l][j]='0';
					if(i>0)
						for(p=i-1;p>=0;p--)
							a[p][j]='0';
						
					}
					
			}
		}
		
		for(i=0;i<n;i++)
		{
		   for(j=0;j<m;j++)
		   {
			   if(a[i][j]=='0')
			   {
			          a[i][j]=0;
			   }
		   }
		}
		for(i=0;i<n;i++)
		{
		   for(j=0;j<m;j++)
		   {

            System.out.print(a[i][j]+" ");
		   }
		   System.out.print("\n");
		}
		
		
	}

}
