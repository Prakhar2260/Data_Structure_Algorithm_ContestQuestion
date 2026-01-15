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
	   
	   int temp[N];
	   for(int i=0;i<N;i++)
	    scanf("%d",&temp[i]);
	    
	    int count=0;
	    int jacket=0;
	   
	   
        for (int i = 0;i<N;i++)
        {
            if (temp[i]<A)
            {
                if(jacket==0) 
                {
                    jacket = 1;
                    count++;
                }
            }
            
            else if (temp[i]>B)
            {
                jacket = 0;
            }
        
        }
	    printf("%d\n",count);
	 }
	 
	 return 0;

}

