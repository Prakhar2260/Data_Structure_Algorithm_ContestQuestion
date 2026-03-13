#include <stdio.h>

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int N,S;
	    scanf("%d %d",&N,&S);
	    
	     int maxScore=6*N;

        if(S<=5*N)
        {
            printf("%d\n", maxScore);
        }
        
        else
        {
            int extra=S-5*N;
            printf("%d\n", maxScore-extra);
        }
    }
	
	return 0;

}
