#include <stdio.h>

int main() 
{
	// your code goes here
  int T;
  scanf("%d",&T);
  
  while(T--)
  {
     int n,k;
     scanf("%d %d",&n,&k);
     
     char S[n+1];
     scanf("%s",S);
     
     int zero=0,one=0;
     
     for(int i=0;i<n;i++)
      {
        if(S[i]=='0')
         zero++;
         
         else
           one++;
      }
      
      int total=0;

        for(int i= 0;i< k;i++)
        {
            int group=0;
            for (int j =i;j<n; j=j+ k)
                group++;

            total=total+(group+1)/2;
        }
        
  

      
       if(zero<=total && one<=total)
        printf("Yes\n");
        
        else
        printf("No\n");
    
  }
  
  return 0;
 
}

