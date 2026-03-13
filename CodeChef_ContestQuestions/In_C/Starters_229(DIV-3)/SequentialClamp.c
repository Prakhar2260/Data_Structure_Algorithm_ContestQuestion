#include <stdio.h>

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   int N;
	   scanf("%d",&N);
	   
	   int array[N][2];
	   
	   for(int i=0;i<N;i++)
	     {
	       for(int j=0;j<2;j++)
	         {
	             scanf("%d",&array[i][j]);
	         }
	     }
	     
	     int Y=101;
	     
	     for(int i=0;i<N;i++)
	      {
	       if(Y<array[i][0])
	         {
	             Y=array[i][0];
	         }
	         
	        if(Y>array[i][1])
	         {
	             Y=array[i][1];
	         }
	      }
	      
	      printf("%d\n",Y);
	}
	
	return 0;

}
