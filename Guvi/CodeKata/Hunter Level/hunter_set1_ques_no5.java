import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class nummatchingtostr{
     public static void main(String aa[]){
      int a;
      Scanner s=new Scanner(System.in);
      a=s.nextInt();
      HashMap<Integer,Character>p=new HashMap<Integer, Character>();
      String b=String.valueOf(a);
      char c[]=b.toCharArray();
      char x='a';
      int count=0;
      for(int i=1;i<26;i++){
          p.put(i, x);
          x++;
      }
      for(int i=0;i<c.length;i++){
          int c1=Character.getNumericValue(c[i]);
          if(p.containsKey(c1)){
          char t= p.get(c1);
          count++;
          }
      }
      System.out.println(count);
    }
}
