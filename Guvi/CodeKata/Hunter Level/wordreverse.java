import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class wordreverse{
    public static void main(String ar[]){
    String s;
    Scanner sc=new Scanner(System.in);
    s=sc.nextLine();
    String a[]=s.split("\\s+");
    for(int i=0;i<a.length;i++)
    {
        String m=new StringBuffer(a[i]).reverse().toString();
        System.out.printf("%s ", m);
    }

}
}
