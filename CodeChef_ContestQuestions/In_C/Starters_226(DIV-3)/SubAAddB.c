#include <stdio.h>

int main() 
{
	// your code goes here
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int N,A,B;
	    scanf("%d %d %d",&N,&A,&B);

        int finallen=0;
        
        while(N>=A)
         {
            N=N-A+B; 

         }        
         printf("%d\n",N);
	    
	}
	
	return 0;

}
