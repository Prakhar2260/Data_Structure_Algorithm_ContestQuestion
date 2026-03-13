#include <stdio.h>

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   int X,Y,N;
	   scanf("%d %d %d",&X,&Y,&N);
	   
	   if(X-Y*N<0)
	   {
	     printf("0\n");    
	   }
	   
	   else
	   printf("%d\n",X-Y*N);
	    
	}
	
	return 0;

}
