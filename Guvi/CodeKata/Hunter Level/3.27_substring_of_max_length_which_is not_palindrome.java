import java.util.*;
import java.lang.*;
public class palindrome
{
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        String a =s.nextLine();
        String x="";
        int l,i,count=0;
        l=a.length();
        char[] c=new char[l];
        for(i=0;i<l;i++)
        {
            c[i]=a.charAt(i);
           
        }
        for(i=l-1;i>=0;i--)
        {
            x=x+c[i];
           
        }
    
        if(a.equals(x))
        {
           count++;
         
        }
        
        if(count==1)
        {
            for(i=0;i<l-1;i++)
            {
                System.out.print(c[i]+"");
            }
        }
        else{
            System.out.print(a);
        }
	        
    }
}
        
        
