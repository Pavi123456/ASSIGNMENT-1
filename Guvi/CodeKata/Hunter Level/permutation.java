import java.io.*;
import java.util.*;
class permutation{
    
	public static void main (String[] args) {
        Scanner sc=new Scanner(System.in);
        String d=sc.next();
        char a[]=d.toCharArray();
        for(int i=1;i<=a.length;i++){
            for(int j=0;j<a.length-1;j++){
                char temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                for(int k=0;k<a.length;k++){
                    System.out.print(a[k]+" ");
                }
                System.out.println();
            }
        }
	}
}
