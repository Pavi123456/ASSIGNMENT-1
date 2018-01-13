import java.util.*;
import java.lang.*;
import java.lang.String;
import java.math.BigInteger;
import java.util.ArrayList;

public class str {
        public static void main(String args[]) {
         Scanner s=new Scanner(System.in);
         String z=s.nextLine();
         String x[]=z.split(" ");
         int count=0;
         for(String p:x){
             count++;
         }
            if(count<2){
                System.out.println("null");
            }
            else{
                x[1]=x[1].toUpperCase();
                System.out.println(x[1]);
            }
            
    }

}
