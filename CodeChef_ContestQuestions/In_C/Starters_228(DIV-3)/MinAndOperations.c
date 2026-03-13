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

        long long sum = N*(N+1+1)/2;
        
        printf("%lld\n",sum/2);
    }

    return 0;

}
