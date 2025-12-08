#include <stdio.h>

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	
	
	while(T--)
	{
	  int n,x;
	  scanf("%d %d",&n,&x);
	  
	  if (x> n)
	  {
            printf("0\n");
            continue;
	  }
	  
	  int customers=n-x+1;
      int revenue=(n*(n+1)/2)-((x-1)*x/2);
        int cost=customers*x;
        
         int profit=revenue-cost;
	    
	    printf("%d\n",profit);
	}

}

