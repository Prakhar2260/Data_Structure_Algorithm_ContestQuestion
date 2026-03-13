#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int A,B,X,Y;
	    scanf("%d %d %d %d",&A,&B,&X,&Y);
	    
	    while(A>=X)
	    {
	    A=A-X;
	    B=B+Y;
	    }
	    
	    printf("%d\n",A+B);
	    
	}
	
	return 0;

}
