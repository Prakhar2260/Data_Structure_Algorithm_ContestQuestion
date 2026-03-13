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
	   
	   int A[N];
	   for(int i=0;i<N;i++)
	    scanf("%d",&A[i]);
	    
	   int B[N];
	   for(int i=0;i<N;i++)
	    scanf("%d",&B[i]); 
	    
	   int diff[N];
	   for(int i=0;i<N;i++)
	    diff[i]=A[i]-B[i];
	    
	   int minValue=1001;
	   
	   for(int i=0;i<N;i++)
	    {
	      if(minValue>diff[i])
	        minValue=diff[i];
	    }
	    
	    int count=0;
	    int sum=0;
	    for(int j=0;j<N;j++)
	     {
	       if(diff[j]==minValue && count==0)
	       {
	        sum=sum+B[j];
            count=1;
	       }    
	       else
	        sum=sum+A[j];
	     }
	    
	    printf("%d\n",sum);
	}
	
	return 0;

}
