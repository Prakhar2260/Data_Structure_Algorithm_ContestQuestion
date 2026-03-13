#include <stdio.h>

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   int n;
	   scanf("%d",&n);
	   
	   int array[n];
	   for(int i=0;i<n;i++)
	    {
	        scanf("%d",&array[i]);
	    }
	    
	    for(int i=n-1;i>=0;i--)
	     {
	       array[i-1]=array[i]+array[i-1];  
	     }
	     
	   
	    if(array[0]%2==0)
	     printf("Yes\n");
	     
	     else
	      printf("No\n");
	    
	}
	
	return 0;

}
