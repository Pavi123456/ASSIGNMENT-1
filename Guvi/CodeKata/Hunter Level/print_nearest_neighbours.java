import java.util.*; 
 
class Nearestneighbour
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
         int n,i,k,t=0,j,s=0,u=0;
         n=sc.nextInt();
         k=sc.nextInt();
         int a[]=new int[n];
          int b[]=new int[n];
          int c[]=new int[n];
          int d[]=new int[n];
    for(i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
    }
    
  for(i=0;i<n;i++)
  {
      
      b[t]=Math.abs(a[i]-k);
    
       t++;
      
  }
 
  Arrays.sort(b);
  for(i=0;i<t;i++)
  {
      if(b[i]==0)
      {
          
      }
      else{
          c[s]=b[i];
          
          s++;
      }
     
  }
  
 for(i=0;i<n;i++)
  {
      for(j=0;j<3;j++)
      {
    if(Math.abs(a[i]-k)==c[j])
    {
    d[u]=a[i];
    
    u++;
 break;
    }
    else{
        
    }
      }
  }
  
  for(i=0;i<3;i++)
  {
      System.out.print(d[i]+" ");
  }
}
}
