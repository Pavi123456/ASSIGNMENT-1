import java.io.*;
import java.lang.*;
import java.util.*;
class permutation{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        String st=sc.nextLine();
        char ch[]=st.toCharArray();
        int i,j,k;
        for(i=0;i<ch.length;i++)
        {
            for(j=0;j<ch.length-1;j++)
            {
                char temp=ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=temp;
            
                for(k=0;k<ch.length;k++)
                {
                System.out.print(ch[k]);
                }
                System.out.println();
            }
            
        }
    }
}
