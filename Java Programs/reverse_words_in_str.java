
import java.io.*;
import java.util.*;
import java.lang.*;

class Reverse_Words_in_String {
	public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
	    String inputstr=sc.nextLine();
	    int i,j;
	    String[] words=inputstr.split(" ");
	    String reversestr="";
	    for(i=0;i<words.length;i++)
	    {
	        String word=words[i];
	        String reverseword="";
	        for(j=word.length()-1;j>=0;j--)
	        {
	            reverseword=reverseword+word.charAt(j);
	        }
	        reversestr=reversestr+reverseword+" ";
	    }
	    System.out.println(inputstr);
	    System.out.println(reversestr);
	    
        
	}
}
