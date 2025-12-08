#include <stdio.h>

int main() {
	// your code goes here

   int T;
   scanf("%d",&T);
   
   while(T--)
   {
     int W,P,K;
     scanf("%d %d %d",&W,&P,&K);
     
     int white=0;
     for(int i=1;i<=W;i++)
       {
         white=white+2;
         K--;
         
         if(K==0)
          break;
       }
       
      if(K!=0)
       {
         for(int i=1;i<=P;i++)
         {
         white=white+1;
         K--;
         
         if(K==0)
          break;
         }  
       }
       
       printf("%d\n",white);
       
   }
   
   return 0;
}

