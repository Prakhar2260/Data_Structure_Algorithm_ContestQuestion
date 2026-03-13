#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int a,b,c;
	    
	    scanf("%d %d %d",&a,&b,&c);
	    
	    while(a>0 && b>0)
	      {
	        a=a-1;
	        b=b-2;
	      }
	      
	      while(c>0 && b>0)
	      {
	        c=c-3;
	        b=b-1;
	      }
	      
	      if(a==0 && b==0 && c==0)
	        printf("YES\n");
	        
	       else
	        printf("NO\n");
	}
	
	return 0;

}
