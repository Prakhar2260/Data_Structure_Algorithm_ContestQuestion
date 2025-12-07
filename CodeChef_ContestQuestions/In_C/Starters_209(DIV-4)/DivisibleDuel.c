#include <stdio.h>

int main() {
	// your code goes here

   int T;
   scanf("%d",&T);
   
   
   while(T--)
    {
     int X,Y;
     scanf("%d %d",&X,&Y);
     
     int Sodd=0;
     int Seven=0;
     
     for (int i=X;i<=Y;i+=X){
            if (i%2==0)
                Seven+=i;
            else
                Sodd+=i;
        }
      
      if(Seven>=Sodd)
       {
         printf("YES\n");  
       }
       
      else
       {
           printf("NO\n");
       }
        
    }
    
    return 0;
}

