import java.util.Scanner;
public class binaryprimerange
{
    public static void main(String[] args) 
    {
        int n, count = 0, a,u=0,b,i,flag=0,flag1=0,temp;
        String x = "";
        Scanner s = new Scanner(System.in);
        a = s.nextInt();
        b = s.nextInt();
        int c[]=new int[100];
       String bin[]=new String[100];
        int cou[]=new int[100];
        for(i=a;i<=b;i++)
        {
            c[u]=i;
            u++;
        }
        for(i=0;i<u;i++)
        {
        while(c[i] > 0)
        {
            a = c[i] % 2;
            if(a == 1)
            {
                count++;
            }
            x = a + "" + x;
            c[i] = c[i] / 2;
        }
        bin[i]=x;
        cou[i]=count;
        x ="";
        count=0;
        }
       
        for(i=0;i<u;i++)
        {
            
          for(int j=2;j<=cou[i]/2;j++)
	        {
	            
                temp=cou[i]%j;
	            if(temp==0)
	            {
	                flag++;
	                break;
	            }
	        }
	        if(cou[i]==1)
	            {
	                flag++;
	            }
	         
	        if(flag==0)
	        {
	            flag1++;
	        }
	        flag=0;
        }
        System.out.println(flag1);
           
        
        
    }
}
