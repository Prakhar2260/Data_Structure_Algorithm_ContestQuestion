#include <stdio.h>

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	 {
	  int N;
	  scanf("%d",&N);
	  
	  int X=N;
	  for(int i=1;i<=N-1;i++)
	    {
	          
	     if(i%2==0)
	     X=X+(N-i);
	     
	     else
	      X=X-(N-i);
	    }
	    
	   printf("%d\n",X); 
	 }
	 
	 return 0;

}

