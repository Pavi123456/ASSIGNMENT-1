import java.io.*;
import java.util.*;
import java.lang.*;
class String_append
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        StringBuffer sb=new StringBuffer(sc.nextLine());
        StringBuffer newstr=sb.append(".");
        System.out.println(newstr);
    }
}
