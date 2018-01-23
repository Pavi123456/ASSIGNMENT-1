import java.util.Scanner;

class Camel_case{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int i;
        char first=s.charAt(0);
        String res="";
        res=res+Character.toUpperCase(first);
        for(i=1;i<s.length();i++)
        {
            char curchar=s.charAt(i);
            char prevchar=s.charAt(i-1);
            if(prevchar == ' ')
            {
                res=res+Character.toUpperCase(curchar);
            }
            else
                res=res+curchar;
        }
        System.out.println(res);
    }
}
