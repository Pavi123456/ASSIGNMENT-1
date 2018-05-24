import java.util.*;
import java.lang.*;
public class removeduplicate
{
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        String a =s.nextLine();
        String str1="";
        int len,i,count=0,j;
        len=a.length();
        char[] c=new char[len];
        for(i=0;i<len;i++)
        {
            c[i]=a.charAt(i);
           
        }
        for(i=0;i<len;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(c[i]==c[j])
                {
                    c[j]='*';
                }
        }
        }
        
        for(i=0;i<len;i++)
        {
	       if(c[i]>='a'&&c[i]<='z'||c[i]>='A'&&c[i]<='Z')
	       {
	           
	           str1+=c[i];
	       }
        }
        System.out.print(str1);
    }
}
        
        
   
