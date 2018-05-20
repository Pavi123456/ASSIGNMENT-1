import java.util.*;  
class Indexmatching{  
 public static void main(String args[]){  
  Scanner sc=new Scanner(System.in);
  int n,i,t=0;
  n=sc.nextInt();
  int a[]=new int[n];
    int b[]=new int[n];
  for(i=0;i<n;i++)
  {
      a[i]=sc.nextInt();
      if(a[i]==i)
      {
          b[t]=a[i];
          t++;
      }
      
  }
  
   for(i=0;i<t;i++)
   {
       System.out.print(b[i]+" ");
   }
  }
 }
